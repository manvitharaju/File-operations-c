/*Create structure to store details of employees data need to be are Name, Emp_id, Phone number, Designation and salary

Store this information in "Employee.txt" file. Read the data from the file and perform the following actions:

1. Count total number of employees.
2. Count number of employees with same designation.
3. Total salary of all employees.
4. Place the employees in separate files based on their designation */
#define MAXSIZE 30

struct _employee_
{
    char ename[MAXSIZE];
    int eid;
    int phone_no;
    char designation[MAXSIZE];
    float salary;
};
typedef struct _employee_ Employee;

Employee input_data(char *name,int id,int phone_no,char *designation,float salary);

void count_total_emp();

void same_designation();

void total_sal_emps();
