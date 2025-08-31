#include <stdio.h>

int main() {
    double Q,V,C;

    // Ask user for input
    printf("Enter the charge (Coulombs): ");
    scanf("%lf", &Q);

    printf("Enter the voltage (Volts): ");
    scanf("%lf", &V);

    // Check to avoid division by zero
    if (V == 0) {
        printf("Voltage cannot be zero.\n");
        return 1;
    }

    // Calculate capacitance
    C = Q / V;

    // Print results
    printf("The capacitance is: %.2f Farads\n", C);
    result 0;
}