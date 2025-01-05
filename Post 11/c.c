#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "UserDefinedException";
    printf("\nOriginal string: %s\n", str);
    printf("\nReversed string: ");
    for (int i = strlen(str) - 1; i >= 0; i--)
        printf("%c", str[i]);
    
    return 0;
}
