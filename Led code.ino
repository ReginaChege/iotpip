// C++ code
int Led1=3;
int Led2=1;
int Led3=2 ;

void setup()
{

pinMode (Led1 ,OUTPUT);
pinMode (Led2,OUTPUT);
pinMode (Led3,OUTPUT);
}

void loop()
{
 digitalWrite(Led3,HIGH);
  delay(1000);
  digitalWrite(Led3,LOW);
      delay(1000);
  digitalWrite(Led2,HIGH);
  delay(1000);
   digitalWrite(Led2,LOW);
      delay(1000);
   digitalWrite(Led1,HIGH);
  delay(1000);
   digitalWrite(Led1,LOW);
      delay(1000);
   // Delay a little bit to improve simulation performance
}