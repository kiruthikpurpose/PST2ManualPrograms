#include <stdio.h>

int main() {
    int custID;
    char name[50];
    float unit, charge, surcharge, totalBill;

    printf("Enter customer ID: ");
    scanf("%d", &custID);
    printf("Enter customer name: ");
    scanf("%s", name);
    printf("Enter units consumed: ");
    scanf("%f", &unit);
    printf("\n\n");

    if (unit <= 199) {
        charge = unit * 1.20;
    }
    else if (unit >= 200 && unit < 400) {
        charge = unit * 1.50;
    }
    else if (unit >= 400 && unit < 600) {
        charge = unit * 1.80;
    }
    else {
        charge = unit * 2.00;
    }
    if (charge > 400) {
        surcharge = charge * 0.15;
        totalBill = charge + surcharge;
    }
    else {
        totalBill = charge;
    }

    if (totalBill < 100) {
        totalBill = 100;
    }
    printf("Customer ID: %d\n", custID);
    printf("Customer Name: %s\n", name);
    printf("Bill Amount: Rs. %.2f\n", totalBill);
    return 0;
}
