#include <stdio.h>
#include <stdlib.h>

int tempCount = 1;

char generateTemp() {
    return 'T' + tempCount++;
}

void genThreeAddressCode(char op, char arg1, char arg2, char result) {
    printf("%c := %c %c %c\n", result, arg1, op, arg2);
}

int main() {
    char expr[100];
    printf("Enter an arithmetic expression: ");
    scanf("%s", expr);

    char result = generateTemp();

    // Assuming the input expression is a simple binary expression
    // For simplicity, not handling errors or complex expressions

    genThreeAddressCode(expr[1], expr[0], expr[2], result);

    printf("Three-Address Code:\n");
    printf("%s\n", expr);
    printf("%c := %c %c %c\n", result, expr[0], expr[1], expr[2]);

    return 0;
}
