
#include "student.h"
#include <stdlib.h>
#include<stdio.h>

Employee input_data(char *name,int id,int phone_no,char *designation,float salary)
{

   Employee E1;
   strcpy(E1.ename,name);
   E1.eid=id;
   E1.phone_no=phone_no;
   strcpy(E1.designation,designation);
   E1.salary = salary;
   return E1;

}

void count_total_emp()
{
    int count=0;
    char ch;
    FILE *fptr;
    fptr=fopen("employee.txt","r");
    while(!feof(fptr))
    {
        ch=fgetc(fptr);
        if(ch=='\n')
        {
            count++;
        }
    }
    printf("total employee count:%d",count);
    fclose(fptr);

}

void same_designation()
{
    char hr_design[MAXSIZE]="hr";
    char manager_design[MAXSIZE]="manager";
    char search[MAXSIZE];
    FILE *fptr;
    int hr_count=0,manager_count=0;
    fptr=fopen("employee.txt","r");
    while(!feof(fptr))
    {
        fscanf(fptr,"%s",search);
        if(strcmp(hr_design,search)==0)
        {
           hr_count++ ;
        }
        else if(strcmp(manager_design,search)==0)
        {
            manager_count++;
        }
    }
    printf("\n employee with hr designation: %d",hr_count);
    printf("\n employee with manager designation : %d",manager_count);
    fclose(fptr);
}

void total_sal_emps()
{
    FILE *fptr;
    int sum=0;
    int x;
    fptr=fopen("employee.txt","r");
    printf("hi");
    while(!feof(fptr))
    {
        fscanf(fptr,"%d",&x);
        sum +=x;
    }
    printf("%d",sum);

    fclose(fptr);
}

