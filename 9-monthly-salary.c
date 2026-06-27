#include <stdio.h>

int main()

{
int a, b, c, d, e, f;

printf("Calculate Monthly Salary of the Employee:\n");
printf("\n");

printf("INPUT\n");
printf("\n");

printf("Input the Employees ID(Max. 10 chars)  : ");
scanf("%d", &a);

printf("Input the working hrs                  : ");
scanf("%d", &b);

printf("Input the Salary received per hour     : ");
scanf("%d", &c);
printf("\n");

printf("OUTPUT\n");
printf("\n");

printf("Employees ID : %d\n", a);

d=b*c;
printf("Salary(Without tax deduction) : US$%d\n", d);
printf("Tax Deduction                 : 10%%\n");

e=(d*10)/100;
f=d-e;
printf("Final Salary(Payable)         : US$%d\n", f);
printf("\n");

return 0;
}
