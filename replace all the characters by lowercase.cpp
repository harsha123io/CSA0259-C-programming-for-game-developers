#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[100];
    int i;
    
    printf("Enter a string: ");
    fgets(str, 100, stdin);  
    
    for (i = 0; i < strlen(str); i++) {
        str[i] = tolower(str[i]);  
    }
    
    printf("The lowercase string is: %s", str);
    
    return 0;
}

