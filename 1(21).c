#include<stdio.h>
void main()

{
    float netsalary,grosssalary,allowance,deduction;
    printf("Enter Gross Salary:");
    scanf("%f", &grosssalary);

    allowance=grosssalary*0.10;
    printf("Allowance:%f\n", allowance);

    deduction=grosssalary*0.03;
    printf("Deduction:%f\n", deduction);

    netsalary= grosssalary+allowance-deduction;
    printf("Net Salary:%f\n", netsalary);






}

