#include <stdio.h>
int main()
{
    int N; // codigo do DDD
    scanf("%d", &N); //leitura do DDD através do usuário 

    // verificação a que cidade o DDD pertence e a impressao da mesma   

    if ( N == 11){
        printf("Sao Paulo\n");
    }
    else if ( N == 19 ){
        printf("Campinas\n");
    }
    else if ( N == 21 ){
        printf("Rio de Janeiro\n");
    }
    else if ( N == 27){
        printf("Vitoria\n");
    }
    else if ( N == 31){
        printf("Belo Horizonte\n");
    }
    else if ( N == 32){
        printf("Juiz de Fora\n");
    }
    else if ( N == 61){
        printf("Brasilia\n");
    }
    else if ( N == 71){
        printf("Salvador\n");
    }
    else{
        printf("DDD nao cadastrado\n"); // caso o DDD digitado nao esteja na tabela, execute essa mensagem
    }
    return 0;
}