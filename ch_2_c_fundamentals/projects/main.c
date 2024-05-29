#include <stdio.h>

/*
 * 1
 */

/*
int main() {
    printf("\t\b*\n");
    printf("\t\b\b*\n");
    printf("\t\b\b\b*\n");
    printf("*\t\b\b\b\b*\n");
    printf(" * *\n");
    printf("  *\n");

    return 0;
}
*/

/*
 * 2
 */

/*
#define PI 3.14159265
#define RADIUS 10
int main() {
    float v;

    v = 4.0f / 3.0f * (PI * (RADIUS * RADIUS * RADIUS));
    printf("%.2f\n", v);
    return 0;
}
*/

/*
 * 3
 */

/*
#define PI 3.14159265
int main() {
    float v, radius;

    printf("Input a radius: ");
    scanf("%f", &radius);
    v = 4.0f / 3.0f * (PI * (radius * radius * radius));
    printf("%.2f\n", v);
    return 0;
}
*/

/*
 * 4
 */

/*
#define TAX 0.05f
int main() {
    float amt, after_tax;

    printf("Enter an amount: ");
    scanf("%f", &amt);
    after_tax = amt * TAX;
    amt = amt + after_tax;
    printf("%.2f\n", amt);
    return 0;
}
*/

/*
 * 5
 */

/*
int main() {
    int x, polynomial;

    printf("Enter a value for x: ");
    scanf("%d", &x);
    
    polynomial = 3 * (x * x * x * x *x) + 2 * (x * x * x * x) - 5 * (x * x * x) - (x * x) + 7 * x - 6;
    printf("%d\n", polynomial);
    return 0;
}
*/

/*
 * 6
 */

/*
int main() {
    int x, result;

    printf("Enter a value for x: ");
    scanf("%d", &x);
    
    result = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;
    printf("%d\n", result);
    return 0;
}

*/

/*
 * 7
 */

/*
int main() {
    int amt, twenties, tens, fives, ones;

    twenties = tens = fives = ones = 0;
    
    printf("Enter a dollar amount: ");
    scanf("%d", &amt);

    twenties = amt / 20;
    amt = amt - twenties * 20;
    tens = amt / 10;
    amt = amt - tens * 10;
    fives = amt / 5;
    amt = amt - fives * 5;
    ones = amt / 1;
    amt = amt - ones * 1;
    printf("$20's: %d\n", twenties);
    printf("$10's: %d\n", tens);
    printf("$5's: %d\n", fives);
    printf("$1's: %d\n", ones);

    return 0;
}
*/

/*
 * 8
 */

int main() {
    float balance, loan_amt, interest_rate, monthly_interest_rate, monthly_payment;

    printf("Enter loan amount: ");
    scanf("%f", &loan_amt);
    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);
    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);

    monthly_interest_rate = (interest_rate * 0.01) / 12;
    balance = loan_amt * (1 + monthly_interest_rate) - monthly_payment;

    printf("Balance remaining after first payment: $%.2f\n", balance);
    loan_amt = balance;
    balance = loan_amt * (1 + monthly_interest_rate) - monthly_payment;
    printf("Balance remaining after second payment: $%.2f\n", balance);
    loan_amt = balance;
    balance = loan_amt * (1 + monthly_interest_rate) - monthly_payment;
    printf("Balance remaining after third payment: $%.2f\n", balance);
    return 0;
}



































