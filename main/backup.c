#include "1602A.h"
#include "esp_log.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"


#define I2C_PORT I2C_NUM_0
#define TAG "_1602A"


esp_err_t i2c_init(i2c_port_t i2cPort, int sdaPin, int sclPin, uint32_t clkSpeedHz)
{
    i2c_config_t conf={
		.mode = I2C_MODE_MASTER,
		.sda_io_num = sdaPin,
		.sda_pullup_en = GPIO_PULLUP_ENABLE,
		.scl_io_num = sclPin,
		.scl_pullup_en = GPIO_PULLUP_ENABLE,
		.master.clk_speed = clkSpeedHz
	};
    i2c_param_config(I2C_NUM_0, &conf);

    return i2c_driver_install(I2C_NUM_0, conf.mode, 0, 0, 0);
}

//will init the 1602A LCD and display the words 'Luminosity' and 'Humidity'
esp_err_t _1602A_init(i2c_port_t i2c_port, uint8_t sens_addr, char* data, TickType_t time_out) {
    esp_err_t err;
    i2c_cmd_handle_t cmd = i2c_cmd_link_create();
    i2c_master_start(cmd);
	
	

	// i2c_cmd_link_delete(cmd);
	return err;
}



