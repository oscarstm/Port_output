#include "stm32f1xx.h"
#include "clk_user.h"
#include "gpio_user.h"

int main(void) {
	/*
	 * AFIO
	 */
	RCC->APB2ENR |= (RCC_APB2ENR_AFIOEN);
	AFIO->MAPR |= (AFIO_MAPR_TIM1_REMAP_0);
	AFIO->MAPR &= ~(AFIO_MAPR_TIM1_REMAP_1);
	/*
	 * Functions
	 */
	clk_user();
	GPIO_PA9_Init();

	while (1) {
		GPIOA->ODR |= (GPIO_ODR_ODR9);
		//GPIOA->ODR &= ~(GPIO_ODR_ODR9);
	}

}

