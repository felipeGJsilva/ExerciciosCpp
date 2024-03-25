# include <iostream>

int main(){

    // variaveis 
    std::string nome;
    int numero;


    // codificação

    // nome
    printf(" Digite seu nome: ");

    scanf("%s", nome.c_str());

    printf("seu nome : %s\n", nome.c_str());

    // idade 

    printf(" Digite sua idade: ");

    scanf("%d", numero);

    printf("Sua idade: %d\n ");
    
    printf("Olá: %s", nome.c_str(), "você tem %d", numero, "anos");
    return 0;
}