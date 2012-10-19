void playToneAndLight(int color)
{

//  Serial.print("inside PlayToneAndLight ");
//  Serial.print("   color = ");
//  Serial.println( color );



  if(color == 1)   // 1 = Red
  {
    digitalWrite( redLED,HIGH);
    tone(speakerPin,500);
    delay(simonSpeed);    
    digitalWrite( redLED,LOW);
    noTone(speakerPin);        
  }

  if(color == 2)
  {
    digitalWrite( yellLED,HIGH);
    tone(speakerPin,400);
    delay(simonSpeed);    
    digitalWrite( yellLED,LOW);
    noTone(speakerPin);        
  }

  if(color == 3)
  {
    digitalWrite( blueLED,HIGH);
    tone(speakerPin,300);
    delay(simonSpeed);    
    digitalWrite( blueLED,LOW);
    noTone(speakerPin);        
  }

  if(color == 4)
  {
    digitalWrite( greenLED,HIGH);
    tone(speakerPin,200);
    delay(simonSpeed);    
    digitalWrite( greenLED,LOW);
    noTone(speakerPin);        
  }  
}

