#include <Arduino.h>
#include "TestlLib.h"

TestLib testlib(true); // maknig the bool flag true so it will output the o/p also, declared the type as TestLib  and it's name what you want to use in your code.

int add; // created a variable.

void setup() {

  Serial.begin(9600); // setting baud rate to make use of serial monitor in aruino.
  add = testlib.sum(1,2); // calling library function or the name you declared in define section.
  Serial.print("Addition is: ");
  Serial.println(add); // printing sum of to int to the serial monitor. 
  int sub = testlib.sub(5,4);
  Serial.print("Substraction is: ");
  Serial.println(sub);
  int mul = testlib.mul(2,2);
  Serial.print("Multiplication is: ");
  Serial.println(mul);
  int div = testlib.div(20,5);
  Serial.print("Divsion is: ");
  Serial.print(div);
  

}

void loop() {
  
}