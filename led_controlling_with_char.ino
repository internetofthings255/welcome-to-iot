/*programm: to turn on led by giving input on serialmonitor as "A" and turns off by giving "B"
simply controlling led by a char
device: 1.arduino uno
        2.personal computer with arduino ide
 */
void setup()
{
  pinMode(13,OUTPUT);//defined 13pin in arduino as output
  Serial.begin(9600);//intialized the serialmonitor
}
void loop()
{
  char value= Serial.read();//the given value on serial monitor will store in char of "value"
  if(value=='A')//condition check if stored letter in value is A or not
  {
    digitalWrite(13,1);//the led connected to pin13 gets on
  }
  if(value=='B')//condition check if stored letter in value is B or not
  {
    digitalWrite(13,0);//the led connected to pin13 gets off
  }
}
