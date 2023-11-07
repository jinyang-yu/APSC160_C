//
//  main.c
//  lab08
//
//  Created by Jinyang Yu on 2023-06-20.
//

#include <stdio.h>

void generateSequence(int length, int data[]);
void setLEDs(int i, int data[]);
void readPush(int length, int answer[]);

int main(void) {
    // insert code here...
    printf("Hello, World!\n");
    return 0;
}

/* user-identified function to generate random sequence */
void generateSequence(int length, int data[]){
  int i;
  for (i=0; i<length; i++){
    data[i]=random(4);
  }
}

/*
  // call the function to generate a random sequence of numbers
  generateSequence(length, data);
  // for the first n LEDs:
  for (n=1; n<=length; n++){
    // setup the LEDs
    setLEDs(n, data);
    
    readPush(n, answer);
    if (answerEqual!=TRUE){
      for (i=0; i<length; i++){
        digitalWrite(RED_LOST, HIGH);
        digitalWrite(GREEN_WON, LOW);
        delay (0.5*ONE_SEC);
        digitalWrite(RED_LOST, LOW);
        digitalWrite(GREEN_WON, LOW);
        delay (0.5*ONE_SEC);
      }
      break;
    }
  }
  for (i=0; i<length; i++){
    digitalWrite(GREEN_WON, HIGH);
    digitalWrite(RED_LOST, LOW);
    delay (0.5*ONE_SEC);
  }
  /* then excute the codes from the beginning of the loop */
/*}

/* user-identified function to generate random sequence */
// pass in two arguments: the length of data[] and data[]
/*void generateSequence(int length, int data[]){
  // declare i as an integer
  int i;
  //generate a random sequence
  for (i=0; i<length; i++){
    data[i]=random(4);
  }
}

/* user-identified function to set the lights of the LEDs */
/*void setLEDs(int length, int data[]){
  int i;
  // setup the corresponding LEDs based on the random number sequence
  for (i=0; i<length; i++){
    if (data[i]==0){
      digitalWrite(GREEN_LED, HIGH);
      digitalWrite(BLUE_LED, LOW);
      digitalWrite(YELLOW_LED, LOW);
      digitalWrite(RED_LED, LOW);
      delay(ONE_SEC);
    }
    else if (data[i]==1){
      digitalWrite(GREEN_LED, LOW);
      digitalWrite(BLUE_LED, HIGH);
      digitalWrite(YELLOW_LED, LOW);
      digitalWrite(RED_LED, LOW);
      delay(ONE_SEC);
    }
    else if (data[i]==2){
      digitalWrite(GREEN_LED, LOW);
      digitalWrite(BLUE_LED, LOW);
      digitalWrite(YELLOW_LED, HIGH);
      digitalWrite(RED_LED, LOW);
      delay(ONE_SEC);
    }
    else {
      digitalWrite(GREEN_LED, LOW);
      digitalWrite(BLUE_LED, LOW);
      digitalWrite(YELLOW_LED, LOW);
      digitalWrite(RED_LED, HIGH);
      delay(ONE_SEC);
    }
  }
}

void readPush (int length, int answer[]){
  int i;
  for (i=0; i<length; i++){
    if (digitalRead(GREEN_PUSH)==HIGH){
      answer[i]=0;
    }
      else if (digitalRead(BLUE_PUSH)==HIGH){
      answer[i]=1;
      }
      else if (digitalRead(YELLOW_PUSH)==HIGH){
      answer[i]=2;
      }
    else if (digitalRead(RED_PUSH)==HIGH){
      answer[i]=3;
    }
  }
}

int answerEqual (data[], answer[], length){
  int i, result=1;
  for (i=0; i<length; i++){
    if (data[i]!=answer[i]){
      result=0;
      break;
    }
  }
  return result;
}

 /* user-identified function to set the lights of the LEDs */
 // pass in two arguments: the length of data[] and data[]
 void setLEDs(int length, int data[]){
   int i;
   // setup the corresponding LEDs based on the random number sequence
   for (i=0; i<length; i++){
     // 0 represents the green light
     if (data[i]==0){
       digitalWrite(GREEN_LED, HIGH);
       digitalWrite(BLUE_LED, LOW);
       digitalWrite(YELLOW_LED, LOW);
       digitalWrite(RED_LED, LOW);
       delay(2*ONE_SEC);
     }
     // 1 represents the blue light
     else if (data[i]==1){
       digitalWrite(GREEN_LED, LOW);
       digitalWrite(BLUE_LED, HIGH);
       digitalWrite(YELLOW_LED, LOW);
       digitalWrite(RED_LED, LOW);
       delay(2*ONE_SEC);
     }
     // 2 represents the yellow light
     else if (data[i]==2){
       digitalWrite(GREEN_LED, LOW);
       digitalWrite(BLUE_LED, LOW);
       digitalWrite(YELLOW_LED, HIGH);
       digitalWrite(RED_LED, LOW);
       delay(2*ONE_SEC);
     }
     // 3 represents the red light
     else {
       digitalWrite(GREEN_LED, LOW);
       digitalWrite(BLUE_LED, LOW);
       digitalWrite(YELLOW_LED, LOW);
       digitalWrite(RED_LED, HIGH);
       delay(2*ONE_SEC);
     }
   }
 }
