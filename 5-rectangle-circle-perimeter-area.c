#include <stdio.h>

int main()
{
int a=7, b=5, c, d;

printf("Height of rectangle    = %d inches\n", a);
printf("Width of rectangle     = %d inches\n", b);

c=2*(a+b);
printf("Perimeter of rectangle = %d inches\n", c);

d=a*b;
printf("Area of rectangle      = %d square inches\n", d);

printf("\n");

float e=6, f ,g ;

printf("Radius of circle    = %f inches\n", e);

f=2*3.14159*e;
printf("Perimeter of circle = %f inches\n", f);

g=3.14159*e*e;
printf("Area of circle      = %f square inches\n", g);

return 0;
}
