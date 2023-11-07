//
//  main.c
//  09
//
//  Created by Jinyang Yu on 2023-06-24.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NUM_OPERATORS 3 /* number of operators to choose from */
#define NUM_QUESTIONS 10 /* number of questions in quiz */
#define MAX_ATTEMPTS 3 /* max number of attempts to answer a question */
#define MAX_NUM 10 /* operands are in range 0 to (MAX_NUM - 1) */
#define FALSE 0
#define TRUE 1

int generateQuestion( int qNum );
int processUserAnswers( int correctAnswer);
int getUserAnswer( int attemptsRemaining);
int getRandomOperand( void );

int main( void )
{
    int qNum;
    int correctAnswer;
    int numCorrect = 0;
    srand ((unsigned) time( NULL )); //srand is similar to randomSeed
    for (qNum = 1; qNum <= NUM_QUESTIONS; qNum++) {
        //generate and display question
        correctAnswer = generateQuestion(qNum);
        // Respond to user getting answer right or running out of attempts
        if ( processUserAnswers(correctAnswer)==TRUE ) {
            printf ("Correct!\n\n");
            numCorrect++;
        }
        else {
            printf ("You have no more attempts remaining.\n");
            printf ("The correct answer is %d\n\n", correctAnswer);
        }
    }
    printf ("Your score is %.1f percent.\n", 100.0 * numCorrect / NUM_QUESTIONS);
    return 0;
}

/* Generates a random operand between 0 (inclusive) and MAX_NUM (exclusive) */
int getRandomOperand (void)
{
    return rand() % MAX_NUM; //rand() is similar to random() }
}

/*
* Generates a new random question, prints it on the screen and returns correct answer.
* Param: qNum - the question number
* Return: answer to question
*/
int generateQuestion (int qNum){
    char operators[] = { '+', '-', '*' };
    char operator = operators[ rand() % NUM_OPERATORS ];
    int operand1 = getRandomOperand();
    int operand2 = getRandomOperand();
    int answer;
    printf ("Question #%d: \n", qNum);
    printf ("%d %c %d = ?\n\n", operand1, operator, operand2);
    // determine correct answer to question just printed and return it
    if(operator=='+'){
        answer=operand1+operand2;
    }
    else if(operator=='-'){
        answer=operand1-operand2;
    }
    else{
        answer=operand1*operand2;
    }
    return answer;
}
/*
* Tells the user how many attempts they have remaining and prompts them
* to enter their answer to the question.
* Param: attemptsRemaining - number of attempts remaining to answer the question
* Returns: user's answer to question
*/
int getUserAnswer (int attemptsRemaining) {
    int answer;
    printf("You have %d attempts remaining. Enter your answer...", attemptsRemaining);
    scanf("%d", &answer);
    return answer;
}

/*
* Give user MAX_ATTEMPTS to enter correct answer. Tell user if
* answer is not correct and, if user has another attempt remaining,
* prompt for next answer.
* Param: correctAnswer - the correct answer to the question
* Return: TRUE if user enters correct answer within max number of attempts, FALSE otherwise.
*/
int processUserAnswers (int correctAnswer) {
    int answer;
    int attemptsRemaining;
    int result=FALSE;
    for(attemptsRemaining=MAX_ATTEMPTS; attemptsRemaining>=1;attemptsRemaining--){
        answer=getUserAnswer(attemptsRemaining);
        if (answer==correctAnswer){
            result=TRUE;
            break;
        }
        printf("Your answer is not correct.\n");
    }
    return result;
}
