#include <Servo.h> 
 
int servoPin = 9;
Servo servo; 
int angle = 0; // servo position in degrees 


#define ECHOPIN 3
#define TRIGPIN 4

int analogPin = 0;
int val = 0;
const byte ledPin=13;
const byte interruptPin=2;
volatile byte state = LOW;
int count=0;


void setup() {
  servo.attach(servoPin); 
   pinMode(LED_BUILTIN,OUTPUT);
   pinMode(interruptPin, INPUT_PULLUP);
   attachInterrupt(digitalPinToInterrupt(interruptPin),blink,CHANGE);
   Serial.begin(9600);
   pinMode(ECHOPIN, INPUT);
   pinMode(TRIGPIN, OUTPUT);
  count=0;
}

void loop()
{
 digitalWrite(LED_BUILTIN,state);
// Serial.println(count);
   
   while(count>=1&& count<=2)
   {
    digitalWrite(TRIGPIN, LOW);
    delayMicroseconds(2);
    digitalWrite(TRIGPIN, HIGH);
    delayMicroseconds(10);
    digitalWrite(TRIGPIN,LOW);
    int distance = pulseIn(ECHOPIN, HIGH);
    distance = distance/58;
    
    delay(100);
    if(distance<5)
    {
      Serial.println(distance);
      servo.write(10); 
      count=0;
      break;
    }
    val = analogRead(analogPin);
    Serial.println(val);
    if(val>=790&&val<=860)
    {
      angle=floor((val-780)*45/80);
      Serial.println(angle);
      servo.write(angle); 
      delay(15);  
    }
    delay(100);
   }
    count=0;
    delay(500);

 }

void blink()
{
 state = !state;
 count++;
 Serial.println(count);
 delay(500); 
}