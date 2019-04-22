#define pingTrig 6 
#define pingEcho 7 

int cameratrigger = 2 ;
int led = 3 ;
void setup()
{Serial.begin(9600);
  pinMode(pingTrig, OUTPUT);
  pinMode(pingEcho, INPUT);
delay(200);
  pinMode(led, OUTPUT);
pinMode(cameratrigger, OUTPUT);
  

}

void loop()
{
  long duration, inches, cm;
  
  digitalWrite(pingTrig, LOW);
  delayMicroseconds(2);
  digitalWrite(pingTrig, HIGH);
  delayMicroseconds(10);
  digitalWrite(pingTrig, LOW);
  
  duration = pulseIn(pingEcho, HIGH);
  
  cm = duration / 29 / 2;
  
  Serial.print("-->");Serial.println(cm);
  if(cm < 30 ){
digitalWrite(cameratrigger,HIGH);
digitalWrite(led,HIGH);    
    delay(200);
    digitalWrite(cameratrigger,LOW);
digitalWrite(led,LOW);    
delay(200);}} 
