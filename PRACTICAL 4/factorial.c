//ARSH KAMAL
//10279 1D 
#include <stdio.h> 
 
int main() { 
    int n = 5, fact = 1; 
    do { 
        fact *= n; 
        n--; 
    } while(n > 0); 
    printf("Factorial: %d", fact); 
    return 0; 
}