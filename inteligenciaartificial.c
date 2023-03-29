#include <stdio.h>

int main(){

    char nome[50];
    char resposta[3];

    printf("Digite seu nome: \n");
    scanf("%[^\n]", nome);
    
    printf("Olá %s, tudo bem? \n", nome);
    scanf("%s", resposta);
    
    //printf("Resposta: %s", resposta);
    
    if((strcmp(resposta, "Sim") == 0) || (strcmp(resposta, "sim") == 0)){
        printf("Que bom que está bem! \n");
    }else if((strcmp(resposta, "Não") == 0) || (strcmp(resposta, "não") == 0) || (strcmp(resposta, "nao") == 0) ){
        printf("Que pena, o que posso ajudar? \n");
    }else{
        printf("Ops, não entendi!");
    }

    return 0;
}
