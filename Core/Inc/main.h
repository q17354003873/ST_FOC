/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
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
void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);
void Error_Handler(void);

#define Start_Stop_Pin GPIO_PIN_6
#define Start_Stop_GPIO_Port GPIOE
#define Start_Stop_EXTI_IRQn EXTI9_5_IRQn
#define UART_RX_Pin GPIO_PIN_7
#define UART_RX_GPIO_Port GPIOB
#define UART_TX_Pin GPIO_PIN_6
#define UART_TX_GPIO_Port GPIOB
#define M1_BUS_VOLTAGE_Pin GPIO_PIN_1
#define M1_BUS_VOLTAGE_GPIO_Port GPIOA
#define M1_PWM_WH_Pin GPIO_PIN_13
#define M1_PWM_WH_GPIO_Port GPIOE
#define M1_CURR_AMPL_W_Pin GPIO_PIN_6
#define M1_CURR_AMPL_W_GPIO_Port GPIOA
#define M1_TEMPERATURE_Pin GPIO_PIN_5
#define M1_TEMPERATURE_GPIO_Port GPIOA
#define M1_PWM_UL_Pin GPIO_PIN_8
#define M1_PWM_UL_GPIO_Port GPIOE
#define M1_PWM_UH_Pin GPIO_PIN_9
#define M1_PWM_UH_GPIO_Port GPIOE
#define M1_PWM_VH_Pin GPIO_PIN_11
#define M1_PWM_VH_GPIO_Port GPIOE
#define M1_OCP_Pin GPIO_PIN_12
#define M1_OCP_GPIO_Port GPIOB
#define M1_CURR_AMPL_V_Pin GPIO_PIN_1
#define M1_CURR_AMPL_V_GPIO_Port GPIOB
#define M1_CURR_AMPL_U_Pin GPIO_PIN_0
#define M1_CURR_AMPL_U_GPIO_Port GPIOB
#define M1_PWM_VL_Pin GPIO_PIN_10
#define M1_PWM_VL_GPIO_Port GPIOE
#define M1_PWM_WL_Pin GPIO_PIN_12
#define M1_PWM_WL_GPIO_Port GPIOE


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
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
