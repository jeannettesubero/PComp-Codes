void buttonPressed()
{
  for (int i = 0; i <= nextStep;){
    int redInput = digitalRead(redButt);
    if(redInput == HIGH)
    {
      digitalWrite( redLED,HIGH);
      tone(speakerPin,500);
      delay(simonSpeed);    
      digitalWrite( redLED,LOW);
      noTone(speakerPin);        
      nextStep++;
    }


    int yellInput = digitalRead(yellButt);
    if(yellInput == HIGH)
    {
      digitalWrite( yellLED,HIGH);
      tone(speakerPin,400);
      delay(simonSpeed);    
      digitalWrite( yellLED,LOW);
      noTone(speakerPin);        
      nextStep++;
    }

    int blueInput = digitalRead(blueButt);
    if(blueInput == HIGH)
    {
      digitalWrite( blueLED,HIGH);
      tone(speakerPin,300);
      delay(simonSpeed);    
      digitalWrite( blueLED,LOW);
      noTone(speakerPin);
      nextStep++;
    }

    int greenInput = digitalRead(greenButt);
    if(greenInput == HIGH)
    {
      digitalWrite( greenLED,HIGH);
      tone(speakerPin,200);
      delay(simonSpeed);    
      digitalWrite( greenLED,LOW);
      noTone(speakerPin);
      nextStep++;
    }
  }
}
