#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    char designation[50];
    char department[50];
    float salary;
};

int main() {
    int n;
    scanf("%d", &n);
    struct Employee emp[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &emp[i].id);
        getchar(); // consume newline after ID

        // use fgets to read multi-word strings
        fgets(emp[i].name, sizeof(emp[i].name), stdin);
        fgets(emp[i].designation, sizeof(emp[i].designation), stdin);
        fgets(emp[i].department, sizeof(emp[i].department), stdin);
        scanf("%f", &emp[i].salary);
        getchar(); // consume newline after salary

        // remove trailing '\n' from fgets
        for (int k = 0; emp[i].name[k]; k++)
            if (emp[i].name[k] == '\n') emp[i].name[k] = '\0';
        for (int k = 0; emp[i].designation[k]; k++)
            if (emp[i].designation[k] == '\n') emp[i].designation[k] = '\0';
        for (int k = 0; emp[i].department[k]; k++)
            if (emp[i].department[k] == '\n') emp[i].department[k] = '\0';
    }

    printf("Employee Details:\n");
    printf("---------------------------------\n");

    for (int i = 0; i < n; i++) {
        printf("Employee-Id : %d\n", emp[i].id);
        printf("Name        : %s\n", emp[i].name);
        printf("Designation : %s\n", emp[i].designation);
        printf("Department  : %s\n", emp[i].department);
        printf("Salary      : %.0f\n", emp[i].salary);
        if (i != n - 1)
            printf("\n");
    }

    return 0;
}
