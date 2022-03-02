#include <stdio.h>
#include <stdlib.h>
#include "student.h"
#include <assert.h>

int main()
{
    FILE *fptr;
    float total_salary;
    fptr=fopen("employee.txt","w");
    Employee e1 =input_data("manvitha",101,987652,"hr",30000);
    Employee e2=input_data("vishal",102,56789943,"hr",40000);
    Employee e3=input_data("pamy",103,567855673,"hr",50000);
    Employee e4=input_data("samy",104,567995673,"manager",50000);
    fprintf(fptr,"%s %d %d %s %f \n",e1.ename,e1.eid,e1.phone_no,e1.designation,e1.salary);
    fprintf(fptr,"%s %d %d %s %f \n",e2.ename,e2.eid,e2.phone_no,e2.designation,e2.salary);
    fprintf(fptr,"%s %d %d %s %f \n",e3.ename,e3.eid,e3.phone_no,e3.designation,e3.salary);
    fprintf(fptr,"%s %d %d %s %f \n",e4.ename,e4.eid,e4.phone_no,e4.designation,e4.salary);
    fclose(fptr);
    count_total_emp();
    same_designation();
    total_sal_emps();
   // printf("\n The total salary of all the employees are: %f",total_salary);

    return 0;
}
