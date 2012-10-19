//SIMON-SAY-STYLE GAME Step 2, YURY G. OCT 2012
//This code adds the feature of Simon Saying Something, With Time/Speed Game Mechanic, LEDs, and Sound.
//PINS ARE NOW DECLARED 

#include "pitches.h"

int youLoose2[] = {
  NOTE_D4, NOTE_E4, NOTE_D4, NOTE_CS4, NOTE_E4, NOTE_CS4, NOTE_C4, NOTE_E4, NOTE_C4, NOTE_B3 };
int noteDurationsLoose2[] = {
  4, 4, 4, 4, 4, 4, 4, 4, 4, 2 };


//Button Pins
const int redButt = 4;     //  declare pins for buttons
const int yellButt = 6;
const int blueButt = 8;
const int greenButt = 10;

//LED Pins
const int redLED = 3;     //  declare pins for LED's
const int yellLED = 5;
const int blueLED = 7;
const int greenLED = 9;


// Color Code we Use for R,Y,B,G and 1,2,3,4 repectfully
const int redValue = 1;  //  declare values for colors for buttons
const int yellValue = 2;
const int blueValue = 3;
const int greenValue = 4;

const int speakerPin = 2 ;  //declare your speaker pin



boolean simonDone;
int simonSays[99] ={
};       
int nextStep = 0;        

int userSays[] = {
};
int simonSpeed = 400;


void setup()
{
  pinMode(redLED, OUTPUT);   //Set Pin Mode
  pinMode(yellLED, OUTPUT);
  pinMode(blueLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(speakerPin, OUTPUT);    // set speaker to output

  pinMode(redButt, INPUT);  //set buttons as inputs
  pinMode(yellButt, INPUT);  
  pinMode(blueButt, INPUT);  
  pinMode(greenButt, INPUT);

  //  Serial.begin(9600);
  randomSeed(analogRead(0));  

  for (int i = 0; i < 1000; i++) {
    simonGame();
    buttonPressed();
  }
}


void simonGame()
{
  if (simonDone == false)    
  {
    simonSays[nextStep] = random(1,5) ;
    //
    //    Serial.print("nextStep: " );    
    //    Serial.println(nextStep);
    //
    //    Serial.print("simonSpeed: " );    // Show how the new time feature works
    //    Serial.println(simonSpeed);         // Show how the new time feature works
    //
    //    Serial.print("simonSays: ");

    for (int i =0; i <= nextStep ; i++)  
    {
      //      Serial.print(simonSays[i]);      
      //      Serial.print(" , ");
      delay(simonSpeed);      // controls speed that simonSays something  
      playToneAndLight(simonSays[i]);
      checkUserToSimon();

    }

    simonSpeed= (simonSpeed - (nextStep*5));  //  This seeds up Simon on each turn by forumla (500-(nextStep*5). 
    //  Change the multiplier (5 in this case) to make game faster or slower 
    //  The multiplier is MAJOR factor in how hard the game is. 
    //   This sets Simon's TOP SPEED. Also important in making game interesting yet winable.                                         
    simonSpeed = max(simonSpeed, 250);   //this maxes out simon speed at 250 ms
    simonDone = true; 
    //    Serial.println(" "); 
  }


  if (simonDone == true)  
  {
    // nothing happening here yet
    delay(1000);

    //    Serial.println("User got it right, add a new step and give Simon a Turn"); 

    simonDone = false;   // user completed successfully, give simon the next turn
    nextStep++;         //  add one more step to simon's sequence
  }
}

void checkUserToSimon()
{     

  if (userSays[nextStep] == simonSays[nextStep]){
    //    Serial.println(" + THE USER IS RIGHT : ) ");
    simonDone == true;
    nextStep++;
  }

  if (userSays[nextStep] != simonSays[nextStep]){
    //    Serial.println(" - THE USER IS WRONG : (( ");
    //
    //    Serial.println("***************************************");
    //    Serial.println("Game Over, Guess Again From the Start!");
    //    Serial.println("***************************************");
    //    Serial.println("Try to Guest the Contents of simonArray, try a number between 1-4!");
    simonDone == false;

    nextStep = 0 ;         //  start from the begining. 

  }
}
void loop ()
{
}


