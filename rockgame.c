#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>
int game (char user, char comp){
if(user == comp)
return -1;
if(user=='s' && comp== 'p')
return 0;
else if(user=='p' && comp== 's')
return 1;
if(user=='s' && comp== 'z')
return 0;
else if(user=='z' && comp== 's')
return 1;
if(user=='p' && comp== 'z')
return 0;
else if(user=='z' && comp== 'p')
return 1;
}
int main(){
int n;
char user, comp, result;
srand (time(NULL));
n= rand()%100;
if (n<33)
comp='s';
else if (n>33 && n<66)
comp='p';
else
comp='z';
printf("Enter s for STONE, p for PAPER, z for SCISSOR\n");
scanf("%c",&user);
result= game(user,comp);
if (result== -1)
printf("\n!!!GAME DRAW!!!\n");
else if(result==1)
printf("\n!!! YOU WON !!!\n");
else 
printf("\n!!! YOU LOSE !!!\n");
printf("\n You chose: %c and computer chose: %c",user, comp);

return 0;
}