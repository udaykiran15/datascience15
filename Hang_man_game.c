#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
char s[100];
scanf("%[^\n]",s);
int count=strlen(s);
#define chances 5
char d,g[count];
int a=1;
while(a)
{
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("------------------------");
    printf("welcome to hang man game");
    printf("------------------------");
    printf("\n\n");
    printf("| |=====\n");
    printf("| |   |\n");
    printf("| |\n");
    printf("| |\n");
    printf("| |\n");
    printf("| |\n");    
    printf("\n\n");
    printf("You have only 5 chances left!");
    printf("The word has %d alphabets\n",count);
    int i;
    for(i=0;i<count;i++)
    {
     g[i]='_';
     printf(" %c",g[i]);
    }
    char deadbody[]={' ',' ',' ',' ',' ',' ',' ',' '};
    int j;int k=count+1;
    int v=0,m=0;
    while(k--)
    {
        int x=0,cn=0;
      printf("\nenter any alphabet from a to z and use small case!!");
      printf("\n\nEnter here==>");
      scanf(" %c",&d);
      for(j=0;j<count;j++)
      {
          if(d==s[j])
          {
              g[j]=s[j];
              printf(" %c",g[j]);
              x=j;
          }
          else
          {
              printf(" %c",g[j]);
          }
      }
      if(x==0)
      {
          switch(v)
          {
            case 1:deadbody[0]='o';
            break;
            case 2:deadbody[2]='/';
            deadbody[3]='\\';
            break;
            case 3:deadbody[1]='|';
            break;
            case 4:deadbody[4]='/';
            deadbody[5]='\\';
            printf("\nit's end!you lost man\n");
            break;
            case 5:
            printf("!!oops you  lost bastard!GET lost");
            exit(1);
          }
            v++;
            printf("\n\t||=========\n"
    "\t||        |\n"
    "\t||        %c\n"
    "\t||       %c%c%c\n"
    "\t||       %c %c\n"
    "\t||               ",deadbody[0],deadbody[2],deadbody[1],deadbody[3],deadbody[4],deadbody[5]);
      }
      for(j=0;j<count;j++)
      {
          if(g[j]==s[j])
          cn++;
          else
          cn--;
      }
      if(cn==count)
      {
      printf("\nYou won GUY");
      exit(1);
      }
    }
    a--;
}
}
