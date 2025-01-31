#include <stdio.h>
#include <math.h>

double division(double, double);
double modulus(int, int);
void print_menu();

int main() {
    int choice;
    double first, second, result; 

    while (1) { 
        print_menu();
        scanf("%d", &choice); 
        
        if (choice == 7) {
            printf("\nExiting the Calculator. Goodbye!\n");
            break;
        }
        
        if (choice < 1 || choice > 7)
        {
            fprintf(stderr, "Invalid Menu Choice.");
            continue;
        }
        

        if (choice >= 1 && choice <= 6) {
            printf("\nPlease enter the first number: ");
            scanf("%lf", &first);
            printf("Please enter the second number: ");
            scanf("%lf", &second);
        }

        switch (choice) {
            case 1:   // Addition
                result = first + second;
                break;
            case 2:   // Subtraction
                result = first - second;
                break;
            case 3:   // Multiplication
                result = first * second;
                break;
            case 4:   // Division
                result = division(first, second);
                break;
            case 5:   // Modulus
                result = modulus((int)first, (int)second); // Cast to int before calling modulus
                break;
            case 6:   // Power
                result = pow(first, second);
                break;
        }
            if (isnan(result))
            {
                printf("\nResult of operation: %.2f\n", result);
            }
    };
    
    return 0;
}

double division(double a, double b) {
    if (b == 0) {
        fprintf(stderr, "\nError: Division by zero is not allowed.\n");
        return NAN;
    } else {
        return a / b;
    }
}

double modulus(int a, int b) {
    if (b == 0) {
        fprintf(stderr, "\nError: Modulus by zero is not allowed.\n");
        return 0;  // Change to -1 if needed
    } else {
        return a % b;
    }
}

void print_menu() {
    printf("\n-------------------------------------");
    printf("\nWelcome to the Simple Calculator\n");
    printf("\nChoose one of the following options:");
    printf("\n 1. Addition");
    printf("\n 2. Subtraction");
    printf("\n 3. Multiplication");
    printf("\n 4. Division");
    printf("\n 5. Modulus");
    printf("\n 6. Power");
    printf("\n 7. Exit");
    printf("\nEnter your choice: ");
}
