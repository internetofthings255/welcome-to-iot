/*programm: to blink the led continous

devices: 1.arduino uno
         2.personal computer with arduino ide*/


void setup() {
 pinMode(13,OUTPUT);//defined the 13th pin in arduino to act as output
}
void loop()
{
  digitalWrite(13,1);//led gets turn on
  delay(1000);
  digitalWrite(13,0);//led gets turn off
  delay(1000);
   
}
