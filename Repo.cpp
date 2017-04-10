#include  <stdio.h>
#include <E101.h>
#include <time.h>

int findMean(){

  int adc_reading;
  int adc_mean = 0;
  
  for (int a = 0; a <=4; a = a + 1){
    adc_reading = read_analog(0);
    sleep1(0, 1000000);
    adc_mean = adc_mean + adc_reading;
  }
  adc_mean = adc_mean/5;
  prinf("The mean is %d\n", adc_mean);
return 0;}

int driveStraight(duration){
  for (int i = 0; i < duration; i++){
    set_motor(1, 255);
    sleep1(0, 500000);
    set_motor(2, -255);
    sleep(0, 500000);
    }
  return 0;)

int leftLeft(int duration){
  for (int i = 0; i < duration; i++){
    set_motor(1, 127);
    sleep1(0, 500000);
    set_motor(2, -255);
    sleep(0, 500000);
    }
  return 0;)
  
int leftRight(int duration){
  for (int i = 0; i < duration; i++){
    set_motor(1, 255);
    sleep1(0, 500000);
    set_motor(2, -127);
    sleep(0, 500000);
    }
  return 0;)
  
int driveBack(duration){
  for (int i = 0; i < duration; i++){
    set_motor(1, -127);
    sleep1(0, 500000);
    set_motor(2, 127);
    sleep(0, 500000);
    }
  return 0;)

int detectObject(duration){
  adc_reading = read_analog(0);
  if (adc_reading > 100){
     set_motor(1, -127);
    sleep1(0, 500000);
    set_motor(2, 127);
    sleep(0, 500000);
    }
  return 0;)
  
int main(){
  int();
  sleep1(0, 5000000); 
return 0;}
