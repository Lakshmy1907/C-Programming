#include<stdio.h>

// Function to calculate exponent
int exponent(int n1, int n2) {
    if (n2 == 0) {
        return 1;
    } else {
        return n1 * exponent(n1, n2 - 1);
    }
}

int main() {
    int n1, n2;
    printf("Enter the number: ");
    scanf("%d", &n1);
    printf("Enter the power: ");
    scanf("%d", &n2);
    
    
    int result = exponent(n1, n2);
    
    // Print the result
    printf("Result: %d\n", result);
    return 0;
}

