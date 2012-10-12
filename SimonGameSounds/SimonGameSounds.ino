#include "pitches.h"
// notes from the pitches library
// note durations: 2 = half note, 4 = quarter note, 8 = eighth note


// intro melodies
int intro1[] = {
  NOTE_CS3, NOTE_E3, NOTE_FS3, NOTE_G3, NOTE_GS3, NOTE_B3, NOTE_CS4 };
int noteDurationsIntro1[] = {
  8, 4, 4, 4, 4, 8, 8 };

int intro2[] = {
  NOTE_CS3, NOTE_E3, NOTE_CS3, NOTE_GS3, NOTE_FS3, NOTE_E3, NOTE_FS3, NOTE_CS3 };
int noteDurationsIntro2[] = {
  8, 8, 8, 4, 4, 8, 4, 4 };

int intro3[] = {
  NOTE_E4, NOTE_E4, NOTE_GS4, NOTE_E4, NOTE_CS4, NOTE_CS4, NOTE_E4, NOTE_CS4,
  NOTE_DS4, NOTE_DS4, NOTE_FS4, NOTE_DS4, NOTE_B3, NOTE_B3, NOTE_DS4, NOTE_B3,
  NOTE_E4, NOTE_E4, NOTE_GS4, NOTE_E4, NOTE_CS4, NOTE_CS4, NOTE_E4, NOTE_CS4,
  NOTE_FS4, NOTE_FS4, NOTE_FS4, NOTE_FS4, NOTE_DS4, NOTE_DS4, NOTE_B3, NOTE_B3, NOTE_CS4 };
int noteDurationsIntro3[] = {
  8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 2 };

//correct sounds
int correct1[] = {
  NOTE_B4, NOTE_B4, NOTE_B4, NOTE_DS5 };
int noteDurationsCorrect1[] = {
  4, 8, 8, 2 };

int correct2[] = {
  NOTE_B5, NOTE_B5 };
int noteDurationsCorrect2[] = {
  8, 2 };

int correct3[] = {
  NOTE_E4, NOTE_E4, NOTE_E4, NOTE_E4 };
int noteDurationsCorrect3[] = {
  8, 8, 8, 2 };

//wrong sounds
int wrong1[] = {
  NOTE_E3, NOTE_DS3, NOTE_D3 };
int noteDurationsWrong1[] = {
  4, 4, 1 };

int wrong2[] = {
  NOTE_B3, NOTE_D4, NOTE_AS3 };
int noteDurationsWrong2[] = {
  2, 4, 2 };

int wrong3[] = {
  NOTE_AS2, NOTE_FS2, NOTE_F2 };
int noteDurationsWrong3[] = {
  4, 4, 2 };

//you loose sounds
int youLoose1[] = {
  NOTE_E2, NOTE_DS2, NOTE_D2, NOTE_CS2 };  
int noteDurationsLoose1[] = {
  4, 4, 4, 2 };

int youLoose2[] = {
  NOTE_D4, NOTE_E4, NOTE_D4, NOTE_CS4, NOTE_E4, NOTE_CS4, NOTE_C4, NOTE_E4, NOTE_C4, NOTE_B3 };
int noteDurationsLoose2[] = {
  4, 4, 4, 4, 4, 4, 4, 4, 4, 2 };

//you win sounds
int youWin1[] = {
  NOTE_E4, NOTE_B4, NOTE_E4, NOTE_B5, NOTE_A5, NOTE_GS4, NOTE_A5, NOTE_E4 };
int noteDurationsWin1[] = {
  8, 8, 8, 4, 4, 8, 4, 4 };

int youWin2[] = {
  NOTE_CS4, NOTE_D4, NOTE_CS4, NOTE_AS5, NOTE_FS5, NOTE_FS5, NOTE_E5, NOTE_F5, NOTE_FS5 };
int noteDurationsWin2[] = {
  8, 8, 8, 4, 4, 8, 8, 8, 4 };


