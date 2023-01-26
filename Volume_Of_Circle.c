#include<stdio.h>
int main()
{
    float r, v;
    printf("Enter radius \n");
    scanf("%f", &r);
    v = r*r*r * 22/7 * 4/3;
    printf("The volume of circle is %f", v);
    return 0;
}