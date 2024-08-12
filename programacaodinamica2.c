#include <stdio.h>
#include <stdio.h>

typedef struct no
{
    int codigo;
    char nome[20];
} no;
    struct no *A, *B;

int main ()
{
A = NULL; //1
B = NULL; //2

A = (no*)malloc(sizeof(no)); //3
printf("informe o codigo");
scanf("%d", &A -> codigo);//4
printf("Informe o nome");
scanf("%s", &A -> nome); //5
B=A; //6

A= (no*)malloc(sizeof(no)); //7
printf("Informe o codigo");
scanf("%d", &A -> codigo); //8
printf("Informe o nome");
scanf("%s", &A -> nome); //9

B = (no*)malloc(sizeof(no)); //10
A = NULL; //11
A = B;
printf("%d", A -> codigo);
}
