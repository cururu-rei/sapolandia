#include <stdio.h>
void exemploSe() {
    float nota = 0;
    printf ("digite uma nota: ");
    scanf ("%f", &nota);
    if (nota >= 7){
        printf("aprovado\n");
    }else if (nota >= 5) {
        printf("prova final\n");
    }else if (nota >= 3){
        printf("reprovado por pouco");
    }else {
        printf("reprovado sem chance");
    }
}
void main (){}
