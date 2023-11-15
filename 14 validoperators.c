#include <stdio.h>
#include <string.h>

int isOperator(char c) {
	int i;
    char operators[] = "+-*/%=";
    for ( i = 0; i < strlen(operators); i++) {
        if (c == operators[i]) {
            return 1; 
        }
    }
    return 0; 
}

int main() {
	int i,j=1;
    char input[100];
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);
    for ( i = 0; i < strlen(input); i++) {
        if (isOperator(input[i])) 
        	printf("valide");
        else
        	printf("not valide");
        	break;
    }

    printf("\n");
    return 0;
}
