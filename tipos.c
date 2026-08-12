#include <stdio.h>

void main(){
    int contador = 2;
    float valor1 =300, valor2 =400;
    float totalsom = valor1 + valor2;
    printf("totalsom: %f\n", totalsom);
    float totalmult = valor1 * valor2;
    printf("totalmult: %f\n", totalmult);
    contador ++;
    float result =(totalmult + totalsom) * contador ;
printf("(%.2f + %.2f) * %d = %.2f\n", totalmult, totalsom, contador, result);
    printf("result: %f\n", result);
}
