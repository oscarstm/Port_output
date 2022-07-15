/*
 * gpio_user.c
 *
 *  Created on: Jul 13, 2022
 *      Author: oscar
 */

#include "gpio_user.h"

void GPIO_PA9_Init(void) {
	RCC->APB2ENR |= (RCC_APB2ENR_IOPAEN);

	GPIOA->CRH &= ~(GPIO_CRH_CNF9);
	GPIOA->CRH &= ~(GPIO_CRH_MODE9_0);
	GPIOA->CRH |= (GPIO_CRH_MODE9_1);
}
