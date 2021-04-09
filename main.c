



#include "stm32f4xx.h"                  // Device header
#include "stdbool.h"
#include "rcc.h"
#include "gpio.h"
#include "timer.h"
#include "sicaklik.h"
#include "degiskenler.h"



//clock/(1+psc)*(1+arr); 168 000 000 / 24*7 = 10 ^6  hz ==> 1 us   

			
void TIM1_UP_TIM10_IRQHandler(void)  // 1 uslik timer
{  
	
		if (TIM1->SR & (1<<0))  //UIF Bayragi mi
  {
			
			sure++;
		
			if(sure>1000000)  //Flag bayragi 1 sn icin.
				 sure=0;
		
      TIM1->SR &=~(1<<0); //UIF temizlendi.
  }
	
}


int main()
{
	
  RCC_Ayar();
	SystemCoreClockUpdate();
	gpio_Ayar();
	tim1_Ayar();
	
	while(1)
	{
		
		
		
		durum=sicaklikOku();
		if (durum ==1)	
    {
		sicaklik=geciciSicaklik; 
		nem=geciciNem;
		}
		
		
		sure=0;
		while(sure<1000000);
		
     
	}

}

