#include <stdio.h>

int main(){
    int numeronormal = 2147483647; // Este volor excede o limite de um int normal
    long double numerGrande = 2147483647;

    printf("Numero regular: %d\n" , numeronormal);
    printf("Numero grande: %2lld\n" , numerGrande);


    return 0;


}