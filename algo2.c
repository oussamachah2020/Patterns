#include <stdio.h>
#include <curses.h>

void row1()
{
 int i,j;

 for(i = 1; i <= 5;i++)
 {
   for(j = 1; j <= 5; j++)
   {
     printf("*");
   }
   printf("\n");
 }
}

void row2()
{
  int i,j;

  for(i = 1 ; i <= 5;i++)
  {
    for(j = 1; j <= 5; j++)
    {
      printf("%2d",i);
    }
    printf("\n");
  }
}

void row3()
{
  int i,j;

  for(i = 1 ; i <= 5;i++)
  {
    for(j = 1; j <= 5; j++)
    {
      printf("%2d",j);
    }
    printf("\n");
  }
}

void row4()
{
  char i,j;

  for(i = 'A'; i <= 'E';i++)
  {
    for(j = 'A';j <= 'E';j++)
    {
      printf("%2c",i);
    }
    printf("\n");
  }
}

void row5()
{
  char i,j;

  for(i = 'A'; i <= 'E';i++)
  {
    for(j = 'A';j <= 'E';j++)
    {
      printf("%2c",j);
    }
    printf("\n");
  }
}

void row6()
{
  int i,j;

  for(i = 5;i >= 1;i--)
  {
    for(j = 5; j >= 1;j--)
    {
      printf("%2d",i);
    }
    printf("\n");
  } 
}

void row7()
{
  int i,j;

  for(i = 5;i >= 1;i--)
  {
    for(j = 5; j >= 1;j--)
    {
      printf("%2d",j);
    }
    printf("\n");
  } 
}

void row8()
{
  char i,j;

  for(i = 'E'; i >= 'A'; i--)
  {
    for(j = 'E'; j >= 'A'; j--)
    {
      printf("%2c",i);
    }
    printf("\n");
  }
}

void row9()
{
  char i,j;

  for(i = 'E'; i >= 'A'; i--)
  {
    for(j = 'E'; j >= 'A'; j--)
    {
      printf("%2c",j);
    }
    printf("\n");
  }
}

void row10()
{
  int i,j;

  for(i = 1; i <= 5; i++)
  {
    for(j = 1; j <= i; j++)
    {
      printf("*");
    }
    printf("\n");
  }
}
int main()
{
  row1();
  printf("\n-------------------\n");
  row2();
  printf("\n-------------------\n");
  row3();
  printf("\n-------------------\n");
  row4();
  printf("\n-------------------\n");
  row5();
  printf("\n-------------------\n");
  row6();
  printf("\n-------------------\n");
  row7();
  printf("\n-------------------\n");
  row8();
  printf("\n-------------------\n");
  row9();
  printf("\n-------------------\n");
  row10();
}