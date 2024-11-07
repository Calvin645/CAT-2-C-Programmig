// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

// defines members of the structure

struct employee {
    char name[25];
    int id;
    char department[20];
    float salary;
    char email[50];
}; struct employee em1;

int main() {
    strcpy(em1.name, "John Doe");
     em1.id = 12345;
    strcpy(em1.department, "Human Resources");
     em1.salary = 55000.50;
    strcpy(em1.email, "john.doe2company.com");
    

    // field values
    printf("Name: %s\n", em1.name);
    printf("ID: %d\n", em1.id);
    printf("Department: %s\n", em1.department);
    printf("Salary: %.2f\n", em1.salary);
    printf("Email: %s\n", em1.email);

    return 0;
}
