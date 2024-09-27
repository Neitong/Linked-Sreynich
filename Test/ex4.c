#include <stdio.h>
#include <string.h>

// Defining the structures to represent the data

struct Lecturer {
    int lecturer_id;
    char first_name[50];
    char last_name[50];
};

struct Course {
    char course[50];
    int lecturer_id;
    char country[50];
};

// Array of lecturers
struct Lecturer lecturers[] = {
    {30, "Him", "Hey"},
    {31, "Ronan", "Ogor"},
    {32, "Gran", "Sabandal"},
    {33, "Christian", "Mediola"}
};

// Array of courses
struct Course courses[] = {
    {"java", 32, "Philippines"},
    {"java", 33, "Philippines"},
    {"html", 30, "Cambodia"},
    {"java", 31, "Cambodia"}
};

int main() {
    int num_lecturers = sizeof(lecturers) / sizeof(lecturers[0]);
    int num_courses = sizeof(courses) / sizeof(courses[0]);

    // Task 1: Print the lecturers who teach java in Philippines
    printf("Lecturers teaching java in Philippines:\n");
    for (int i = 0; i < num_lecturers; i++) 
    {
        int lecturer_id = lecturers[i].lecturer_id;
        char *first_name = lecturers[i].first_name;
        char *last_name = lecturers[i].last_name;

        for (int j = 0; j < num_courses; j++)
        {
            if (courses[j].lecturer_id == lecturer_id &&
                strcmp(courses[j].course, "java") == 0 &&
                strcmp(courses[j].country, "Philippines") == 0)
            {
                printf("%s " , first_name);
            }
        }
    }

    
    return 0;
}
