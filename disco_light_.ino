int green = 12;
int red = 11;
int blue = 10;
int white = 9;
int yellow = 8;
int sound = 7;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(green,OUTPUT);
pinMode(red,OUTPUT);
pinMode(blue,OUTPUT);
pinMode(white,OUTPUT);
pinMode(yellow,OUTPUT);
pinMode(sound,OUTPUT);
}
 
void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(green,HIGH);
delay(500);
digitalWrite(green,LOW);
delay(500);
digitalWrite(red,HIGH);
digitalWrite(sound,HIGH);
delay(500);
digitalWrite(red,LOW);
digitalWrite(sound,LOW);           
delay(500);
digitalWrite(blue,HIGH);
delay(500);
digitalWrite(blue,LOW);
delay(500);
digitalWrite(white,HIGH);
delay(500);
digitalWrite(white,LOW);
delay(500);


digitalWrite(yellow,HIGH);
delay(500);
digitalWrite(yellow,LOW);
delay(500);  
}
