void loose(){
    for (int thisNote = 0; thisNote < 10; thisNote++) {
    int noteDuration = 1000/noteDurationsLoose2[thisNote];
    tone(2, youLoose2[thisNote],noteDuration);
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    noTone(2);
  }
  delay(1000);
  nextStep =- 1;
}
