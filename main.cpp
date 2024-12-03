/*
 * Copyright (c) 2022, CATIE
 * SPDX-License-Identifier: Apache-2.0
 */

#include "mbed.h"
#include "bme280.h"

using namespace sixtron;

// Instantiate I2C and sensor
I2C i2c1(I2C1_SDA, I2C1_SCL);          // Use the correct pins for your board
BME280 sensor(&i2c1);                  // Pass I2C instance to the BME280 sensor

int main() {
    // Initialize sensor
    if (!sensor.initialize()) {
        printf("Failed to initialize BME280 sensor.\n");
        return -1; // Exit if initialization fails
    }

    // Set power mode to NORMAL
    sensor.set_sampling();

    while (true) {
        // Get temperature reading
        float temp = sensor.temperature();
  
        printf("Current temperature: %.2f°C\n", temp);
    

        ThisThread::sleep_for(2000ms); // Wait for 2 seconds
    }
}
