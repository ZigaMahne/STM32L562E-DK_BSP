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
#include "stm32l5xx_hal.h"

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
extern int stdio_init   (void);
extern int app_main     (void);
extern int shield_setup (void);
/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define LCD_BL_PWM_Pin GPIO_PIN_1
#define LCD_BL_PWM_GPIO_Port GPIOE
#define ARD_D9_Pin GPIO_PIN_9
#define ARD_D9_GPIO_Port GPIOB
#define ARD_D9_EXTI_IRQn EXTI9_IRQn
#define LED_GREEN_Pin GPIO_PIN_12
#define LED_GREEN_GPIO_Port GPIOG
#define USART3_RX_Pin GPIO_PIN_11
#define USART3_RX_GPIO_Port GPIOC
#define ARD_D12_Pin GPIO_PIN_4
#define ARD_D12_GPIO_Port GPIOB
#define ARD_D13_Pin GPIO_PIN_9
#define ARD_D13_GPIO_Port GPIOG
#define USART3_TX_Pin GPIO_PIN_10
#define USART3_TX_GPIO_Port GPIOC
#define USB_FS_DP_Pin GPIO_PIN_12
#define USB_FS_DP_GPIO_Port GPIOA
#define USER_BUTTON_Pin GPIO_PIN_13
#define USER_BUTTON_GPIO_Port GPIOC
#define ARD_D6_Pin GPIO_PIN_8
#define ARD_D6_GPIO_Port GPIOB
#define ARD_D6_EXTI_IRQn EXTI8_IRQn
#define LED_RED_Pin GPIO_PIN_3
#define LED_RED_GPIO_Port GPIOD
#define USB_FS_DM_Pin GPIO_PIN_11
#define USB_FS_DM_GPIO_Port GPIOA
#define GYRO_ACC_INT_Pin GPIO_PIN_3
#define GYRO_ACC_INT_GPIO_Port GPIOF
#define GYRO_ACC_INT_EXTI_IRQn EXTI3_IRQn
#define ARD_D11_Pin GPIO_PIN_5
#define ARD_D11_GPIO_Port GPIOB
#define USART1_TX_Pin GPIO_PIN_9
#define USART1_TX_GPIO_Port GPIOA
#define USART1_RX_Pin GPIO_PIN_10
#define USART1_RX_GPIO_Port GPIOA
#define LCD_TE_Pin GPIO_PIN_8
#define LCD_TE_GPIO_Port GPIOA
#define SDIO_DETECT_Pin GPIO_PIN_2
#define SDIO_DETECT_GPIO_Port GPIOF
#define SDIO_DETECT_EXTI_IRQn EXTI2_IRQn
#define ARD_D4_Pin GPIO_PIN_4
#define ARD_D4_GPIO_Port GPIOF
#define ARD_D4_EXTI_IRQn EXTI4_IRQn
#define LCD_PWR_ON_Pin GPIO_PIN_0
#define LCD_PWR_ON_GPIO_Port GPIOH
#define ARD_D7_Pin GPIO_PIN_6
#define ARD_D7_GPIO_Port GPIOC
#define ARD_D7_EXTI_IRQn EXTI6_IRQn
#define BLE_RSTN_Pin GPIO_PIN_8
#define BLE_RSTN_GPIO_Port GPIOG
#define BLE_CSN_Pin GPIO_PIN_5
#define BLE_CSN_GPIO_Port GPIOG
#define ARD_D5_Pin GPIO_PIN_13
#define ARD_D5_GPIO_Port GPIOD
#define ARD_D5_EXTI_IRQn EXTI13_IRQn
#define LCD_RST_Pin GPIO_PIN_14
#define LCD_RST_GPIO_Port GPIOF
#define ARD_D2_Pin GPIO_PIN_11
#define ARD_D2_GPIO_Port GPIOD
#define ARD_D2_EXTI_IRQn EXTI11_IRQn
#define ARD_D3_Pin GPIO_PIN_12
#define ARD_D3_GPIO_Port GPIOD
#define ARD_D3_EXTI_IRQn EXTI12_IRQn
#define STMOD_SEL_12_Pin GPIO_PIN_11
#define STMOD_SEL_12_GPIO_Port GPIOF
#define AUDIO_RESETN_Pin GPIO_PIN_1
#define AUDIO_RESETN_GPIO_Port GPIOG
#define ARD_D0_Pin GPIO_PIN_10
#define ARD_D0_GPIO_Port GPIOB
#define UCPD_FLT_Pin GPIO_PIN_14
#define UCPD_FLT_GPIO_Port GPIOB
#define STMOD_SEL_34_Pin GPIO_PIN_12
#define STMOD_SEL_34_GPIO_Port GPIOF
#define CTP_RST_Pin GPIO_PIN_15
#define CTP_RST_GPIO_Port GPIOF
#define ARD_D1_Pin GPIO_PIN_11
#define ARD_D1_GPIO_Port GPIOB
#define ARD_D8_Pin GPIO_PIN_0
#define ARD_D8_GPIO_Port GPIOG
#define ARD_D8_EXTI_IRQn EXTI0_IRQn

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
