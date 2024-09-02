#include <stdio.h>
#include <stdlib.h>
#define MAX_NOME 100

   typedef struct {
    char nome[MAX_NOME];
    float nota1;
    float nota2;
    float media;
} Estudante;

int main(){
    int num_estudantes;
    printf("Quantos estudantes serao cadastrados ? ");
    scanf("%d",&num_estudantes);
    printf("%d alunos",num_estudantes);

    Estudante estudantes[num_estudantes];

    for (int i = 0; i < num_estudantes ;i++){
        printf("\n Cadastro do estudante %d\n",i + 1 );

        printf("nome do estudante : ");
        scanf("%s",estudantes[i].nome); 

        printf(" Primeira nota : \n");
        scanf("%f", &estudantes[i].nota1);

        printf(" Segunda nota : \n");
        scanf("%f" ,&estudantes[i].nota2);

    }
    
    system("cls");

    for (int i = 0; i < num_estudantes; i++){
        printf("Estudante %d : %s \n",i + 1 ,estudantes[i].nome);
        printf("Primeira nota : %.2f\n",estudantes[i].nota1);
        printf("Segunda nota : %.2f\n",estudantes[i].nota2);
        float media = (estudantes[i].nota1 + estudantes[i].nota2)/2 ;
        printf("Media : %.2f\n",media);
        if (media >= 7){
            printf("APROVADO\n");
        } else {
            printf("REPROVADO\n");
        }
    }
    



}
