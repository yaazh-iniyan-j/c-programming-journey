#include <stdio.h>

int main()
{
int a=1329, b, c, d;


//Part1:Test Data
printf("Test Data\n");
printf("No of Days = %d\n", a);
printf("\n");

printf("Test Output\n");
printf("\n");

b=a/365;
printf("Years = %d\n", b);

c=a%365/7;
printf("Weeks = %d\n", c);

d=a%365%7;
printf("Days  = %d\n", d);
printf("\n");


//Part 2: Input from User
int e, f, g, h ;
printf("Input From User\n");
printf("\n");

printf("Enter days to find no of years, weeks and days in it : ");
scanf("%d",&e );
printf("\n");

f=e/365;
printf("Years = %d\n", f);

g=e%365/7;
printf("Weeks = %d\n", g);

h=e%365%7;
printf("Days  = %d\n", h);
printf("\n");


return 0;
}
