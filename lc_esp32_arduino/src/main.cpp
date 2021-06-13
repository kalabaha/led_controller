#include <Arduino.h>

#include "version.h"
#include "config.h"

void setup()
{
    Serial.begin(CONFIG_UART_BAUD_RATE);
    Serial.setDebugOutput(true);
    printf("\n\n");
    printf("========================\n");
    if (BUILD_NUMBER < 0)
    {
        printf("  LOCAL BUILD: %05d\n", -BUILD_NUMBER);
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

void loop()
{
    // put your main code here, to run repeatedly:
}