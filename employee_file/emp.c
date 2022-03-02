#include "emp.h"
#include<stdio.h>
#include<string.h>

void add_data_to_file()
{
    FILE *f;
    f=fopen("employee_details.txt","w");
    //assert(f!=NULL);
    if(f==NULL)
    {
        printf("\n file doesnt exist ");
        exit(1);
    }
    emp e1={1,"manvitha","hr",34000};
    emp e2={2,"ravi","manager",31000};
    emp e3={3,"ciya","hr",39000};
    emp e4={4,"maan","manager",36000};
    fprintf(f,"%d \t %s \t %s \t %f \n",e1.emp_id,e1.emp_name,e1.emp_desig,e1.sal);
    fprintf(f,"%d \t %s \t %s \t %f \n",e2.emp_id,e2.emp_name,e2.emp_desig,e2.sal);
    fprintf(f,"%d \t %s \t %s \t %f \n",e3.emp_id,e3.emp_name,e3.emp_desig,e3.sal);
    fprintf(f,"%d \t %s \t %s \t %f \n",e4.emp_id,e4.emp_name,e4.emp_desig,e4.sal);
    fclose(f);
}

void display()
{
    FILE *f;
    emp e;
    f=fopen("employee_details.txt","r");
    if(f==NULL)
    {
        printf("\n file doesnt exist");
        exit(1);
    }
    printf("\n file contents: \n ");
    while(!feof(f)){
        fscanf(f,"%d \t %s \t %s \t %f ",&e.emp_id,&e.emp_name,&e.emp_desig,&e.sal);
    //fread(&e,sizeof(e),4,f);
    printf("\n %d %s %s %f \n",e.emp_id,e.emp_name,e.emp_desig,e.sal);
    }
    //fscanf(f,"%d \t %s \t %s \t %f ",&e.emp_id,&e.emp_name,&e.emp_desig,&e.sal);
    //fread(&e,sizeof(e),4,f);
    //printf("\n %d %s %s %f \n",e.emp_id,e.emp_name,e.emp_desig,e.sal);
    fclose(f);
}


void count_emp()
{
    FILE *f;
    emp e;
    char ch;
    f=fopen("employee_details.txt","r");
    int count=0;
    if(f==NULL)
    {
        printf("\n file doesnt exist");
        exit(1);
    }
    while(!feof(f))
    {
        ch=fgetc(f);
        if(ch =='\n')
            count++;
    }
    printf("%d is count of emp",count);
    fclose(f);
}

void count_desig()
{

    FILE *f;
    emp e;
    char ch;
    int count=0,count1=0;
    char desig_manager[20]="manager";
    char desig_hr[20]="hr";
    f=fopen("employee_details.txt","r");
    if(f==NULL)
    {
        printf("\n file doesnt exist");
        exit(1);
    }
    while(!feof(f))
    {
        fscanf(f,"%s",&e.emp_desig);
        if(strcmp(desig_manager,e.emp_desig)==0)
            count++;
        else if(strcmp(desig_hr,e.emp_desig)==0)
            count1++;
    }
    printf("\n %d manager",count);
    printf("\n %d hr",count1);
    fclose(f);

}

void total_salary(){
    FILE *f;
    emp e;
    char ch;
    float n;
    f=fopen("employee_details.txt","r");
    float sum=0;
    if(f==NULL)
    {
        printf("\n file doesnt exist");
        exit(1);
    }

    while(!feof(f))
    {
        fscanf(f,"%d \t %s \t %s \t %f ",&e.emp_id,&e.emp_name,&e.emp_desig,&e.sal);
    //fread(&e,sizeof(e),4,f);
   // printf("\n %d %s %s %f \n",e.emp_id,e.emp_name,e.emp_desig,e.sal);
    sum=sum+e.sal;
    }
    printf("\n total sal %f",sum);
    fclose(f);
}

emp count_desig_move()
{

    FILE *f;
    emp e;
    //char ch;
    //int count=0,count1=0;
    char desig_manager[20]="manager";
    char desig_hr[20]="hr";
    f=fopen("employee_details.txt","r");
    if(f==NULL)
    {
        printf("\n file doesnt exist");
        exit(1);
    }
    add_data_to_file();
    while(!feof(f))
    {
       // fscanf(f,"%d \t %s \t %s \t %f ",&e.emp_id,&e.emp_name,&e.emp_desig,&e.sal);
       fread(&e,sizeof(e),1,f);
        if(strcmp(desig_manager,e.emp_desig)==0)
        {
            FILE *fmanager = fopen("manager.txt","w");
            fprintf(fmanager,"%d \t %s \t %s \t %f \n",e.emp_id,e.emp_name,e.emp_desig,e.sal);
            fclose(fmanager);
        }

        else if(strcmp(desig_hr,e.emp_desig)==0)
            {
                FILE *fhr = fopen("hr.txt","w");
               fprintf(fhr,"%d \t %s \t %s \t %f \n",e.emp_id,e.emp_name,e.emp_desig,e.sal);
               fclose(fhr);
            }
    }
   // printf("\n %d manager",count);
    printf("sucess");
    fclose(f);

}
