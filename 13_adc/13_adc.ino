#include "uart.h"
#include "adc.h"

uint16_t adc_value = 0;
float adc_vol;

void setup() 
{
    uart_init(0, 115200);   /* 串口0初始化 */
    adc_value = adc_get(ADC_IN_PIN); 
    adc_vol = (float)adc_value * 2.1 / 2048; 
    Serial.printf("%.1f\n",adc_vol);  
    if(adc_vol>=2.1){
        Serial.printf("100%%\n");
    }else if(adc_vol>=2.04&&adc_vol<2.1){
        Serial.printf("90%%\n");
    }else if(adc_vol>=1.965&&adc_vol<2.04){
        Serial.printf("80%%\n");
    }else if(adc_vol>=1.935&&adc_vol<1.965){
        Serial.printf("70%%\n");
    }else if(adc_vol>=1.91&&adc_vol<1.935){
        Serial.printf("70%%\n");
    }else if(adc_vol>=1.895&&adc_vol<1.91){
        Serial.printf("60%%\n");
    }else if(adc_vol>=1.885&&adc_vol<1.895){
        Serial.printf("50%%\n");
    }else if(adc_vol>=1.865&&adc_vol<1.885){
        Serial.printf("40%%\n");
    }else if(adc_vol>=1.85&&adc_vol<1.865){
        Serial.printf("30%%\n");
    }else if(adc_vol>=1.84&&adc_vol<1.85){
        Serial.printf("20%%\n");
    }else if(adc_vol>=1.75&&adc_vol<1.84){
        Serial.printf("10%%\n");
    }else{
        Serial.printf("Please charge for the battery!!!\n");
    }
}

void loop() 
{
      
}
