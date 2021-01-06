/*programm: the led gets on when given input in serialmonitor is 1 and gets off when the input is 2
"To control led by integers"
devices: 1.arduino uno
         2.personal computer with arduino ide

*/


void setup()
{
  pinMode(13,OUTPUT);//13pin in arduino acts as output pin
  Serial.begin(9600);//initialize the serialmonitor with bourdrate(9600)
}
void loop()
{
  int value=Serial.parseInt();//the input given in serial monitor gets stores in "value"
  if(value==1)//check stored number in value is "1" or not
  {
    digitalWrite(13,1);//now the led connected to 13pin will turn on
  }
  if(value==2)//check stored number in value is "1" or not
  {
    digitalWrite(13,0);//now the led connected to 13pin will turn off
  }
}
