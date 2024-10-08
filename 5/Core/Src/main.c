/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
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
/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */

/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */
int activa = 0, contador1 = 0, contador2 = 0, bloqueo1 = 0, bloqueo2 = 0;

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{

  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  /* USER CODE BEGIN 2 */

  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  while (1)
  {
	  if(HAL_GPIO_ReadPin(GPIOC, P_INICIO_Pin) == 0){
		  contador1= 0;
		  contador2 = 0;
		  bloqueo1 = 0;
		  bloqueo2 = 0;
		  HAL_GPIO_WritePin(LED1_1_GPIO_Port, LED1_1_Pin, 0);
		  HAL_GPIO_WritePin(LED2_1_GPIO_Port, LED2_1_Pin, 0);
		  HAL_GPIO_WritePin(LED3_1_GPIO_Port, LED3_1_Pin, 0);
		  HAL_GPIO_WritePin(LED4_1_GPIO_Port, LED4_1_Pin, 0);
		  HAL_GPIO_WritePin(LED5_1_GPIO_Port, LED5_1_Pin, 0);
		  HAL_GPIO_WritePin(LED6_1_GPIO_Port, LED6_1_Pin, 0);
		  HAL_GPIO_WritePin(LED7_1_GPIO_Port, LED7_1_Pin, 0);
		  HAL_GPIO_WritePin(LED8_1_GPIO_Port, LED8_1_Pin, 0);
		  HAL_GPIO_WritePin(J1_GPIO_Port, J1_Pin, 0);

		  HAL_GPIO_WritePin(LED1_2_GPIO_Port, LED1_2_Pin, 0);
		  HAL_GPIO_WritePin(LED2_2_GPIO_Port, LED2_2_Pin, 0);
		  HAL_GPIO_WritePin(LED3_2_GPIO_Port, LED3_2_Pin, 0);
		  HAL_GPIO_WritePin(LED4_2_GPIO_Port, LED4_2_Pin, 0);
		  HAL_GPIO_WritePin(LED5_2_GPIO_Port, LED5_2_Pin, 0);
		  HAL_GPIO_WritePin(LED6_2_GPIO_Port, LED6_2_Pin, 0);
		  HAL_GPIO_WritePin(LED7_2_GPIO_Port, LED7_2_Pin, 0);
		  HAL_GPIO_WritePin(LED8_2_GPIO_Port, LED8_2_Pin, 0);
		  HAL_GPIO_WritePin(J2_GPIO_Port, J2_Pin, 0);

		  HAL_GPIO_WritePin(VERDE_GPIO_Port, VERDE_Pin, 0);
		  HAL_GPIO_WritePin(ROJO_GPIO_Port, ROJO_Pin, 1);
		  HAL_Delay(3000);
		  HAL_GPIO_WritePin(ROJO_GPIO_Port, ROJO_Pin, 0);
		  HAL_GPIO_WritePin(AMARILLO_GPIO_Port, AMARILLO_Pin, 1);
		  HAL_Delay(500);
		  HAL_GPIO_WritePin(AMARILLO_GPIO_Port, AMARILLO_Pin, 0);
		  HAL_Delay(500);
		  HAL_GPIO_WritePin(AMARILLO_GPIO_Port, AMARILLO_Pin, 1);
		  HAL_Delay(500);
		  HAL_GPIO_WritePin(AMARILLO_GPIO_Port, AMARILLO_Pin, 0);
		  HAL_Delay(500);
		  HAL_GPIO_WritePin(AMARILLO_GPIO_Port, AMARILLO_Pin, 1);
		  HAL_Delay(500);
		  HAL_GPIO_WritePin(AMARILLO_GPIO_Port, AMARILLO_Pin, 0);
		  HAL_Delay(500);
		  HAL_GPIO_WritePin(VERDE_GPIO_Port, VERDE_Pin, 1);
		  HAL_Delay(500);
		  activa = 1;
	  }

	  if(activa == 1){
		  if(HAL_GPIO_ReadPin(GPIOB, P_1_Pin) == 0 && bloqueo2 == 0){
			  contador1 = contador1*2;
			  if(contador1 == 0){
				  contador1 = 1;
			  }

			  while (HAL_GPIO_ReadPin(GPIOB, P_1_Pin) == 0)   //While para evitar sumas indebidas
			  		{
			  			HAL_Delay(10);
			  		}


		  }

		  if(HAL_GPIO_ReadPin(GPIOB, P_2_Pin) == 0 && bloqueo1 == 0){
				  contador2 = contador2*2;
				  if(contador2 == 0){
					  contador2 = 1;
				  }

				  while (HAL_GPIO_ReadPin(GPIOB, P_2_Pin) == 0)   //While para evitar sumas indebidas
				  		{
				  			HAL_Delay(10);
				  		}


			  }


	  }


	  switch(contador1){
	  case 1:
		  HAL_GPIO_WritePin(LED1_1_GPIO_Port, LED1_1_Pin, 1);
		  break;
	  case 2:
		  HAL_GPIO_WritePin(LED2_1_GPIO_Port, LED2_1_Pin, 1);
		  break;
	  case 4:
		  HAL_GPIO_WritePin(LED3_1_GPIO_Port, LED3_1_Pin, 1);
		  break;

	  case 8:
		  HAL_GPIO_WritePin(LED4_1_GPIO_Port, LED4_1_Pin, 1);
		  break;
	  case 16:
		  HAL_GPIO_WritePin(LED5_1_GPIO_Port, LED5_1_Pin, 1);
		  break;
	  case 32:
		  HAL_GPIO_WritePin(LED6_1_GPIO_Port, LED6_1_Pin, 1);
		  break;
	  case 64:
		  HAL_GPIO_WritePin(LED7_1_GPIO_Port, LED7_1_Pin, 1);
		  break;
	  case 128:
		  HAL_GPIO_WritePin(LED8_1_GPIO_Port, LED8_1_Pin, 1);
		  bloqueo1 = 1;
		  HAL_Delay(20);
		  HAL_GPIO_WritePin(J1_GPIO_Port, J1_Pin, 1);

		  break;
	  case 0:
		  HAL_GPIO_WritePin(LED1_1_GPIO_Port, LED1_1_Pin, 0);
		  HAL_GPIO_WritePin(LED2_1_GPIO_Port, LED2_1_Pin, 0);
		  HAL_GPIO_WritePin(LED3_1_GPIO_Port, LED3_1_Pin, 0);
		  HAL_GPIO_WritePin(LED4_1_GPIO_Port, LED4_1_Pin, 0);
		  HAL_GPIO_WritePin(LED5_1_GPIO_Port, LED5_1_Pin, 0);
		  HAL_GPIO_WritePin(LED6_1_GPIO_Port, LED6_1_Pin, 0);
		  HAL_GPIO_WritePin(LED7_1_GPIO_Port, LED7_1_Pin, 0);
		  HAL_GPIO_WritePin(LED8_1_GPIO_Port, LED8_1_Pin, 0);
		  HAL_GPIO_WritePin(J1_GPIO_Port, J1_Pin, 0);
	 	  break;


	  }

	  switch(contador2){
	  	  case 1:
	  		  HAL_GPIO_WritePin(LED1_2_GPIO_Port, LED1_2_Pin, 1);
	  		  break;
	  	  case 2:
	  		  HAL_GPIO_WritePin(LED2_2_GPIO_Port, LED2_2_Pin, 1);
	  		  break;
	  	  case 4:
	  		  HAL_GPIO_WritePin(LED3_2_GPIO_Port, LED3_2_Pin, 1);
	  		  break;

	  	  case 8:
	  		  HAL_GPIO_WritePin(LED4_2_GPIO_Port, LED4_2_Pin, 1);
	  		  break;
	  	  case 16:
	  		  HAL_GPIO_WritePin(LED5_2_GPIO_Port, LED5_2_Pin, 1);
	  		  break;
	  	  case 32:
	  		  HAL_GPIO_WritePin(LED6_2_GPIO_Port, LED6_2_Pin, 1);
	  		  break;
	  	  case 64:
	  		  HAL_GPIO_WritePin(LED7_2_GPIO_Port, LED7_2_Pin, 1);
	  		  break;
	  	  case 128:
	  		  HAL_GPIO_WritePin(LED8_2_GPIO_Port, LED8_2_Pin, 1);
	  		bloqueo2 = 1;
		    HAL_Delay(20);
		    HAL_GPIO_WritePin(J2_GPIO_Port, J2_Pin, 1);
	  		  break;

	  	 case 0:
			  HAL_GPIO_WritePin(LED1_2_GPIO_Port, LED1_2_Pin, 0);
			  HAL_GPIO_WritePin(LED2_2_GPIO_Port, LED2_2_Pin, 0);
			  HAL_GPIO_WritePin(LED3_2_GPIO_Port, LED3_2_Pin, 0);
			  HAL_GPIO_WritePin(LED4_2_GPIO_Port, LED4_2_Pin, 0);
			  HAL_GPIO_WritePin(LED5_2_GPIO_Port, LED5_2_Pin, 0);
			  HAL_GPIO_WritePin(LED6_2_GPIO_Port, LED6_2_Pin, 0);
			  HAL_GPIO_WritePin(LED7_2_GPIO_Port, LED7_2_Pin, 0);
			  HAL_GPIO_WritePin(LED8_2_GPIO_Port, LED8_2_Pin, 0);
			  HAL_GPIO_WritePin(J2_GPIO_Port, J2_Pin, 0);
			  break;


	  	  }





    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Configure the main internal regulator output voltage
  */
  __HAL_RCC_PWR_CLK_ENABLE();
  __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE3);

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }

  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};
