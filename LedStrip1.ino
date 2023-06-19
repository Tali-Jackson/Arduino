#include <Adafruit_NeoPixel.h>

#define NUM_LEDS    8
#define WAIT_PERIOD 350

#define BLUE pixels1.Color(0,0,255)
#define GREEN pixels2.Color(0,255,0)
#define YELLOW pixels3.Color(255,255,0)
#define RED pixels4.Color(255,0,0)

int ledPos1 = 5;
int ledPos2 = 5;
int ledPos3 = 5;
int ledPos4 = 5;

int b1 = 12;
int b2 = 11;
int g1 = 9;
int g2 = 8;
int y1 = 5;
int y2 = 4;
int r1 = 3;
int r2 = 2;

int b_led_strip = A0;
int g_led_strip = A2;
int y_led_strip = A6;
int r_led_strip = A7;

Adafruit_NeoPixel pixels1 = Adafruit_NeoPixel(NUM_LEDS, b_led_strip, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixels2 = Adafruit_NeoPixel(NUM_LEDS, g_led_strip, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixels3 = Adafruit_NeoPixel(NUM_LEDS, y_led_strip, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixels4 = Adafruit_NeoPixel(NUM_LEDS, r_led_strip, NEO_GRB + NEO_KHZ800);

void setup() {
  Serial.begin(9600);

  pixels1.begin();
  pixels2.begin();
  pixels3.begin();
  pixels4.begin();

  pinMode(b1,  INPUT);
  pinMode(b2,  INPUT);
  pinMode(g1,  INPUT);
  pinMode(g2,  INPUT);
  pinMode(y1,  INPUT);
  pinMode(y2,  INPUT);
  pinMode(r1,  INPUT);
  pinMode(r2,  INPUT);

  // put your setup code here, to run once:

}

void loop() {

 if (digitalRead(b1) == HIGH){
   if (ledPos1 < 8 ) {
     ledPos1 ++;
     delay(WAIT_PERIOD);
   }
 } 
 if (digitalRead(b2) == HIGH) {
   if (ledPos1 > 0 ) {
     ledPos1 --;
     delay(WAIT_PERIOD);
   }
 }
  if (digitalRead(g1) == HIGH) {
    if (ledPos2 < 8) {
      ledPos2 ++; 
      delay(WAIT_PERIOD);
      }
  }
  if (digitalRead(g2) == HIGH) {
   if (ledPos2 > 0 ) {
     ledPos2 --;
     delay(WAIT_PERIOD);
   }
   }
   if (digitalRead(y1) == HIGH) {
    if (ledPos3 < 8) {
      ledPos2 ++; 
      delay(WAIT_PERIOD);
      }
  }
  if (digitalRead(y2) == HIGH) {
   if (ledPos3 > 0 ) {
     ledPos2 --;
     delay(WAIT_PERIOD);
   }
   }if (digitalRead(r1) == HIGH) {
    if (ledPos4 < 8) {
      ledPos2 ++; 
      delay(WAIT_PERIOD);
      }
  }
  if (digitalRead(r2) == HIGH) {
   if (ledPos4 > 0 ) {
     ledPos2 --;
     delay(WAIT_PERIOD);
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

