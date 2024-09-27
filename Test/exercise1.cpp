#include <stdio.h>

int main()
{
    //We want to know if a given number if in a given range.
    int number;
    int rangeMin;
    int rangeMax;

    //Input the number, the range min and the range max  
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("Enter the range minimum: ");
    scanf("%d", &rangeMin);
    printf("Enter the range maximum: ");
    scanf("%d", &rangeMax);

    //Output "inside" if the number is in the range [min, max], "outside" otherwise 
    if (number >= rangeMin && number <= rangeMax) {
        printf("%d is inside the range [%d, %d].\n", number, rangeMin, rangeMax);
    } else {
        printf("%d is outside the range [%d, %d].\n", number, rangeMin, rangeMax);
    }

    return 0;
}

