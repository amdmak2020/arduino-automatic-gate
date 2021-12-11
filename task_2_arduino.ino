int LDR1=A0 , LDR2=A1 , buzz=9;
int LDR1_RAEDING =0 , LDR2_READING=0 ,people_num=0;
void setup()
{
  pinMode(LDR1, INPUT);
  pinMode(LDR2, INPUT);
  pinMode(buzz, OUTPUT);
  Serial.begin(9600);

}

void loop()
{
  int LDR1_READING = analogRead(LDR1);
     int LDR2_READING = analogRead(LDR2);
     Serial.println(LDR1_READING);
      Serial.println(LDR1_READING);
  if (LDR1_READING<100 ){
     
    people_num= people_num+1;
delay(1000);
  }

  if (LDR2_READING<500 ){
    
      
    people_num= people_num-1;
    delay(1000);

    }
 
    if (people_num==6){
      tone(buzz,500);
      
    }

      
      
      
     
    
}
