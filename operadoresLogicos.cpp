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
    int soma2 = n4 - n3;

    printf("Soma: %d - %d = %d\n",n4 ,n3, soma2);

    
    return false;
}