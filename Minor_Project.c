#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Student
{

    char name[50];
    float marks;
    int rollNumber;
    struct Student *next;

} Student;

typedef struct SMS
{

    struct Student *head;
    struct Student *curr;

} SMS;

void intializeSystem(SMS *system)
{

    system->curr = NULL;
    system->head = NULL;
}

Student *addNode(char name[], float marks, int rollNumber)
{
    Student *newStudent = (Student *)malloc(sizeof(Student));
    newStudent->marks = marks;
    strcpy(newStudent->name, name);
    newStudent->rollNumber = rollNumber;

    newStudent->next = NULL;
    return newStudent;
}

int isEmpty(SMS *system)
{

    return system->head == NULL;
}

void addStudent(char name[], float marks, int rollNumber, SMS *system)
{

    Student *newStudent = addNode(name, marks, rollNumber);

    if (isEmpty(system))
    {
        system->head = newStudent;
        system->curr = newStudent;
    }
    else
    {
        system->curr->next = newStudent;
        system->curr = newStudent;
    }
    printf("Student %s added successfully !!\n", name);
}

void displayDetails(Student *s)
{
    printf("Name: %s\n", s->name);
    printf("Roll Number:%d\n", s->rollNumber);
    printf("Marks: %0.2f\n", s->marks);
}
void search(int rollNumber, SMS *system)
{

    Student *s = system->head;

    while (s != NULL)
    {

        if (s->rollNumber == rollNumber)
        {
            displayDetails(s);
            return;
        }
        s = s->next;
    }
    printf("There is no student found with %d Roll Number\n", rollNumber);
}
int exists(int rollNumber, SMS *system)
{

    Student *s = system->head;

    while (s != NULL)
    {

        if (s->rollNumber == rollNumber)
        {
            
            return 1;
        }
        s = s->next;
    }
    printf("There is no student found with %d Roll Number\n", rollNumber);
    return 0;
}
void displayAll(SMS *system)
{
    Student *s = system->head;

    while (s != NULL)
    {

        displayDetails(s);
        printf("\n");

        s = s->next;
    }
}

void update(int rollNumber, SMS *system)
{

    Student *s = system->head;

    while (s != NULL)
    {

        if (s->rollNumber == rollNumber)
        {
            displayDetails(s);
            return;
        }
        s = s->next;
    }
    printf("There is no student found with %d Roll Number\n", rollNumber);
}

int main()
{

    int exit = 0;

    SMS *system = (SMS *)malloc(sizeof(SMS));
    intializeSystem(system);

    do
    {
        printf("============ STUDENT MANAGEMENT SYSTEM ==============\n");
        printf("1. Add a Student\n");
        printf("2. View all Students\n");
        printf("3. Display Student Details\n");
        printf("4. Update Student Details\n");
        printf("5. Delete Student Details\n");
        printf("6. Exit\n");

        int choice;
        scanf("%d", &choice);

        if (choice == 1)
        {
            // Add a Student;
            char name[50];
            int rollNumber;
            float marks;
            printf("Enter the name of the new Student\n");
            scanf("%s", name);

            if (strcmp(name, ".") == 0)
            {

                // Error handling

                printf("Wrong Option. Please select again\n");
                continue;
                ;
            }

            printf("Enter the roll Number of the new Student\n");
            scanf("%d", &rollNumber);

            printf("Enter the marks of the new Student\n");
            scanf("%f", &marks);

            addStudent(name, marks, rollNumber, system);
        }
        else if (choice == 2)
        {
            displayAll(system);
        }
        else if (choice == 3)
        {
            int rollNumber;
            printf("Enter the Roll Number of the Student\n");
            scanf("%d", &rollNumber);

            search(rollNumber, system);
        }
        else if (choice == 4)
        {   
            char name[50];
            int rollNumber;
            int marks;
            printf("Enter the Roll Number of the Student for the updation\n");
            scanf("%d", &rollNumber);

            if(!exits(system,rollNumber)){
                continue;
            }

            // Do you want to update the Roll Number?
            // Yes/No
            // Yes-> New roll number input
            // No Next Question proceed

            printf("Do you want to update the Roll Number?\n Yes \nNo");
            char ch[5];
            scanf("%s", ch);

            if (strcmp(ch, "Yes") == 0)
            {
                printf("Enter the New Roll Number of the Student\n");
                scanf("%d", &rollNumber);
            }

            printf("Do you want to update the Name?\n Yes \nNo");
            char ch[5];
            scanf("%s", ch);

            if (strcmp(ch, "Yes") == 0)
            {
                printf("Enter the New Name of the Student\n");
                scanf("%s", name);
            }

             printf("Do you want to update the Marks of the Student?\n Yes \nNo");
            char ch[5];
            scanf("%s", ch);

            if (strcmp(ch, "Yes") == 0)
            {
                printf("Enter the New Marks of the Student\n");
                scanf("%d", &marks);
            }

            update(rollNumber,name,marks, system);
        }
        else if (choice == 5)
        {
        }
        else if (choice == 6)
        {
            exit = 1;
            printf("Thanks for using the app. See you again\n");
        }
        else
        {
            // Error handling

            printf("Wrong Option. Please select again\n");
        }

    } while (exit == 0);
}