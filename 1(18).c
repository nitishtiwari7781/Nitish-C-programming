#include<stdio.h>
void main()

{
    float area, perimeter,length, b;
    printf("Enter Length and b:");
    scanf("%f %f", &length, &b);

    area=length*b;
    perimeter=(length+b)*2;

    printf("Area: %f\n", area);
    printf("Perimeter: %f\n", perimeter);


}
