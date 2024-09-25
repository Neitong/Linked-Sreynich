#include <stdio.h>
#include <string.h>
int main()
{
    //Output
    //output();

    //Input
    //input();
    multiDimensionArray();
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

//Declaration
void singleArrayDeclaration()
{
    int arr[5] = {1, 2, 3, 4, 5};
    printf("Array elements: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
}

//Assignment array declaration
void assignmentArray()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Array elements: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
}

//Multiple assignment array declaration
void multiDimensionArray()
{
    //calculation of matrix by user input
    
    int matrix[3][3];
    printf("Enter elements of the matrix (3x3): \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
        printf("\n");
        printf("Row %d: ", i + 1);
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\nMatrix elements: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

}