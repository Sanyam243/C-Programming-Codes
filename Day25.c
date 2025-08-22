#include <stdio.h>
#include <stdlib.h> // Required for malloc and free
#include <string.h>

struct Person {
    int age;
    int salary;
    char gender;
    char name[50];
};

int main() {
    struct Person* sanyam;
    
    // Allocate memory for one Person structure
    sanyam = (struct Person*)malloc(sizeof(struct Person));
    
    // Check if allocation was successful
    if (sanyam == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    
    // Now you can safely access the members
    sanyam->age = 5;
    sanyam->salary = 50000;
    sanyam->gender = 'M';
    strcpy(sanyam->name, "Sanyam");
    
    printf("Age: %d\n", sanyam->age);
    printf("Salary: %d\n", sanyam->salary);
    printf("Gender: %c\n", sanyam->gender);
    printf("Name: %s\n", sanyam->name);
    
    // Free the allocated memory when done
    free(sanyam);
    
    return 0;
}