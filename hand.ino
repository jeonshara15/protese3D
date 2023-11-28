
#include "HCPCA9685.h"
 
/* I2C slave address for the device/module. For the HCMODU0097 the default I2C address
 
is 0x40 */
 
#define  I2CAdd 0x40
 
/* Create an instance of the library */
 
HCPCA9685 HCPCA9685(I2CAdd);
 
void setup()
 
{
 
  /* Initialise the library and set it to 'servo mode' */
 
HCPCA9685.Init(SERVO_MODE);
 
  /* Wake the device up */
 
HCPCA9685.Sleep(false);

dobraDedo(14);
delay(1000);
//esticaDedo(14);
 
}

void dobraDedo(int dedo){
  
  HCPCA9685.Sleep(false);
  HCPCA9685.Servo(dedo, 350);
  HCPCA9685.Sleep(true);
}

void esticaDedo(int dedo){
  HCPCA9685.Sleep(false);
  HCPCA9685.Servo(dedo, 10);
  HCPCA9685.Sleep(true);
}

void loop(){



}
 

 

