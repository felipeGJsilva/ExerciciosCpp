# include <iostream>

int main(){
    int c = 5;
    bool resultado = (c>3 && c<10);

    printf("Resultado concluido %d\n", resultado );

    int st = 7;
    int se = 6;

    bool resultado2 =(st == 10 || 6<8 ) ;
    
    printf("Resultado concluido %d\n", resultado2);

    int n1 = 15; 
    int n2 = 20;
    int soma = n1 + n2; 

    printf(" Soma %d + %d = %d\n", n1, n2, soma);

    int n3 = 7;
    int n4 = 15;
    int sub2 = n4 - n3;

    printf("Subtração: %d - %d = %d\n",n4 ,n3, sub2);

    int n5 = 5;
    int n6 = 6;
    int mult = 5 * 6;

    printf("Multiplicação: %d * %d =%d\n",n5,n6, mult);
    
    int n7 = 20;
    int n8 = 4;
    int div = n7 / n8;

    printf("Divisão: %d / %d = %d\n",n7,n8, div);

    int n9 = 8;
    int n10 = 9;
    int soma3 = n9 + n10;
    bool result2 = ( soma3 != 17);

    return false;
}