#include <stdio.h>
#include <stdlib.h>
#define numfiles 5

int main()
{
    //initial file creation
    FILE *files[numfiles];
    int n[10];
    int ch;
    for(int i=1;i<=numfiles;i++)
    {
        char fname[20];
        sprintf(fname,"file%d.txt",i);
        files[i]=fopen(fname,"w");
        for(int j=0;j<=i;j++)
        {
             fprintf(files[i],"%d ",j);
        }
        fclose(files[i]);
    }

     printf("\n Done");

    //after rewriting to the files
     for(int i=2;i<=5;i++)
     {
         //char names[20];
         int n[10];
         int j=0;
         fopen(files[i],"r");
         while((ch=fgetc(files[i]))!= EOF)
         n[j]=fgetc(files[i]);
         printf("%d",n);
         j++;
     }
     printf("copied");
    return 0;
}
