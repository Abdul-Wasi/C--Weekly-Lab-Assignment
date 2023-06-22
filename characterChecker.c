#include <stdio.h>
int main() {
    char input;
	printf("Enter a character: ");
    scanf("%c", &input);

    if (input >= 'A' && input <= 'Z') {
        printf("%c is an upper case letter.", input);
    } else if (input >= 'a' && input <= 'z'){
    	printf("%c is a small case letter", input);
	} else if (input >= '0' && input <= '9') {
        printf("%c is a number.", input);
    } else {
        printf("%c is a symbol.", input);
    }

    return 0;
}
