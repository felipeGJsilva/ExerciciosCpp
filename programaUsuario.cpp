# include <iostream>

int main(){
    // variaveis 
    char nome[100];
    int n1;
    // nome
    printf(" Digite seu nome: ");
    scanf("%s", nome);
    printf("seu nome : %s \n", nome);
    // idade 
    printf(" Digite sua idade: ");
    scanf("%d", &n1);
    printf("Sua idade: %d\n ", n1);
    printf("Olá: %d você tem %s anos",n1, nome);

    return 0;
}