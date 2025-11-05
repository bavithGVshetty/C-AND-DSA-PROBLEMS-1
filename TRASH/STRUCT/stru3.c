#include <stdio.h>

#define COST_PER_UNIT 555.0

struct Household {
    int id;
    char owner[50];
    int units;
};

double calculate_total(struct Household h[], int n) {
    double total = 0.0;
    for (int i = 0; i < n; i++) {
        total += h[i].units * COST_PER_UNIT;
    }
    return total;
}

int main() {
    int n;
    scanf("%d", &n);
    struct Household h[n];

    for (int i = 0; i < n; i++) {
        scanf("%d %s %d", &h[i].id, h[i].owner, &h[i].units);
    }

    double total_bill = calculate_total(h, n);
    double average_bill = total_bill / n;

    printf("%.2f\n", total_bill);
    printf("%.2f", average_bill);

    return 0;
}
