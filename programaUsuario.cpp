# include <iostream>

int main(){

    // variaveis 
    std::string nome;
    int n1;


    // codificação

    // nome
    printf(" Digite seu nome: ");

    scanf("%s", nome.c_str());

    printf("seu nome : %s\n", nome.c_str());

    // idade 

    printf(" Digite sua idade: ");

    scanf("%d", &n1);

    printf("Sua idade: %d\n ", n1);
    
    printf("Olá: %s", nome.c_str());

    return 0;
}