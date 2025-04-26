#include <math.h>
const int pinNorth = A0;
const int pinEast = A1;
const int pinSouth = A2;
const int pinWest = A3;
float baselineOffset = 0.05;
void setup() {
  Serial.begin(9600);
}
void loop() {
  int rN = analogRead(pinNorth);
  int rE = analogRead(pinEast);
  int rS = analogRead(pinSouth);
  int rW = analogRead(pinWest);
  float t = rN + rE + rS + rW;
  float dX = rE - rW;
  float dY = rN - rS;
  float nX = 0;
  float nY = 0;
  if (t > 0) {
    nX = dX / t;
    nY = dY / t;
  }
  float m = sqrt(nX * nX + nY * nY);
  if (m > baselineOffset) {
    float f = (m - baselineOffset) / m;
    nX *= f;
    nY *= f;
  } else {
    nX = 0;
    nY = 0;
  }
  float xPos = nX * 100;
  float yPos = nY * 100;
  Serial.print(xPos * 10);
  Serial.print(",");
  Serial.println(yPos * 10);
  delay(100);
}
