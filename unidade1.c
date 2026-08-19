#include <stdio.h>

void q1() {
    printf("Questão 1\n");
    printf("Savio Baleeiro Praxedes:\n");
}

void q2() {
    printf("Questão 2\n");
    printf("Resultado: %d\n", 30 * 37);
}
        void q3() {
    printf("Questão 3\n");
    printf("Média: %.2f\n", (5 + 8 + 12) / 3.0);
    }
    void q4() {
    printf("Questão 4\n");
    int num;    
    scanf("%d", &num);
    printf("Número digitado: %d\n", num);
    }

    void q5() {
    printf("Questão 5\n");
    int num1, num2;
    printf("Digite dois números: ");
    scanf("%d %d", &num1, &num2);
    printf("Números digitados: %d e %d\n", num1, num2);
    }

    void q6() {
    printf("Questão 6\n");
    int num1;
    printf("Digite um número inteiro: ");
    scanf("%d", &num1);
    printf("o sucessor do inteiro e: %d\n", num1 + 1);
    printf("o antecessor do inteiro e: %d\n", num1 - 1);
}

    void q7() {
    printf("Questão 7\n");
    char nome [50];
    char endereço[100];
    char telefone[15];
    printf("Digite seu nome: ");
    scanf("\n%[^\n]", nome);
    printf("Digite seu endereço: ");
    scanf("\n%[^\n]", endereço);
    printf("Digite seu telefone: ");
    scanf("%s", telefone);
    printf("Nome: %s, Endereço: %s, Telefone: %s\n", nome, endereço, telefone);
}

void q8() {
    printf("Questão 8\n");
    int num1, num2;
    printf("Digite dois números: ");
    scanf("%d %d", &num1, &num2);
    printf("Subtraçao: %d\n", num1 - num2);   }

    void q9() {
    printf("Questão 9\n");
    int num; 
    printf("Digite um número: ");
    scanf("%d", &num);
    printf("Um quarto do número digitado é: %.2f\n", num / 4.0);
}
        
void q10() {
    printf("Questão 10\n");
    int num1, num2, num3;
    printf("Digite três números: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("Divisao: %.2f\n", (num1 + num2 + num3) / 3.0);
}

void q11(){
    printf("Questão 11\n");
    int num1, num2;
    printf("Digite dois números: ");
    scanf("%d %d", &num1, &num2);
    printf("Multiplicação: %d\n", num1 * num2);
    printf("Divisão: %.2f\n", (float)num1 / num2);
    printf("Soma: %d\n", num1 + num2);
    printf("Subtração: %d\n", num1 - num2);
}
 void q12() {
    printf("Questão 12\n");
    int num;
    printf("Digite um número: ");
    scanf("%d", &num);
    printf("o quadrado do numero digitado é: %d\n", num * num);
}
void q13() {
     printf("Questão 13\n");
     printf("digite o saldo da sua conta: ");
     float saldo;
     scanf("%f", &saldo);
     printf("seu saldo atual é: %.2f\n", saldo + saldo * 0.02);
}
void q14(){
    printf("Questão 14\n");
    int area, base, altura;
    printf("Digite a base do retângulo: ");
    scanf("%d", &base); 
    printf("Digite a altura do retângulo: ");
    scanf("%d", &altura);
    area = base * altura;
    printf("A área do retângulo é: %d\n", area); 
}


int main() {
    q1();           
    q2();
    q3();
    q4();
    q5();
    q6();
    q7();
    q8();
    q9();
    q10();
    q11();
    q12();
    q13();
    q14();
    return 0;
}
