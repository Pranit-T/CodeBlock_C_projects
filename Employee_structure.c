#include <stdio.h>
#include <string.h>
/*Define a structure called Employee that will
describe the following data: employee number,
name, address, department, and salary.
Develop a program that stores information of
N employees and displays the names of the
employees having a salary greater than 50,000.*/

    struct employee{
        int emp_num;
        char emp_name[50];
        char emp_add[100];
        char emp_dep[50];
        int emp_sal;
    };

    int main()
    {
        int n;

        printf("Enter Employee Details\n");

        printf("Number of employees: ");
        scanf("%d",&n);

        struct employee comp_emp[n];

        for (int i=0;i<n;i++)
        {
            printf("---Employee Details---\n");

            printf("Enter Employee Number: ");
            scanf("%d",&comp_emp[i].emp_num);

            while (getchar() != '\n');

            printf("Enter employee name: ");
            fgets(comp_emp[i].emp_name,sizeof(comp_emp[i].emp_name),stdin);

            printf("Enter employee add: ");
            fgets(comp_emp[i].emp_add,sizeof(comp_emp[i].emp_add),stdin);

            printf("Enter employee Department: ");
            scanf(comp_emp[i].emp_dep,sizeof(comp_emp[i].emp_dep),stdin);

            while (getchar() != '\n');

            printf("Enter employee salary: ");
            scanf ("%d",&comp_emp[i].emp_sal);

            if(comp_emp[i].emp_sal<0)
            {
                printf("Error!");
            }
        }
        printf("---EMPLOYEES WITH SALARY HIGHER THAN 50K ARE---\n");
        for (int i=0;i<n;i++)
        {
           if (comp_emp[i].emp_sal>50000)
           {
               printf("%d",i);
               printf(comp_emp[i].emp_name);
           }
        }
        return 0;
    }
