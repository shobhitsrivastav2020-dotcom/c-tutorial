#include <stdio.h>

int main() {
    int num1, num2, product;

    // User se do numbers input lena
    printf("Pehla number dalein: ");
    scanf("%d", &num1);

    printf("Dusra number dalein: ");
    scanf("%d", &num2);

    // Multiplication calculate karna
    product = num1 * num2;

    // Result print karna
    printf("Product = %d\n", product);

    return 0;
}