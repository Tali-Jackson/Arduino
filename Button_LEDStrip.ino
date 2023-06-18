#include <MFRC522.h>
#include <SPI.h>
#include <Adafruit_NeoPixel.h>

#define RST_PIN 9    // Reset pin connected to digital pin 9
#define SS_PIN 10    // Slave Select pin connected to digital pin 10
#define b_led_strip 7
#define g_led_strip 6
#define y_led_strip 5
#define r_led_strip 4

#define NUM_LEDS 8  // Number of LEDs in the strip

#define BLUE pixels1.Color(0,0,50)
#define GREEN pixels2.Color(0,50,0)
#define YELLOW pixels3.Color(70,30,0)
#define RED pixels4.Color(50,0,0)


MFRC522 mfrc522(SS_PIN, RST_PIN); // Create instance of MFRC522
Adafruit_NeoPixel pixels1(NUM_LEDS, b_led_strip, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixels2(NUM_LEDS, g_led_strip, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixels3(NUM_LEDS, y_led_strip, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixels4(NUM_LEDS, r_led_strip, NEO_GRB + NEO_KHZ800);


int ledPos1 = 5;
int ledPos2 = 5;
int ledPos3 = 5;
int ledPos4 = 5;



bool rfid1Used = false;
bool rfid2Used = false;
bool rfid3Used = false;
bool rfid4Used = false;
bool rfid5Used = false;
bool rfid6Used = false;
bool rfid7Used = false;
bool rfid8Used = false;
bool rfid9Used = false;
bool rfid10Used = false;
bool rfid11Used = false;
bool rfid12Used = false;
bool rfid13Used = false;
bool rfid14Used = false;
bool rfid15Used = false;
bool rfid16Used = false;
bool rfid17Used = false;
bool rfid18Used = false;
bool rfid19Used = false;
bool rfid20Used = false;
bool rfid21Used = false;
bool rfid22Used = false;
bool rfid23Used = false;
bool rfid24Used = false;
bool rfid25Used = false;
bool rfid26Used = false;
bool rfid27Used = false;
bool rfid28Used = false;
bool rfid29Used = false;
bool rfid30Used = false;
bool rfid31Used = false;
bool rfid32Used = false;
bool rfid33Used = false;
bool rfid34Used = false;
bool rfid35Used = false;
bool rfid36Used = false;


void setup() {
  Serial.begin(9600);
  SPI.begin();                // Initialize SPI bus
  mfrc522.PCD_Init(SS_PIN, RST_PIN); // Initialize MFRC522 RFID reader with SS and RST pins
 
  pixels1.begin();
  pixels2.begin();
  pixels3.begin();
  pixels4.begin();

  pixels1.show();
  pixels2.show();
  pixels3.show();
  pixels4.show();
  // Set the initial LED strip position
}

void rfid1() {
  if (!rfid1Used) {
  // Decrease the LED strip position by 1
  if (ledPos1 < 8 ) {
    ledPos1 += 2;
    pixels1.show(); // Update the LED strip with the new colors
  }
   if (ledPos4 > 0) {
    ledPos4 -= 1;
    pixels4.show(); // Update the LED strip with the new colors
  }
}

void rfid2() {
  if (!rfid2Used) {
  // Decrease the LED strip position by 1
 if (ledPos1 > 0 ) {
    ledPos1 -= 1;
    pixels1.show(); // Update the LED strip with the new colors
  }
  }
}
void rfid3() {
  if (!rfid3Used) {
  // Decrease the LED strip position by 1
  if (ledPos1 > 0 ) {
    ledPos1 -= 1;
    pixels1.show(); // Update the LED strip with the new colors
  }
   if (ledPos4 > 0) {
    ledPos4 -= 1;
    pixels4.show(); // Update the LED strip with the new colors
  }
}
void rfid4() {
  if (!rfid4Used) {
  // Decrease the LED strip position by 1
  if (ledPos1 < 8 ) {
    ledPos1 += 1;
    pixels1.show(); // Update the LED strip with the new colors
  }
   if (ledPos4 > 0) {
    ledPos4 -= 1;
    pixels4.show(); // Update the LED strip with the new colors
  }
}
void rfid5() {
  if (!rfid5Used) {
  // Decrease the LED strip position by 1
  if (ledPos1 > 0 ) {
    ledPos1 -= 2;
    pixels1.show(); // Update the LED strip with the new colors
  }
   if (ledPos4 > 0) {
    ledPos4 -= 2;
    pixels4.show(); // Update the LED strip with the new colors
  }
}
void rfid6() {
  if (!rfid6Used) {
  // Decrease the LED strip position by 1
  if (ledPos1 > 0 ) {
    ledPos1 -= 1;
    pixels1.show(); // Update the LED strip with the new colors
  }
   if (ledPos3 > 0 ) {
    ledPos3 -= 2;
    pixels3.show(); // Update the LED strip with the new colors
  }
}
void rfid7() {
  if (!rfid7Used) {
  // Decrease the LED strip position by 1
  if (ledPos1 < 8 ) {
    ledPos1 += 1;
    pixels1.show(); // Update the LED strip with the new colors
  }
   if (ledPos4 > 0) {
    ledPos4 -= 2;
    pixels4.show(); // Update the LED strip with the new colors
  }
}
void rfid8() {
  if (!rfi81Used) {
  // Decrease the LED strip position by 1
  if (ledPos2 > 0 ) {
    ledPos2 -= 1;
    pixels2.show(); // Update the LED strip with the new colors
  }
   if (ledPos3 < 8) {
    ledPos3 += 2;
    pixels3.show(); // Update the LED strip with the new colors
  }
}
void rfid9() {
  if (!rfid9Used) {
  // Decrease the LED strip position by 1
   if (ledPos3 < 8) {
    ledPos3 += 1;
    pixels3.show(); // Update the LED strip with the new colors
  }
}
void rfid10() {
  if (!rfid10Used) {
  // Decrease the LED strip position by 1
   if (ledPos3 > 0 ) {
    ledPos3 -= 1;
    pixels3.show(); // Update the LED strip with the new colors
  }
}
void rfid11() {
  if (!rfid11Used) {
  // Decrease the LED strip position by 1
  if (ledPos2 > 0 ) {
    ledPos2 -= 2;
    pixels2.show(); // Update the LED strip with the new colors
  }
   if (ledPos3 < 8) {
    ledPos3 += 1;
    pixels3.show(); // Update the LED strip with the new colors
  }
}
void rfid12() {
  if (!rfid12Used) {
  // Decrease the LED strip position by 1
  if (ledPos1 < 8 ) {
    ledPos1 += 2;
    pixels1.show(); // Update the LED strip with the new colors
  }
   if (ledPos4 < 8) {
    ledPos4 += 2;
    pixels4.show(); // Update the LED strip with the new colors
  }
}
void rfid13() {
  if (!rfid13Used) {
  // Decrease the LED strip position by 1
  if (ledPos1 > 0 ) {
    ledPos1 -= 1;
    pixels1.show(); // Update the LED strip with the new colors
  }
   if (ledPos4 > 0) {
    ledPos4 -= 2;
    pixels4.show(); // Update the LED strip with the new colors
  }
}
void rfid14() {
  if (!rfid14Used) {
  // Decrease the LED strip position by 1
   if (ledPos1 > 0 ) {
    ledPos1 -= 1;
    pixels1.show(); // Update the LED strip with the new colors
   }
   if (ledPos4 > 0 ) {
    ledPos4 -= 1;
    pixels4.show(); // Update the LED strip with the new colors
  }
}
void rfid15() {
  if (!rfid15Used) {
  // Decrease the LED strip position by 1
  if (ledPos2 < 8 ) {
    ledPos2 += 1;
    pixels2.show(); // Update the LED strip with the new colors
  }
   if (ledPos3 < 8) {
    ledPos3 += 2;
    pixels3.show(); // Update the LED strip with the new colors
  }
}
void rfid16() {
  if (!rfid16Used) {
  // Decrease the LED strip position by 1
   if (ledPos1 > 0 ) {
    ledPos1 -= 1;
    pixels1.show(); // Update the LED strip with the new colors
   }
    if (ledPos3 > 0 ) {
    ledPos3 -= 1;
    pixels3.show(); // Update the LED strip with the new colors
  }
}
void rfid17() {
  if (!rfid17Used) {
  // Decrease the LED strip position by 1
   if (ledPos1 > 0 ) {
    ledPos1 -= 2;
    pixels1.show(); // Update the LED strip with the new colors
   }
   if (ledPos3 < 8 ) {
    ledPos3 += 1;
    pixels3.show();
   }
   if (ledPos4 > 0) {
    ledPos4 -= 2;
    pixels4.show(); // Update the LED strip with the new colors
  }
}
void rfid18() {
  if (!rfid18Used) {
  // Decrease the LED strip position by 1
   if (ledPos1 < 8 ) {
    ledPos1 += 1;
    pixels1.show(); // Update the LED strip with the new colors
   }
   if (ledPos3 > 0) {
    ledPos3 += 1;
    pixels3.show();
   }
   if (ledPos4 > 0) {
    ledPos4 -= 1;
    pixels4.show(); // Update the LED strip with the new colors
  }
}
void rfid19() {
  if (!rfid19Used) {
  // Decrease the LED strip position by 1
   if (ledPos1 > 0 ) {
    ledPos1 -= 1;
    pixels1.show(); // Update the LED strip with the new colors
   }
    if (ledPos3 > 0 ) {
    ledPos3 -= 1;
    pixels1.show();
    }
}
void rfid20() {
  if (!rfid20Used) {
  // Decrease the LED strip position by 1
  if (ledPos1 < 8 ) {
    ledPos1 += 1;
    pixels1.show(); // Update the LED strip with the new colors
  } 
   if (ledPos3 > 0) {
    ledPos3 -= 1;
    pixels3.show(); // Update the LED strip with the new colors
  }
}
void rfid21() {
  if (!rfid21Used) {
  // Decrease the LED strip position by 1
  if (ledPos1 > 0 ) {
    ledPos1 -= 2;
    pixels1.show(); // Update the LED strip with the new colors
  }  
  
  if (ledPos2 > 0 ) {
    ledPos2 -= 1;
    pixels2.show();

   if (ledPos4 > 0) {
    ledPos4 -= 1;
    pixels4.show(); // Update the LED strip with the new colors
  }
}
void rfid22() {
  if (!rfid22Used) {
  // Decrease the LED strip position by 1
   if (ledPos4 > 0) {
    ledPos4 -= 2;
    pixels4.show(); // Update the LED strip with the new colors
  }
}
void rfid23() {
  if (!rfid23Used) {
  // Decrease the LED strip position by 1
   if (ledPos3 > 0 ) {
    ledPos3 -= 1;
    pixels3.show(); // Update the LED strip with the new colors
   }
}
void rfid24() {
  if (!rfid24Used) {
  // Decrease the LED strip position by 1
    if (ledPos3 > 0 ) {
    ledPos3 -= 1;
    pixels3.show(); // Update the LED strip with the new colors
   }
}
void rfid25() {
  if (!rfid25Used) {
  // Decrease the LED strip position by 1
  if (ledPos3 < 8 ) {
    ledPos3 += 1;
    pixels3.show(); // Update the LED strip with the new colors
  } 
   if (ledPos4 > 0) {
    ledPos4 -= 1;
    pixels4.show(); // Update the LED strip with the new colors
  }
}
void rfid26() {
  if (!rfid26Used) {
  // Decrease the LED strip position by 1
  if (ledPos1 < 8 ) {
    ledPos1 += 1;
    pixels1.show(); // Update the LED strip with the new colors
  }
   if (ledPos3 < 8 ) {
    ledPos3 += 1;
    pixels3.show();
   }
}
void rfid27() {
  if (!rfid27Used) {
  // Decrease the LED strip position by 1
  if (ledPos2 < 8 ) {
    ledPos2 += 1;
    pixels2.show(); // Update the LED strip with the new colors

   if (ledPos3 < 8) {
    ledPos3 += 1;
    pixels3.show(); // Update the LED strip with the new colors
  }
}void rfid28() {
  if (!rfid28Used) {
  // Decrease the LED strip position by 1
  if (ledPos1 < 8 ) {
    ledPos1 += 2;
    pixels1.show(); // Update the LED strip with the new colors

   if (ledPos4 < 8) {
    ledPos4 += 2;
    pixels4.show(); // Update the LED strip with the new colors
  }
}
void rfid29() {
  if (!rfid29Used) {
  // Decrease the LED strip position by 1
  if (ledPos1 < 8 ) {
    ledPos1 += 1;
    pixels1.show();
    } // Update the LED strip with the new colors
 if (ledPos1 < 8 ) {
    ledPos1 += 1;
    pixels1.show();
    } if (ledPos1 < 8 ) {
    ledPos1 += 1;
    pixels1.show();
    }
   if (ledPos4 < 8) {
    ledPos4 += 2;
    pixels4.show(); // Update the LED strip with the new colors
  }
}void rfid30() {
  if (!rfid30Used) {
  // Decrease the LED strip position by 1
  if (ledPos1 < 8 ) {
    ledPos1 += 2;
    pixels1.show(); // Update the LED strip with the new colors

   if (ledPos4 < 8) {
    ledPos4 += 2;
    pixels4.show(); // Update the LED strip with the new colors
  }
}void rfid31() {
  if (!rfid31Used) {
  // Decrease the LED strip position by 1
  if (ledPos1 < 8 ) {
    ledPos1 += 2;
    pixels1.show(); // Update the LED strip with the new colors

   if (ledPos4 < 8) {
    ledPos4 += 2;
    pixels4.show(); // Update the LED strip with the new colors
  }
}void rfid32() {
  if (!rfid32Used) {
  // Decrease the LED strip position by 1
  if (ledPos1 < 8 ) {
    ledPos1 += 2;
    pixels1.show(); // Update the LED strip with the new colors

   if (ledPos4 < 8) {
    ledPos4 += 2;
    pixels4.show(); // Update the LED strip with the new colors
  }
}void rfid33() {
  if (!rfid33Used) {
  // Decrease the LED strip position by 1
  if (ledPos1 < 8 ) {
    ledPos1 += 2;
    pixels1.show(); // Update the LED strip with the new colors

   if (ledPos4 < 8) {
    ledPos4 += 2;
    pixels4.show(); // Update the LED strip with the new colors
  }
}void rfid34() {
  if (!rfid34Used) {
  // Decrease the LED strip position by 1
  if (ledPos1 < 8 ) {
    ledPos1 += 2;
    pixels1.show(); // Update the LED strip with the new colors

   if (ledPos4 < 8) {
    ledPos4 += 2;
    pixels4.show(); // Update the LED strip with the new colors
  }
}void rfid35() {
  if (!rfid35Used) {
  // Decrease the LED strip position by 1
  if (ledPos1 < 8 ) {
    ledPos1 += 2;
    pixels1.show(); // Update the LED strip with the new colors

   if (ledPos4 < 8) {
    ledPos4 += 2;
    pixels4.show(); // Update the LED strip with the new colors
  }
}void rfid36() {
  if (!rfidUsed) {
  // Decrease the LED strip position by 1
  if (ledPos1 < 8 ) {
    ledPos1 += 2;
    pixels1.show(); // Update the LED strip with the new colors

   if (ledPos4 < 8) {
    ledPos4 += 2;
    pixels4.show(); // Update the LED strip with the new colors
  }
}

void updateStrip() {
  pixels1.show(); // Update the LED strip with the new colors
  pixels2.show();
  pixels3.show();
  pixels4.show();

}
void loop() {
  if (mfrc522.PICC_IsNewCardPresent()) {
    if (mfrc522.PICC_ReadCardSerial()) {

     if (mfrc522.uid.uidByte[0] == 0x63 && mfrc522.uid.uidByte[1] == 0x5A &&
          mfrc522.uid.uidByte[2] == 0x30 && mfrc522.uid.uidByte[3] == 0x1B) {
        // First RFID card is presented, decrease the lights
        rfid1();
        updateStrip();
      } else if (mfrc522.uid.uidByte[0] == 0x33 && mfrc522.uid.uidByte[1] == 0x82 &&
                 mfrc522.uid.uidByte[2] == 0x95 && mfrc522.uid.uidByte[3] == 0x1A) {
        // Second RFID card is presented, increase the lights
        rfid2();
        updateStrip();
      }
      delay(1000); // Delay for smoother LED transition (adjust as needed)
    }
  }
  pixels1.clear();
  pixels2.clear();
  pixels3.clear();
  pixels4.clear();

  for (int i = 0; i < ledPos1; i++) {
    pixels1.setPixelColor(i, BLUE);
  }
   for (int i = 0; i < ledPos2; i++) {
   pixels2.setPixelColor(i, GREEN);
  }
    for (int i = 0; i < ledPos3; i++) {
    pixels3.setPixelColor(i, YELLOW);
  }
    for (int i = 0; i < ledPos4; i++) {
    pixels4.setPixelColor(i, RED);
  }

  pixels1.show();
  pixels2.show();
  pixels3.show();
  pixels4.show();


  Serial.print(ledPos1);
  Serial.print("\t");
  Serial.println(ledPos2);
  Serial.println(ledPos3);
  Serial.println(ledPos4);
}
