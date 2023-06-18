
#include <SPI.h>
#include <MFRC522.h>

#define SS_PIN 10    // Slave Select pin connected to digital pin 10
#define RST_PIN 9    // Reset pin connected to digital pin 9

MFRC522 mfrc522(SS_PIN, RST_PIN); // Create instance of MFRC522 RFID reader

struct RFIDCard {
  byte uid[4];
  bool used;
};

const int MAX_CARDS = 36;
RFIDCard cards[MAX_CARDS];
int cardCount = 0;
int counter = 1;

void setup() {
  Serial.begin(9600);
  SPI.begin();                // Initialize SPI bus
  mfrc522.PCD_Init(SS_PIN, RST_PIN); // Initialize MFRC522 RFID reader with SS and RST pins
}

void loop() {
  if (mfrc522.PICC_IsNewCardPresent()) {
    if (mfrc522.PICC_ReadCardSerial()) {
      if (cardCount < MAX_CARDS) {
        // Read the UID of the scanned card
        byte uid[4];
        for (byte i = 0; i < mfrc522.uid.size; i++) {
          uid[i] = mfrc522.uid.uidByte[i];
        }

        // Check if the card is already stored
        bool cardExists = false;
        for (int i = 0; i < cardCount; i++) {
          if (memcmp(uid, cards[i].uid, sizeof(uid)) == 0) {
            cardExists = true;
            break;
          }
        }

        if (!cardExists) {
          // Store the UID in the cards array
          memcpy(cards[cardCount].uid, uid, sizeof(uid));
          cards[cardCount].used = false;
          cardCount++;

          Serial.print("else if (mfrc522.uid.uidByte[0] == 0x");
          if (uid[0] < 0x10) {
            Serial.print("0");
          }
          Serial.print(uid[0], HEX);
          Serial.print(" && mfrc522.uid.uidByte[1] == 0x");
          if (uid[1] < 0x10) {
            Serial.print("0");
          }
          Serial.print(uid[1], HEX);
          Serial.print(" && mfrc522.uid.uidByte[2] == 0x");
          if (uid[2] < 0x10) {
            Serial.print("0");
          }
          Serial.print(uid[2], HEX);
          Serial.print(" && mfrc522.uid.uidByte[3] == 0x");
          if (uid[3] < 0x10) {
            Serial.print("0");
          }
          Serial.print(uid[3], HEX);
          Serial.println(") {");
          Serial.print("rfid");
          Serial.print(counter);
          Serial.println("();");
          counter++;
          Serial.println("  updateStrip();");
          Serial.println("}");
        }
      }

      mfrc522.PICC_HaltA();    // Halt PICC
      mfrc522.PCD_StopCrypto1();  // Stop encryption on PCD

      delay(2000); // Delay to avoid reading the same card repeatedly
    }
  }
}
