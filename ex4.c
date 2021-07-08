#include<stdio.h>
#include<stdlib.h>
#include <time.h>

int Roll(int);

int main()
{
  srand((unsigned int)time(NULL));
  int x=0;
  int i;
  char name[10];
    
  printf("What is your name?\n");
  printf(">");
  scanf("%s",name);
  printf("Hello, %s!\n",name);
     
  printf("Rolling the dice...\n");

  for(i=0 ; i<2 ; i++)
    x = x+Roll(i+1);
  
  printf("Total value: %d\n",x);
  
  if(x>=7) printf("%s won!\n",name);
  else printf("%s lost!\n",name);

  return 0;
}

int Roll(int i)
{
  int y;
  
  y = rand()%6 + 1;

  printf("Die %d: %d\n",i,y);

  return y;
}
