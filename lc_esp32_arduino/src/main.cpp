#include <Arduino.h>

#include "version.h"

void setup() {
  Serial.begin(4000000);
  Serial.setDebugOutput(true);
  printf("\n\n");
  printf("========================\n");
  if (BUILD_NUMBER < 0)
  {
    printf("  LOCAL BUILD\n");
  }
  else
  {
    printf("  BUILD NUMBER: %05d\n", BUILD_NUMBER);
  }
  printf("  %s %s\n", __DATE__, __TIME__);
  printf("========================\n");
  printf("\n");

  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:
}