#include <stdio.h>
#include "1602A.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_log.h"
#include "driver/gpio.h"
#include "driver/i2c.h" // Include the I2C library for your microcontroller

#define I2C_PORT I2C_NUM_0
#define SDA_PIN 21
#define SCL_PIN 22
#define CLK_SPEED_HZ 100000
#define DISPLAY_ADDR 0x27
#define READ_INTERVAL_MS 100
#define STANDBY_INTERVAL_MS 5000

void app_main(void)
{
    i2c_init(I2C_PORT, SDA_PIN, SCL_PIN, CLK_SPEED_HZ);
    _1602A_init(I2C_PORT, DISPLAY_ADDR, "Hello World!", 1000);
    while(1){
        
    }
}

