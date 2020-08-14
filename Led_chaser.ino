void setup() {
  //coonect multiple led in arduino pin and make light chaser system
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(A0,INPUT);
  
}

void loop()
{int sensorvalue = analogRead(A0);
  
  digitalWrite(13, HIGH);
  digitalWrite(12,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(11,HIGH);
  delay(sensorvalue); //delay control with pot you can change pot value led delay will br change
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  delay(sensorvalue); 
}
 
