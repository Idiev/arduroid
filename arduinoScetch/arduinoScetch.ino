void setup()  
 {  
  Serial.begin(9600);  
  pinMode(13, OUTPUT);
 }  
 void loop()  
 {  
  char c;
  if(Serial.available())  
  {  
   c = Serial.read();  
   Serial.print(c); 
   if(c=='1') digitalWrite(13, HIGH);
   else  digitalWrite(13, LOW);
  }  
 }  
