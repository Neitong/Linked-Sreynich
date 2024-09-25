#include <stdio.h>
#include <string.h>
int main()
{
    //Output
    //output();

    //Input
    input();
    return 0;
}

//Output
void output()
{
    printf("Hello World!");
}
//Input
void input()
{
    char nameStuff[20];
    printf("Enter your name: ");
    fgets(nameStuff, 20, stdin);
    printf("Your name is %s", nameStuff);
}

//Condition
void condition()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("The number is even.");
    }
    else
    {
        printf("The number is odd.");
    }
}