/* USER CODE BEGIN MX_GPIO_Init_1 */
/* USER CODE END MX_GPIO_Init_1 */

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOH_CLK_ENABLE();
  __HAL_RCC_GPIOC_CLK_ENABLE();
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();
  __HAL_RCC_GPIOD_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOC, VERDE_Pin|LED6_2_Pin|LED4_2_Pin|LED7_1_Pin
                          |LED5_1_Pin|LED4_1_Pin|LED3_1_Pin|LED1_1_Pin
                          |ROJO_Pin|LED2_1_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, LED3_2_Pin|LED7_2_Pin|LED5_2_Pin|J1_Pin
                          |LED2_2_Pin|LED1_2_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOB, LED8_2_Pin|LED8_1_Pin|J2_Pin|LED6_1_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(AMARILLO_GPIO_Port, AMARILLO_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pins : VERDE_Pin LED6_2_Pin LED4_2_Pin LED7_1_Pin
                           LED5_1_Pin LED4_1_Pin LED3_1_Pin LED1_1_Pin
                           ROJO_Pin LED2_1_Pin */
  GPIO_InitStruct.Pin = VERDE_Pin|LED6_2_Pin|LED4_2_Pin|LED7_1_Pin
                          |LED5_1_Pin|LED4_1_Pin|LED3_1_Pin|LED1_1_Pin
                          |ROJO_Pin|LED2_1_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOC, &GPIO_InitStruct);

  /*Configure GPIO pins : LED3_2_Pin LED7_2_Pin LED5_2_Pin J1_Pin
                           LED2_2_Pin LED1_2_Pin */
  GPIO_InitStruct.Pin = LED3_2_Pin|LED7_2_Pin|LED5_2_Pin|J1_Pin
                          |LED2_2_Pin|LED1_2_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pins : LED8_2_Pin LED8_1_Pin J2_Pin LED6_1_Pin */
  GPIO_InitStruct.Pin = LED8_2_Pin|LED8_1_Pin|J2_Pin|LED6_1_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

  /*Configure GPIO pins : P_1_Pin P_2_Pin */
  GPIO_InitStruct.Pin = P_1_Pin|P_2_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_PULLUP;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

  /*Configure GPIO pin : P_INICIO_Pin */
  GPIO_InitStruct.Pin = P_INICIO_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_PULLUP;
  HAL_GPIO_Init(P_INICIO_GPIO_Port, &GPIO_InitStruct);

  /*Configure GPIO pin : AMARILLO_Pin */
  GPIO_InitStruct.Pin = AMARILLO_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(AMARILLO_GPIO_Port, &GPIO_InitStruct);

/* USER CODE BEGIN MX_GPIO_Init_2 */
/* USER CODE END MX_GPIO_Init_2 */
}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */
