#include <stdio.h>

int main() {
    float num1, num2, result;

    // User se input lena
    printf("Pehla number dalein: ");
    scanf("%f", &num1);

    printf("Dusra number dalein: ");
    scanf("%f", &num2);

    // 0 se divide hone se rokne ke liye check karein
    if (num2 == 0) {
        printf("Error! 0 se bhag nahi diya ja sakta.\n");
    } else {
        result = num1 / num2;
        printf("Result = %.2f\n", result);
    }
    return 0;
}