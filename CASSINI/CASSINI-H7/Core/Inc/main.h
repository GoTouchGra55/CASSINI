/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2026 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32h7xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define IMU2_SCK_Pin GPIO_PIN_2
#define IMU2_SCK_GPIO_Port GPIOE
#define IMU2_CS_Pin GPIO_PIN_3
#define IMU2_CS_GPIO_Port GPIOE
#define IMU2_MISO_Pin GPIO_PIN_5
#define IMU2_MISO_GPIO_Port GPIOE
#define IMU2_MOSI_Pin GPIO_PIN_6
#define IMU2_MOSI_GPIO_Port GPIOE
#define BARO_MOSI_Pin GPIO_PIN_1
#define BARO_MOSI_GPIO_Port GPIOC
#define BARO_MISO_Pin GPIO_PIN_2
#define BARO_MISO_GPIO_Port GPIOC
#define BARO_CS_Pin GPIO_PIN_1
#define BARO_CS_GPIO_Port GPIOA
#define IMU1_SCK_Pin GPIO_PIN_5
#define IMU1_SCK_GPIO_Port GPIOA
#define IMU1_MISO_Pin GPIO_PIN_6
#define IMU1_MISO_GPIO_Port GPIOA
#define IMU1_MOSI_Pin GPIO_PIN_7
#define IMU1_MOSI_GPIO_Port GPIOA
#define IMU1_CS_Pin GPIO_PIN_4
#define IMU1_CS_GPIO_Port GPIOC
#define SX_MOSI_Pin GPIO_PIN_2
#define SX_MOSI_GPIO_Port GPIOB
#define SERVO_1_Pin GPIO_PIN_9
#define SERVO_1_GPIO_Port GPIOE
#define SERVO_2_Pin GPIO_PIN_11
#define SERVO_2_GPIO_Port GPIOE
#define SERVO_3_Pin GPIO_PIN_13
#define SERVO_3_GPIO_Port GPIOE
#define SERVO_4_Pin GPIO_PIN_14
#define SERVO_4_GPIO_Port GPIOE
#define BARO_SCK_Pin GPIO_PIN_10
#define BARO_SCK_GPIO_Port GPIOB
#define RF_SW_Pin GPIO_PIN_10
#define RF_SW_GPIO_Port GPIOD
#define SX_DIO1_Pin GPIO_PIN_13
#define SX_DIO1_GPIO_Port GPIOD
#define SX_DIO3_Pin GPIO_PIN_15
#define SX_DIO3_GPIO_Port GPIOD
#define SX_SCK_Pin GPIO_PIN_10
#define SX_SCK_GPIO_Port GPIOC
#define SX_MISO_Pin GPIO_PIN_11
#define SX_MISO_GPIO_Port GPIOC
#define SX_CS_Pin GPIO_PIN_3
#define SX_CS_GPIO_Port GPIOD
#define SX_BUSY_Pin GPIO_PIN_5
#define SX_BUSY_GPIO_Port GPIOD
#define SXRESET_Pin GPIO_PIN_6
#define SXRESET_GPIO_Port GPIOD

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
