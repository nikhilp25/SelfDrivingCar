const int r = 11;                
          
const int g = 9;           
const int sec = 1000;       
void setup() 
  {
    pinMode(r,OUTPUT);

    pinMode(g,OUTPUT);
    delay(sec);
  }

void loop()
    {
        digitalWrite(r,HIGH) ;
        delay(sec*5);
        digitalWrite(r,LOW) ;
   
        digitalWrite(g,HIGH) ;
        delay(sec*5);
        digitalWrite(g,LOW) ;
        
    }
