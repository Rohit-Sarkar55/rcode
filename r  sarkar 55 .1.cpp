#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
  FILE *f1;
  char ch[100];
  f1=fopen("sample.txt","w");
  printf("Enter a few lines in the file.\nPress 'Enter' to end.\n");
  while(strlen(gets(ch))>0)
  {
      fputs(ch,f1);
      fputs("\n",f1);
  }
  printf("Closing the file.");
  fclose(f1);

}