void setup() {

  //intro1
  for (int thisNote = 0; thisNote < 7; thisNote++) {
    int noteDuration = 1000/noteDurationsIntro1[thisNote];
    tone(13, intro1[thisNote],noteDuration);
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    noTone(13);
  }
  delay(2500);
  //intro2
  for (int thisNote = 0; thisNote < 8; thisNote++) {
    int noteDuration = 1000/noteDurationsIntro2[thisNote];
    tone(13, intro2[thisNote],noteDuration);
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    noTone(13);
  }
  delay(2500);
  //intro3
  for (int thisNote = 0; thisNote < 33; thisNote++) {
    int noteDuration = 1000/noteDurationsIntro3[thisNote];
    tone(13, intro3[thisNote],noteDuration);
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    noTone(13);
  }
  delay(3500);

  //correct1
  for (int thisNote = 0; thisNote < 4; thisNote++) {
    int noteDuration = 1000/noteDurationsCorrect1[thisNote];
    tone(13, correct1[thisNote],noteDuration);
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    noTone(13);
  } 
  delay(2500);
  //correct2
  for (int thisNote = 0; thisNote < 2; thisNote++) {
    int noteDuration = 1000/noteDurationsCorrect2[thisNote];
    tone(13, correct2[thisNote],noteDuration);
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    noTone(13);
  }
  delay(2500);
  //correct3
  for (int thisNote = 0; thisNote < 4; thisNote++) {
    int noteDuration = 1000/noteDurationsCorrect3[thisNote];
    tone(13, correct3[thisNote],noteDuration);
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    noTone(13);
  }
  delay(3500);

  //wrong1
  for (int thisNote = 0; thisNote < 3; thisNote++) {
    int noteDuration = 1000/noteDurationsWrong1[thisNote];
    tone(13, wrong1[thisNote],noteDuration);
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    noTone(13);
  }
  delay(2500);
  //wrong2
  for (int thisNote = 0; thisNote < 3; thisNote++) {
    int noteDuration = 1000/noteDurationsWrong2[thisNote];
    tone(13, wrong2[thisNote],noteDuration);
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    noTone(13);
  }
  delay(2500);
  //wrong3
  for (int thisNote = 0; thisNote < 3; thisNote++) {
    int noteDuration = 1000/noteDurationsWrong3[thisNote];
    tone(13, wrong3[thisNote],noteDuration);
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    noTone(13);
  }
  delay(3500);

  //loose1
  for (int thisNote = 0; thisNote < 4; thisNote++) {
    int noteDuration = 1000/noteDurationsLoose1[thisNote];
    tone(13, youLoose1[thisNote],noteDuration);
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    noTone(13);
  }
  delay(2500);
  //loose2
  for (int thisNote = 0; thisNote < 10; thisNote++) {
    int noteDuration = 1000/noteDurationsLoose2[thisNote];
    tone(13, youLoose2[thisNote],noteDuration);
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    noTone(13);
  }
  delay(2500);
  //loose3
  for(int i = 300; i > 0; i -= 2 )
  {
    tone(13, i);
    delay(15);
    noTone(13);
    delay(2);
  }
  delay(3500);


  //win1
  for (int thisNote = 0; thisNote < 8; thisNote++) {
    int noteDuration = 1000/noteDurationsWin1[thisNote];
    tone(13, youWin1[thisNote],noteDuration);
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    noTone(13);
  }
  delay(2500);
  //win2
  for (int thisNote = 0; thisNote < 9; thisNote++) {
    int noteDuration = 1000/noteDurationsWin2[thisNote];
    tone(13, youWin2[thisNote],noteDuration);
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    noTone(13);
  }
  delay(2500);
  //win3
  for(int i = 0; i < 1000; i += 5 )
  {
    tone(13, i);
    delay(15);
    noTone(13);
    delay(2);  
  }
}
void loop() {
}


