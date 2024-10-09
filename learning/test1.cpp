#include <iostream>
#include <string>

// Function declarations
void func();
int sumFunc();
bool gender(std::string genderForFemale);

int main()
{
    // Output
    // std::cout << "Hello, my name is Sreynich" << std::endl;
    // Input 
    // std::string name;
    // std::cout << "Enter your name: "; std::cin >> name;
    // Datatypes
    // bool real = true; 
    // bool fal = false;
    const int numberOfStudent = 100;

    int numberOfStaff = 50;

    const int count=10;
    for (int i =0; i < count; i++)
    {
        std::cout << count;
        count++;

    }
    // std::string genderForFemale;
    // std::cout << "Enter gender (F for female, M for male): "; 
    // std::cin >> genderForFemale;
    
    // if (gender(genderForFemale))
    // {
    //     std::cout << "Female" << std::endl;
    // }
    // else
    // {
    //     std::cout << "Male" << std::endl;
    // }
    
    return 0;
}

// Non-return function
void func()
{
    std::cout << "Hello world" << std::endl;
}

// Return function (sum)
int sumFunc()
{
    int a = 10;
    int b = 20;
    return a + b;
}

// Gender function that returns a boolean
bool gender(std::string genderForFemale)
{
    if (genderForFemale == "F")
    {
        return true; // Female
    }
    else if (genderForFemale == "M")
    {
        return false; // Male
    }
    else
    {
        std::cout << "Invalid input, assuming Male" << std::endl;
        return false; // Assume male for invalid input
    }
}
