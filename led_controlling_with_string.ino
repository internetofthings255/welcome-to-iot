/*programm: to control led with a string
the led turns on when given input in serialmonitor in on and turns of if input is 0ff
devices: 1.arduino uno
         2.personal computer with arduino ide
 */

void setup()
{
  pinMode(13,OUTPUT);//the 13pin in arduino act as output pin
  Serial.begin(9600);//initialize the serialmonitor
}
void loop()
{
  String value= Serial.readString();//the input given in serialmonitor will stores in value
  if(value=="on")
  {
    digitalWrite(13,1);//led gets on
  }
  if(value=="off")
  {
    digitalWrite(13,0);//led gets turns off
  }
}
