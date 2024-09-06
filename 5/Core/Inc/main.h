/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
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
#include "stm32f4xx_hal.h"

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

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define VERDE_Pin GPIO_PIN_0
#define VERDE_GPIO_Port GPIOC
#define LED6_2_Pin GPIO_PIN_1
#define LED6_2_GPIO_Port GPIOC
#define LED4_2_Pin GPIO_PIN_3
#define LED4_2_GPIO_Port GPIOC
#define LED3_2_Pin GPIO_PIN_1
#define LED3_2_GPIO_Port GPIOA
#define LED7_2_Pin GPIO_PIN_4
#define LED7_2_GPIO_Port GPIOA
#define LED5_2_Pin GPIO_PIN_7
#define LED5_2_GPIO_Port GPIOA
#define LED7_1_Pin GPIO_PIN_4
#define LED7_1_GPIO_Port GPIOC
#define LED5_1_Pin GPIO_PIN_5
#define LED5_1_GPIO_Port GPIOC
#define LED8_2_Pin GPIO_PIN_0
#define LED8_2_GPIO_Port GPIOB
#define P_1_Pin GPIO_PIN_10
#define P_1_GPIO_Port GPIOB
#define LED8_1_Pin GPIO_PIN_13
#define LED8_1_GPIO_Port GPIOB
#define LED4_1_Pin GPIO_PIN_6
#define LED4_1_GPIO_Port GPIOC
#define P_INICIO_Pin GPIO_PIN_7
#define P_INICIO_GPIO_Port GPIOC
#define LED3_1_Pin GPIO_PIN_8
#define LED3_1_GPIO_Port GPIOC
#define J1_Pin GPIO_PIN_9
#define J1_GPIO_Port GPIOA
#define LED2_2_Pin GPIO_PIN_11
#define LED2_2_GPIO_Port GPIOA
#define LED1_2_Pin GPIO_PIN_12
#define LED1_2_GPIO_Port GPIOA
#define LED1_1_Pin GPIO_PIN_10
#define LED1_1_GPIO_Port GPIOC
#define ROJO_Pin GPIO_PIN_11
#define ROJO_GPIO_Port GPIOC
#define LED2_1_Pin GPIO_PIN_12
#define LED2_1_GPIO_Port GPIOC
#define AMARILLO_Pin GPIO_PIN_2
#define AMARILLO_GPIO_Port GPIOD
#define J2_Pin GPIO_PIN_5
#define J2_GPIO_Port GPIOB
#define P_2_Pin GPIO_PIN_6
#define P_2_GPIO_Port GPIOB
#define LED6_1_Pin GPIO_PIN_7
#define LED6_1_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
