#include <stdio.h>

int main()
{
    int emp_id;
    char emp_name[50];
    float basic, hra, da, allowances, deductions;
    float gross_salary, net_salary;

    printf("===== PAYROLL PROCESSING SYSTEM =====\n");

    printf("Enter Employee ID: ");
    scanf("%d", &emp_id);

    printf("Enter Employee Name: ");
    scanf("%s", emp_name);

    printf("Enter Basic Salary: ");
    scanf("%f", &basic);

    printf("Enter HRA: ");
    scanf("%f", &hra);

    printf("Enter DA: ");
    scanf("%f", &da);

    printf("Enter Other Allowances: ");
    scanf("%f", &allowances);

    printf("Enter Deductions: ");
    scanf("%f", &deductions);

    gross_salary = basic + hra + da + allowances;
    net_salary = gross_salary - deductions;

    printf("\n===== EMPLOYEE PAYSLIP =====\n");
    printf("Employee ID      : %d\n", emp_id);
    printf("Employee Name    : %s\n", emp_name);
    printf("Basic Salary     : %.2f\n", basic);
    printf("HRA             : %.2f\n", hra);
    printf("DA              : %.2f\n", da);
    printf("Other Allowances : %.2f\n", allowances);
    printf("Gross Salary     : %.2f\n", gross_salary);
    printf("Deductions      : %.2f\n", deductions);
    printf("Net Salary      : %.2f\n", net_salary);

    return 0;
}