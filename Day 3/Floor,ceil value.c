#include<stdio.h>
#include<math.h>
int main()
{
    float number, floorvalue, ceilingvalue;
    printf("enter a number");
    scanf("%f",&number);
    floorvalue=floor(number);
    ceilingvalue=ceil(number);
    printf("The floorvlue is: %2f", floorvalue);
    printf("The ceilvalue is: %2f", ceilingvalue);
}