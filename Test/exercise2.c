#include <stdio.h>

    struct person1
    {
        int yearOfBirth;
        int monthOfBirth;
        int dayOfBirth;
    };

    struct person2
    {
        int yearOfBirth;
        int monthOfBirth;
        int dayOfBirth;
    };

//prototype
    int calculateAge1();
    int calculateAge2();


int main()
{
    //We want to know among two persons which one is the youngest!

    //1. Enter the first person date of birth (year/month/day) 
    //2. Enter the second person date of birth (year/month/day) 
    //3. Depending on the 2 dates of birth, print either: 
        //The first person is the youngest
        //The second person is the youngest 
        //Both persons have the same age 

    struct person1 person1;
    struct person2 person2;
    
    printf("Enter the first person's date of birth (year/month/day): ");
    scanf("%d/%d/%d", &person1.yearOfBirth, &person1.monthOfBirth, &person1.dayOfBirth);
    
    printf("Enter the second person's date of birth (year/month/day): ");
    scanf("%d/%d/%d", &person2.yearOfBirth, &person2.monthOfBirth, &person2.dayOfBirth);
    
    int getAge1 = calculateAge1();
    int getAge2 = calculateAge2();
    
    if( calculateAge1() < calculateAge2() )
    {
        printf("The first person is the youngest.\n");
    }
    else if(calculateAge1() > calculateAge2())
    {
        printf("The second person is the youngest.\n");
    }


    return 0;
}

int calculateAge1()
{
    struct person1 person1;

    // Calculate the age of the first person
    int age1 = person1.dayOfBirth + person1.monthOfBirth * 30 + person1.yearOfBirth * 365;

    return age1;
 
}

int calculateAge2()
{
    struct person2 person2;
    
    // Calculate the age of the second person
    int age2 = person2.dayOfBirth  + person2.monthOfBirth * 30 + person2.yearOfBirth * 365;
    
    return age2;
}


    
    