#include <stdio.h>
int main (){
    
    char tipo[20], classe[20], alimentacao[20];
    scanf("%s%s%s", &tipo, &classe, &alimentacao);


    if ( tipo[0] == 'v'){
      //verificaçaod dos vertebrados
        if(classe[0] == 'a'){
            if(alimentacao[0] == 'c') 
            printf("aguia\n");
            else printf("pomba\n");
        } else{
            if(alimentacao[0] == 'o') printf("homem\n");
            else printf("vaca\n");
        } 

        // verificação dos invertebrados
    }else{
        if (classe[0] == 'i'){
            if( alimentacao[2] == 'm') printf("pulga\n");
            else printf("lagarta\n");
        }else {
            if ( alimentacao [0] == 'h') printf("sanguessuga\n");
            else printf("minhoca\n");
        }
    }

    return 0;
}
        

    