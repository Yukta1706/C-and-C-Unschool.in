#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<string.h>


int randomNumber(int n){
   srand(time(NULL));
   return rand() % n;
}

int winner(int x, int y){

        if(x == y)
        {
            return -1;
        }

         if(x == 1 && y == 2)
        {
            return 0;
        }

         if(x == 2 && y == 1)
        {

            return 1;
        }

         if(x == 2 && y == 3)
        {
            return 0;
        }

         if(x == 3 && y == 2)
        {

            return 1;
        }


         if(x == 1 && y == 3)
        {

            return 1;
        }

         if(x == 3 && y == 1)
        {

            return 0;
        }

}


int main()
{

    char uchoice[20]; //userchoice
    int compchoice; //for Choice
    int x=0, y=0;
    int a, temp;
    while(1)
    {
        //player input
        printf("Please choose Rock Paper Scissor or Quit\n");
        scanf("%s", uchoice);
        if(strcmp(uchoice,"Rock")==0 || strcmp(uchoice,"rock")==0){
            printf("\nYou Chose: Rock");
            x=1;
        }
        if(strcmp(uchoice,"Paper")==0 || strcmp(uchoice,"paper")==0){
            printf("\nYou Chose: Paper");
            x=2;
        }
        if(strcmp(uchoice,"Scissor")==0 || strcmp(uchoice,"scissor")==0){
            printf("\nYou Chose: Scissor");
            x=3;
        }
         if(strcmp(uchoice,"Quit")==0 || strcmp(uchoice,"quit")==0){
            printf("\nDone!");
            break;
        }

       //computer input
        temp = randomNumber(3) + 1;
        compchoice = temp;
        if(compchoice == 1){
            printf("\nComputer Choose: Rock");
        }
        if(compchoice == 2){
            printf("\nComputer Choose: Paper");
        }
        if(compchoice == 3){
            printf("\nComputer Choose: Scissors");
        }

        //calling function
        winner(x, compchoice);

        if(winner(x,compchoice)==1)
        {
            printf("\nResult: Player Won\n");
        }

        if(winner(x,compchoice)==0)
        {
            printf("\nResult: Computer Won\n");
        }

        if(winner(x,compchoice)==-1)
        {
            printf("\nTie!\n");
        }
        printf("\n\n");

    }
    return 0;
}


