void setup() 
   { 
      Serial.begin(9600); 
      pinMode(13, OUTPUT);
      pinMode(12, OUTPUT);
   }
 
void loop() 
   {
     if(Serial.available())
     {
        switch(Serial.read())
        {
          case '0': digitalWrite(13,LOW);
                    digitalWrite(12,LOW);            
                    break;
          case '1': digitalWrite(13,HIGH);
                    delay(90);
                    break;
          case '2': digitalWrite(12,HIGH);
                    delay(90);
                    break;          
          default:  digitalWrite(13,LOW);
                    digitalWrite(12,LOW);
         }
      
     }  
   
   }
