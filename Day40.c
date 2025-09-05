#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student
{
    char name[50];
    int rollNumber;
    float marks;
    struct student *next;
} student;

typedef struct sms
{
    student *head;
    student *curr;
} sms;

void initializeSystem(sms *system)
{
    system->head == NULL;
    system->curr == NULL;
}

int isEmpty(sms *system)
{
    if (system->head == NULL)
    {
        return 1;
    }
    return 0;
}

void addStudent(char name[], int rollNumber, float marks, sms *system)
{
    student *newStudent;
    newStudent = (student *)malloc(sizeof(student));
    strcpy(newStudent->name, name);
    newStudent->rollNumber = rollNumber;
    newStudent->marks = marks;

    int checkSystem = isEmpty(system);
    if (checkSystem == 1)
    {
        system->head = newStudent;
        system->curr = newStudent;
    }
    else
    {
        system->curr->next = newStudent;
        system->curr = newStudent;
    }
}



int main()
{
    sms *system = (sms *)malloc(sizeof(sms));
    initializeSystem(system);

    int choice;
    do
    {
        printf("========== Student Management System ==========\n1. Add a new student\n2. View all students\n3. Display a student's details\n4. Update a student's detail\n5. Delete a student's details\n6. Exit\n===============================================\nEnter your choice:");
        scanf("%d", &choice);

        if (choice == 1)
        {
            char name[50];
            int rollNumber;
            float marks;

            printf("Enter the name of the student.\n");
            scanf("%s",name);
            printf("Enter the roll number of the student.\n");
            scanf("%d",&rollNumber);
            printf("Enter the marks of the student.\n");
            scanf("%f",&marks);
            
            addStudent(name, rollNumber, marks, system);
        }

    } while (choice == 1 || choice == 2 || choice == 3 || choice == 4 || choice == 5);
    
    if (choice == 6)
    {
        printf("THANKS FOR USING THE PROGRAM!.\n");
    }

    return 0;
}

