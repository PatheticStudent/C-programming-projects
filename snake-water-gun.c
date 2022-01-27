#include <stdio.h>
#include<stdlib.h>
#include <time.h>
/* st st
   pa pa
   sc sc 
   st pa
   pa st
   st sc
   sc st
   pa sc
   sc pa */
int decision(char you, char comp)
{
    if (you == comp)
    {
        return 0;
    }


    if (you == 's' && comp == 'w')
    {
        return 1;
    }
  else if (you ==  'w' &&comp == 's')
    {
        return -1;

    }
        if (you == 's' && comp == 'g')
    {
        return -1;
    }
   else if (you ==  'g' &&comp == 's')
    {
        return 1;
    }
        if (you == 'w' && comp == 'g')
    {
        return 1;
    }
    else if (you ==  'g' &&comp == 'w')
    {
        return 1;
    }
}

int main()
{
    char you, comp;
    char s, w, g;
    srand(time(0));
  int  number = rand() % 100 + 1;

    if (number < 33)
    {
        comp = 's';
    }
    else if (number > 33 && number < 66)
    {
        comp = 'w';
    }
    else
    {
        comp = 'g';
    }
printf("\t\t Rules: \n");
printf("\t 1) Snake Drinks Water \n\t 2) Gun is used to kill Snake & \n\t 3) Water is used to drown the Gun \n ");
    printf("Enter 's' for Snake 'w' for Water and 'g' for Gun \n");
    scanf("%c", &you);
   
    int result = decision(you, comp);

    if(result==1){
        printf("You Win \n");
        printf("You Choose %c and Computer Choose %c", you,comp);
    }
  else if(result==-1){
        printf("You Lose \n");
        printf("You Choose %c and Computer Choose %c", you,comp);
    }
  else if(result==0){
        printf("Match Draw \n");
        printf("You Choose %c and Computer Choose %c", you,comp);
    }

    return 0;
}