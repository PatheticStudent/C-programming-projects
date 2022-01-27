#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int number, guess, nguess = 1;
    srand(time(0));
    number = rand()%100+1;
   // printf("The number is %d \n",number);
    printf("*****NUMBER GUESSING GAME 😍😍******\n\n\n");
    printf("Instructions:\n\n");
    printf("YOU HAVE TO GUESS THE NUMBER BETWEEN 1 TO 100 UNTIL: \n            IT MATCHES \n\n            GOOD LUCK!\n\n\n");
    do
    {
        printf("Enter Number Please! \n\n");
        scanf("%d",&guess);
        if(guess<number)
        {
            printf("\nChoose Higher no. please!\n\n");
        }
        else if(guess>number)
        {
            printf("\nChoose Lower no. please!\n\n");
        }
        else
        {
            printf("\nHurray! You have guessed it in %d attempts\n         Game Over!!\n      See you Next time! 🙂\n     Created By Chirag 😎😉 ", nguess);
      break;
          }
        
       
        
   
        nguess++;
    }
    while(guess!=number);




    return 0;
}