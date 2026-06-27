#include <stdio.h>

int main()
{
    int a, b, c, d, e, i;
    float f, g, h;

    printf("CALCULATE YOUR ELECTRICITY CHARGES HERE:\n");
    printf("_______________________________________________________________________________\n");
    printf("\n");

    printf("This is based on newly introduced subsidies.\n");
    printf("SCHEME valid form: 10 05 2026\n");
    printf("_______________________________________________________________________________\n");
    printf("\n");

    printf("ENTER THE DATE OF READING(DD MM YYYY) : ");
    scanf("%d %d %d", &a, &b, &c);

    printf("ENTER  THE  TOTAL  UNITS  CONSUMED    : ");
    scanf("%d", &d);
    printf("_______________________________________________________________________________\n");
    printf("\n");

    g = (((b * 31.0) + a) - 164.0) * 1.66;
    h = (100.0 - g) * 2.35;

    e = d - 200;
    f = e * 4.7;

    i = (int)(f + h);

    printf("\n");
    printf("TOTAL BILL : Rs.%d\n", i);
    printf("_______________________________________________________________________________\n");

    return 0;
}
