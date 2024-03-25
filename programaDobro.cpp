#include <iostream>

int main(){
    int n1;
    
    printf("Digite o numero: ");
    scanf("%d", &n1);

    int dobro = 2;
    int result = n1 * dobro ;
    
    printf("Multiplicação: %d * %d = %d\n", n1, dobro, result);

    return false;
}