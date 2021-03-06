
#include <PRIZM.h>

PRIZM prizm;
int distance;

void setup() {

        prizm.PrizmBegin();                              // programs begin  
        prizm.setMotorInvert(1,1);              // inverts the motors so we dont need a negative numbers

}

void loop() {

     distance = prizm.readSonicSensorCM(3);             // the sonic sensor reads by centimetre
     delay(300);

   
   
  if (distance < 50){                       //if distance is less than 50 then do the code below
        prizm.setMotorPower(1,0);                   //Stopping
          prizm.setMotorPower(2,0);                         //Stopping
            delay(1000);  //Wait 2 seconds
             delay(1000);
      

      prizm.setServoPosition(1,90);             //Servo goes up to 90 degree

      prizm.setMotorPower(1,100);                             //Turn Right
          prizm.setMotorPower(2,25);                  //Turn Right
            delay(500);

      prizm.setMotorPower(1,0);                  //Stopping
          prizm.setMotorPower(2,0);                   //Stopping
            delay(500);
     
     prizm.setMotorPower(1,100);              //Forward
        prizm.setMotorPower(2,100);         //Forward
          delay(500);

    prizm.setMotorPower(1,0);             //Stopping
        prizm.setMotorPower(2,0);                //Stopping
          delay(500); 
  
    prizm.setMotorPower(1,25);                             //Turn left to straighten the robot
        prizm.setMotorPower(2,100);               //Turn left to straighten the robot
            delay(500);
   

    prizm.setMotorPower(1,0);                     //Stopping
       prizm.setMotorPower(2,0);              //Stopping
           delay(500);

     prizm.setMotorPower(1,100);             //Forward
        prizm.setMotorPower(2,100 );             //Forward
            delay(500);

      prizm.setServoPosition(1,180);                   // Set servo up to 180 degrees
      
          prizm.PrizmEnd();                       //Programs ends



     }else { // else the distance is more than 50 go forward
       
        prizm.setServoPosition(1,60);                // sets the servo to a 60 degree angle
            prizm.setMotorSpeeds(520,520);  // the motor revolves 520 in a seconds
                delay(300);
      }

      
    
     
    
     
     
}



 
 
 
