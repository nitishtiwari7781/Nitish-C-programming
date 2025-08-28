#include<stdio.h>
void main()

{
    int hours, minutes;
    printf("Enter time in minutes:");
    scanf("%d", &minutes);
    hours= minutes/60;
    printf("hours: %d\n", hours);

}
