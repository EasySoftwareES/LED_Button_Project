/*Simple LED control with button*/

#define Led_Pin 2       // Adjust to suit you
#define Button_Pin 3    // Adjust to suit you
int ButtonState;
void setup()
{
  Serial.begin(9600);
  pinMode(Led_Pin,OUTPUT);    // Led Pin OUTPUT
  pinMode(Button_Pin,INPUT);  // Button Pin INPUT
}
void loop()
{
  ButtonState = digitalRead(Button_Pin); //read button
    if(ButtonState == HIGH)
    {
      digitalWrite(LedPin,HIGH); // LED on
    }
    else
    {
      digitalWrite(LedPin,LOW); // Led off
    }
}