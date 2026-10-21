#include <stdio.h>

int main() {
    double revenue;
    double expenses;
    double balance;

    // 1. Display the system title
    printf("MUNICIPAL BUDGET CALCULATOR\n");
    printf("---------------------------\n");

    // 2 & 3. Prompt user and store total revenue and expenses using double[cite: 72, 79]
    printf("Enter total revenue: ");
    scanf("%lf", &revenue);

    printf("Enter total expenses: ");
    scanf("%lf", &expenses);

    // 4. Calculate the financial balance[cite: 79]
    balance = revenue - expenses;

    // 5 & 6. Display Revenue, Expenses, and Balance to two decimal places[cite: 79, 80]
    printf("\n---------------------------\n");
    printf("Revenue: %.2f\n", revenue);
    printf("Expenses: %.2f\n", expenses);
    printf("Balance: %.2f\n", balance);

    return 0;
}
