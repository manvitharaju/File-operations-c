


struct _emp_
{
    int emp_id;
    char emp_name[30];
    char emp_desig[30];
    float sal;
};

typedef struct _emp_ emp;

void add_data_to_file();
void display();
void count_emp();
void count_desig();
void total_salary();
emp count_desig_move();
