#include <stdio.h>
#include <stdlib.h>
 struct finance
{
    float salary;
    float bonus;
    float deductions;
};

int main()
{
   struct finance employee[3];
    printf("Enter Salary for Mohsen,Maged and Mariam\n");
    for(int i=0;i<3;i++)
    {
        scanf("%f",&employee[i].salary);
    }
    printf("Enter bonus for Mohsen,Maged and Mariam\n");
    for(int i=0;i<3;i++)
    {
        scanf("%f",&employee[i].bonus);
    }
    printf("Enter deductions for Mohsen,Maged and Mariam\n");
    for(int i=0;i<3;i++)
    {
        scanf("%f",&employee[i].deductions);
    }
    float total_salary=0;
    float total_bonus=0;
    float total_deductions=0;
    for(int i=0;i<3;i++)
    {
        total_salary+=employee[i].salary;
        total_bonus+=employee[i].bonus;
        total_deductions+=employee[i].deductions;
    }
    printf("total salary = %f\n",total_salary);
    printf("total bonus = %f\n",total_bonus);
    printf("total deductions = %f\n",total_deductions);







    return 0;
}
