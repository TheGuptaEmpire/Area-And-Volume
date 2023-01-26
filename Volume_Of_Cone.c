#include <stdio.h>
int main()
{
    float r, h;
    printf("Enter radius \n");
    scanf("%f", &r);

    printf("Enter height \n");
    scanf("%f", &h);

    float v;
    v = r * r * h / 3 * 22 / 7;

    printf("The volume of cone is %f", v);

    return 0;
}