//ARSH KAMAL 
//10279 1D
#include <stdio.h>

int main() {
    int i, j;
    char ch;

    for (i = 1; i <= 4; i++) {
        for (j = 0; j < i; j++) {
            ch = 'A' + j;   
            printf("%c", ch);
        }
        printf("\n"); 
    }

    return 0;
}