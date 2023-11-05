#include <stdio.h>
int main()
{
    float  n1, n2, n3, n4;
    //peso 2, 3, 4, 1
    scanf("%f%f%f%f", &n1, &n2, &n3, &n4);
    float nota1, nota2, nota3;
    nota1 = n1*2;
    nota2 = n2*3;
    nota3 = n3*4;

    float media = (nota1 + nota2 + nota3 + n4)/10;
    printf("Media: %f\n",  media);
    if(media>5){
        printf("Aluno aprovado\n");

    }else if(media<5){
        printf("Aluno reprovado\n");
    }

    return 0;
}
