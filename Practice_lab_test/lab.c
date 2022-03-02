#include "lab.h"
#include <stdlib.h>
#include<stdio.h>


void Upper_2_lower(char *str)
{
    for(int i=0;i<=strlen(str);i++)
    {
        if(str[i]>=65 && str[i]<=90)
            str[i]=str[i]+32;//conversion to lower case
    }
    printf("\n in LOwer: %s",str);
}

void Lower_2_Upper(char *str){

    for(int i=0;i<=strlen(str);i++)
    {
        if(str[i]>=97 && str[i]<=122)
            str[i]=str[i]-32;//conversion to lower case
    }
    printf("\n in Upper: %s",str);

}

//files

void sum_of_num_file()
{
    FILE *fptr;
    int n;
    int sum=0;
    fptr=fopen("hello.txt","r");
    if(fptr==NULL)
    {
        printf("\n File doesnt exist");
        exit(0);
    }

    while(!feof(fptr))
    {
        fscanf(fptr,"%d",&n);
        sum +=n;

    }
    printf("\n sum: %d",sum);
    fclose(fptr);
}

void square_num_file()
{
    FILE *fp,*fw;
    int sq;
    int squared_value;
    fp=fopen("hello.txt","r");
    fw=fopen("write.txt","w");
    if(fp==NULL || fw==NULL)
    {
        printf("\n File doesnt exist");
        exit(0);
    }
    while(!feof(fp))
    {
        fscanf(fp,"%d",&sq);
        squared_value=sq*sq;
        fprintf(fw,"\n square of %d is %d",sq,squared_value);
    }
    printf("\n DONE WITH READING AND WRITING");
    fclose(fp);
    fclose(fw);
}

void reverse_num_file()
{
    FILE *fr,*fw;
    int num;
    int i=0,count=0;
    int arr[5];
    fr=fopen("hello.txt","r");
    fw=fopen("write.txt","w");
    if(fr==NULL || fw == NULL)
    {
        printf("\n File doesnt exist");
        exit(0);
    }
    while(!feof(fr))
    {
        count++;
        fscanf(fr,"%d",&num);
        //printf("\n %d",num);
        arr[i]=num;
        i++;
    }
    for(i=count-1;i>=0;i--)
    {
        fprintf(fw,"\n %d",arr[i]);
    }
    printf("\n Completed reading and writing");
    fclose(fr);
    fclose(fw);
}

void pattern_match(char *pattern){
   FILE *fptr;
   char ch;
   char word[50];//char array to store complete line
   int count=0;
   int pointer=0;
   int pos[10];//int array
   fptr =fopen("sentence.txt","r");
   if(fptr==NULL)
   {
       printf("Cannot open file \n");
       exit(0);
   }

   //printf("%s",pattern);
   //ch=fscanf(fptr,"%s",word);
   while(!feof(fptr))
   {
      ch=fscanf(fptr,"%s",word);
      if(strcmp(word,pattern)==0)
      {
          pos[count]=pointer;
          count++;
      }
      pointer++;

   }
   if(count==0)
    printf("\n %s is not found");
   else{
    printf("\n %s found at ---> ",pattern);
    for(int i=0;i<count;i++)
    {
        printf("\n position %d",pos[i]);
    }
       }
   fclose(fptr);

}

int length_of_each_line()
{
    FILE *fr,*fw;
    int count=0;
    char ch;
    int pos[10];
    int pointer=0;
    char word[50];
    fr=fopen("no_of_lines.txt","r");
    while(ch!=EOF)
    {
        fscanf(fr,"%d",strlen(ch));
        if(ch!='\n')
            count=count+1;
    }
    printf("%d lines",count);
  fclose(fr);
  return 0;
}
