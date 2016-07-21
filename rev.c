#include<stdio.h>
#include<conio.h>
void main()
{
 int i,count=0;
 char ch[20];
 clrscr();
 printf("Enter the string\n");
 gets(ch);
 for(i=0;ch[i]!='\0';i++)
 {
  count++;
 } 
  printf("Reverse is:");
 for(i=count-1;i>=0;i--)
 {
   printf("%c",ch[i]);
 }
  getch();
  }
