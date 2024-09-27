#include <stdio.h>

// Define person structure
struct person
{
    int yearOfBirth;
    int monthOfBirth;
    int dayOfBirth;
};

// Prototype
int calculateAge(struct person p);

int main()
{
    // Declare two persons
    struct person person1, person2;

    // Get the first person's date of birth
    printf("Enter the first person's date of birth (year/month/day): ");
    scanf("%d/%d/%d", &person1.yearOfBirth, &person1.monthOfBirth, &person1.dayOfBirth);

    // Get the second person's date of birth
    printf("Enter the second person's date of birth (year/month/day): ");
    scanf("%d/%d/%d", &person2.yearOfBirth, &person2.monthOfBirth, &person2.dayOfBirth);

    // Calculate ages
    int age1 = calculateAge(person1);
    int age2 = calculateAge(person2);

    // Compare the ages and determine who is younger
    if (age1 < age2)
    {
        printf("The first person is the youngest.\n");
    }
    else if (age1 > age2)
    {
        printf("The second person is the youngest.\n");
    }
    else
    {
        printf("Both persons have the same age.\n");
    }

    return 0;
}

// Function to calculate the "age" in days from year, month, and day
int calculateAge(struct person p)
{
    // Assuming all months have 30 days and all years have 365 days
    int ageInDays = p.yearOfBirth * 365 + p.monthOfBirth * 30 + p.dayOfBirth;

    return ageInDays;
}
