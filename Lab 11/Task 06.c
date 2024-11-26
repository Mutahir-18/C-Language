Define a structure Employee with fields name, id, salary, and a nested structure Address
(fields: city and zip_code). Write a program to input details for multiple employees,
store them in a file, and read them back to display.

#include <stdio.h>
typedef struct Address {
    char city[50];
    int zip_code;
} Address;

typedef struct Employee {
    char name[50];
    int id;
    float salary;
    Address address;
} Employee;

void write(Employee employees, int count) {
    FILE *file = fopen("employees.dat", "wb");
    if (file == NULL) {
        printf("Error");
        return;
    }

    for (int i = 0; i < count; i++) {
        fwrite(&employees[i], sizeof(Employee), 1, file);
    }

    fclose(file);
}

void read() {
    FILE *file = fopen("employees.dat", "rb");
    if (file == NULL) {
        printf("Error");
        return;
    }

    Employee employee;
    printf("--- Employee Details ---\n");
    while (fread(&employee, sizeof(Employee), 1, file)) {
        printf("Name: %s\n", employee.name);
        printf("ID: %d\n", employee.id);
        printf("Salary: %.2f\n", employee.salary);
        printf("City: %s\n", employee.address.city);
        printf("Zip Code: %d\n", employee.address.zip_code);
    }

    fclose(file);
}

int main() {
    int n;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    Employee employees[n];

    for (int i = 0; i < n; i++) {
        printf("Enter details for Employee %d:\n", i + 1);

        printf("Name: ");
        scanf(" %s",employee[i].name);

        printf("ID: ");
        scanf("%d", &employees[i].id);

        printf("Salary: ");
        scanf("%f", &employees[i].salary);

        printf("City: ");
        scanf(" %s",employees[i].address.city);

        printf("Zip Code: ");
        scanf("%d", &employees[i].address.zip_code);
    }

    write(employees, n);
    read();

    return 0;
}
