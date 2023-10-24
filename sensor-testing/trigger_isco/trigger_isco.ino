/**
 * @file trigger_isco.ino
 * @copyright (c) 2013-2020 Stroud Water Research Center (SWRC)
 *                          and the EnviroDIY Development Team
 *            This example is published under the BSD-3 license.
 * @author Ryan Cole
 * @date 
 *
 * @brief Wait a certain amount of time and then trigger an ISCO sample
 *
 * This is a simple demonstration of triggering an ISCO using an arduino uno
 * The ISCO is interfaced with the Arduino uno using teh Campbell Sci sampler
 * control cable (part#: 10164).
 * 
 * According to the manual, to trigger a sampler you must set the control port to 
 * high (5V) delay for 0.5 seconds, and then set the port low.
 *  
 * 
 * 
 */

#include <Arduino.h>
#define TRIGGER_PIN 7         /*!< The pin connected to control cable yellow */

void setup() {

    pinMode(TRIGGER_PIN, OUTPUT);

}

void loop() {

    digitalWrite(TRIGGER_PIN, HIGH);
    delay(500);
    digitalWrite(TRIGGER_PIN, LOW);
    delay(100000);


}