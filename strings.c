#include<stdio.h>
#include<string.h>

int main(){

    //char valor = 'c';
    //char palavra[5] = {'c', 'a', 's', 'a'};
    //printf("%s", palavra);
    char user[20]; //= "Erick Yamamoto";// {'e', 'r', 'i', 'c', 'k'}
    char padrao[20] = "admin";
    printf("Usuario: ");
    //scanf("%s", nome); // Não aceita espaço, considera espaço como finalização
    fgets(user, 20, stdin);
    printf("%d e %d\n", strlen(user), strlen(padrao));

    printf("%d\n", strcmp(user, padrao));
    if(strcmp(user, padrao)){
        printf("Acesso Liberado!");
    }else{
        printf("Acesso Negado!");
    }


    return 0;
}