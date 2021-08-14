/*
 * pcf85063a.h
 *
 *  Created on: 13 Aug. 2021
 *      Author: Zildjhan
 */

#ifndef INC_PCF85063A_H_
#define INC_PCF85063A_H_
#include "sht2x_for_stm32_hal.h"


#define REG_CTRL1_ADDR                   0x00
#define REG_CTRL2_ADDR                   0x01
#define REG_TIME_ADDR                    0x04
#define REG_DATE_ADDR                    0x07

#define I2C_ADDR                         0x51 << 1

#define YEAR_OFFSET						 1970

void PCF85_Init(I2C_HandleTypeDef *_hi2c);

void PCF85_Reset();

void PCF85_SetTime(uint8_t hour, uint8_t minute, uint8_t second);

void PCF85_SetDate(uint8_t weekday, uint8_t day, uint8_t month, uint16_t yr);

uint8_t PCF85_Readnow(uint8_t *buf);


#endif /* INC_PCF85063A_H_ */

// weekday format
// 0 - sunday
// 1 - monday
// 2 - tuesday
// 3 - wednesday
// 4 - thursday
// 5 - friday
// 6 - saturday
