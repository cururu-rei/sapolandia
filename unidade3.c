#include <stdio.h>
#include <string.h>

void q1() {
    printf("questao 1\n");
    for (int i = 1; i <= 100; i++) {
        printf("%d ", i);
    }
    printf("\n");
}

void q2() {
    printf("questao 2\n");
    for (int i = 100; i >= 1; i--) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

void q3() {
    printf("questao 3\n");
    for (int i = 1; i <= 500; i++) {
        if (i % 5 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

void q4() {
    printf("questao 4\n");
    char nome[50];
    int idade;
    char sexo[10];
    for (int i = 0; i < 20; i++) {
        printf("Digite nome, idade e sexo (M/F) da pessoa %d: ", i + 1);
        scanf("%s %d %s", nome, &idade, sexo);
        if ((sexo[0] == 'M' || sexo[0] == 'm') && idade > 21) {
            printf("Nome: %s\n", nome);
        }
    }
}

void q5() {
    printf("questao 5\n");
    printf("Digite multiplicando e multiplicador: ");
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    int produto = 0;
    for (int i = 0; i < num2; i++) {
        produto += num1;
    }
    printf("Produto: %d\n", produto);
}

void q6() {
    printf("questao 6\n");
    int a = 1, b = 1, c;
    printf("%d %d ", a, b);
    for (int i = 3; i <= 20; i++) {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
    printf("\n");
}

void q7() {
    printf("questao 7\n");
    char nome[50];
    float nota1, nota2, media, mediaGeral = 0;
    for (int i = 0; i < 15; i++) {
        printf("Digite nome e duas notas do aluno %d: ", i + 1);
        scanf("%s %f %f", nome, &nota1, &nota2);
        media = (nota1 + nota2) / 2;
        mediaGeral += media;
        printf("Nome: %s, N1: %.2f, N2: %.2f, Media: %.2f\n", nome, nota1, nota2, media);
    }
    printf("Media Geral da Turma: %.2f\n", mediaGeral / 15);
}

void q8() {
    printf("questao 8\n");
    char nome[50];
    float salario, aliquota;
    for (int i = 0; i < 10; i++) {
        printf("Digite o nome e salario: ");
        scanf("%s %f", nome, &salario);
        if (salario < 1300) {
            printf("%s: Isento\n", nome);
        } else if (salario < 2300) {
            aliquota = salario * 0.10;
            printf("%s: %.2f\n", nome, aliquota);
        } else {
            aliquota = salario * 0.15;
            printf("%s: %.2f\n", nome, aliquota);
        }
    }
}

void q9() {
    printf("questao 9\n");
    int idade, opiniao;
    int somaIdadeExc = 0, qtdExc = 0, qtdReg = 0, qtdBom = 0;
    for (int i = 0; i < 20; i++) {
        printf("Digite idade e opiniao (3-excelente, 2-bom, 1-regular): ");
        scanf("%d %d", &idade, &opiniao);
        if (opiniao == 3) {
            somaIdadeExc += idade;
            qtdExc++;
        } else if (opiniao == 1) {
            qtdReg++;
        } else if (opiniao == 2) {
            qtdBom++;
        }
    }
    if (qtdExc > 0) printf("Media idades excelente: %.2f\n", (float)somaIdadeExc / qtdExc);
    printf("Qtd pessoas regular: %d\n", qtdReg);
    printf("Porcentagem bom: %.2f%%\n", ((float)qtdBom / 20) * 100);
}

void q10() {
    printf("questao 10\n");
    float peso, somaPesoTime, somaPesoGeral = 0;
    int idade, somaIdadeTime, somaIdadeGeral = 0;
    float maisPesadoTime;
    int maisJovemTime;
    
    for (int i = 0; i < 30; i++) {
        somaPesoTime = 0;
        somaIdadeTime = 0;
        maisPesadoTime = 0;
        maisJovemTime = 999;
        
        printf("--- Pais %d ---\n", i + 1);
        for (int j = 0; j < 12; j++) {
            printf("Digite peso e idade do jogador %d: ", j + 1);
            scanf("%f %d", &peso, &idade);
            
            somaPesoTime += peso;
            somaIdadeTime += idade;
            somaPesoGeral += peso;
            somaIdadeGeral += idade;
            
            if (peso > maisPesadoTime) maisPesadoTime = peso;
            if (idade < maisJovemTime) maisJovemTime = idade;
        }
        printf("Peso medio do time: %.2f, Idade media: %.2f\n", somaPesoTime / 12, (float)somaIdadeTime / 12);
        printf("Mais pesado: %.2f, Mais jovem: %d\n", maisPesadoTime, maisJovemTime);
    }
    printf("Peso medio geral: %.2f\n", somaPesoGeral / (30 * 12));
    printf("Idade media geral: %.2f\n", (float)somaIdadeGeral / (30 * 12));
}

void q11() {
    printf("questao 11\n");
    int num, cont = 0;
    while (1) {
        printf("Digite um numero (0 para sair): ");
        scanf("%d", &num);
        if (num == 0) break;
        if (num >= 100 && num <= 200) {
            cont++;
        }
    }
    printf("Numeros entre 100 e 200: %d\n", cont);
}

void q12() {
    printf("questao 12\n");
    float popA = 5000000;
    float popB = 7000000;
    int anos = 0;
    while (popA <= popB) {
        popA += popA * 0.03;
        popB += popB * 0.02;
        anos++;
    }
    printf("Tempo necessario: %d anos\n", anos);
}

void q13() {
    printf("questao 13\n");
    int numCons, tipo;
    float kwh, custo;
    float totalKwh = 0;
    float somaKwh1_2 = 0;
    int cont1_2 = 0;

    while (1) {
        printf("Digite numero do consumidor (0 para sair): ");
        scanf("%d", &numCons);
        if (numCons == 0) break;
        printf("Digite kwh e tipo (1-res, 2-com, 3-ind): ");
        scanf("%f %d", &kwh, &tipo);
        
        totalKwh += kwh;
        
        if (tipo == 1) {
            custo = kwh * 0.3;
            somaKwh1_2 += kwh;
            cont1_2++;
        } else if (tipo == 2) {
            custo = kwh * 0.5;
            somaKwh1_2 += kwh;
            cont1_2++;
        } else if (tipo == 3) {
            custo = kwh * 0.7;
        } else {
            custo = 0;
        }
        printf("Custo deste consumidor: R$%.2f\n", custo);
    }
    printf("Consumo total: %.2f kwh\n", totalKwh);
    if (cont1_2 > 0) {
        printf("Media consumo tipos 1 e 2: %.2f kwh\n", somaKwh1_2 / cont1_2);
    }
}

void q14() {
    printf("questao 14\n");
    int num, fat;
    while (1) {
        printf("Digite um numero (<1 para sair): ");
        scanf("%d", &num);
        if (num < 1) break;
        fat = 1;
        for (int i = 1; i <= num; i++) {
            fat *= i;
        }
        printf("Fatorial de %d e %d\n", num, fat);
    }
}

void q15() {
    printf("questao 15\n");
    int idade, menos21 = 0, mais50 = 0;
    while (1) {
        printf("Digite uma idade (<0 para sair): ");
        scanf("%d", &idade);
        if (idade < 0) break;
        if (idade < 21) menos21++;
        if (idade > 50) mais50++;
    }
    printf("Menos de 21: %d, Mais de 50: %d\n", menos21, mais50);
}

void q16() {
    printf("questao 16\n");
    int dividendo, divisor;
    printf("Digite dividendo e divisor: ");
    scanf("%d %d", &dividendo, &divisor);
    int quociente = 0;
    int resto = dividendo;
    while (resto >= divisor) {
        resto -= divisor;
        quociente++;
    }
    printf("Resto da divisao: %d (Quociente: %d)\n", resto, quociente);
}

void q17() {
    printf("questao 17\n");
    int pedido, dia, mes, ano, qtd;
    float preco, total = 0;
    while (1) {
        printf("Digite num pedido (0 para sair): ");
        scanf("%d", &pedido);
        if (pedido == 0) break;
        printf("Digite data (d m a), preco unitario e qtd: ");
        scanf("%d %d %d %f %d", &dia, &mes, &ano, &preco, &qtd);
        total += preco * qtd;
    }
    printf("Valor total da compra: %.2f\n", total);
}

void q18() {
    printf("questao 18\n");
    int conta, dias;
    char nome[50];
    float valor, totalFaturado = 0;
    while (1) {
        printf("Digite numero da conta (0 para sair): ");
        scanf("%d", &conta);
        if (conta == 0) break;
        printf("Digite nome e dias: ");
        scanf("%s %d", nome, &dias);
        
        if (dias < 10) {
            valor = dias * (30.0 + 15.0);
        } else {
            valor = dias * (30.0 + 8.0);
        }
        totalFaturado += valor;
        printf("Nome: %s, Conta: %d, Valor: %.2f\n", nome, conta, valor);
    }
    printf("Total faturado pela pousada: %.2f\n", totalFaturado);
}

void q19() {
    printf("questao 19\n");
    int nAlunos, aprovados = 0, reprovados = 0;
    float nota, somaTurma = 0;
    printf("Digite o numero de alunos da turma (0 para sair): ");
    scanf("%d", &nAlunos);
    if (nAlunos > 0) {
        for (int i = 0; i < nAlunos; i++) {
            printf("Digite a nota do aluno %d: ", i + 1);
            scanf("%f", &nota);
            somaTurma += nota;
            if (nota >= 7.0) aprovados++;
            else reprovados++;
        }
        printf("Aprovados: %d\n", aprovados);
        printf("Media da turma: %.2f\n", somaTurma / nAlunos);
        printf("Percentual reprovados: %.2f%%\n", ((float)reprovados / nAlunos) * 100);
    }
}

void q20() {
    printf("questao 20\n");
    int time, mora;
    float salario, somaSalarioBota = 0;
    int flu = 0, bota = 0, vasco = 0, fla = 0, outrosTimes = 0;
    int rjOutros = 0, nitFlu = 0, contBota = 0;

    while (1) {
        printf("Qual seu time (1-Flu, 2-Bota, 3-Vas, 4-Fla, 5-Outros, 0-Sair)? ");
        scanf("%d", &time);
        if (time == 0) break;
        printf("Onde mora (1-RJ, 2-Nit, 3-Outros)? ");
        scanf("%d", &mora);
        printf("Qual seu salario? ");
        scanf("%f", &salario);

        if (time == 1) flu++;
        else if (time == 2) { bota++; somaSalarioBota += salario; contBota++; }
        else if (time == 3) vasco++;
        else if (time == 4) fla++;
        else if (time == 5) outrosTimes++;

        if (mora == 1 && time == 5) rjOutros++;
        if (mora == 2 && time == 1) nitFlu++;
    }
    printf("Flu: %d, Bota: %d, Vasco: %d, Fla: %d, Outros: %d\n", flu, bota, vasco, fla, outrosTimes);
    if (contBota > 0) printf("Media salarial Botafogo: %.2f\n", somaSalarioBota / contBota);
    printf("Moram RJ torcem Outros: %d\n", rjOutros);
    printf("Niteroi torcedores Flu: %d\n", nitFlu);
}

void q21() {
    printf("questao 21\n");
    float rendaP, rendaF, alim, outras;
    int totalAlunos = 0, gastam200 = 0, rendaPmaiorF = 0;

    while (1) {
        printf("Digite renda pessoal (0 para sair): ");
        scanf("%f", &rendaP);
        if (rendaP == 0) break;
        printf("Digite renda familiar, gastos alimentacao, outras despesas: ");
        scanf("%f %f %f", &rendaF, &alim, &outras);
        
        totalAlunos++;
        if (outras > 200) gastam200++;
        if (rendaP > rendaF) rendaPmaiorF++;
        
        float totalRenda = rendaP + rendaF;
        float gastoTotal = alim + outras;
        if (totalRenda > 0) {
            printf("%% gasta: %.2f%%\n", (gastoTotal / totalRenda) * 100);
        }
    }
    if (totalAlunos > 0) {
        printf("%% alunos > R$200 outras depesas: %.2f%%\n", ((float)gastam200 / totalAlunos) * 100);
        printf("Alunos com renda pessoal > familiar: %d\n", rendaPmaiorF);
    }
}

void q22() {
    printf("questao 22\n");
    int carteira, nMultas, carteiraMaior = 0, maiorMultas = 0;
    float valor, divida, arrecadacao = 0;
    
    while (1) {
        printf("Digite carteira (0 para sair): ");
        scanf("%d", &carteira);
        if (carteira == 0) break;
        printf("Digite num multas: ");
        scanf("%d", &nMultas);
        
        divida = 0;
        for (int i = 0; i < nMultas; i++) {
            printf("Digite o valor da multa %d: ", i + 1);
            scanf("%f", &valor);
            divida += valor;
        }
        arrecadacao += divida;
        printf("Divida do motorista %d: %.2f\n", carteira, divida);
        
        if (nMultas > maiorMultas) {
            maiorMultas = nMultas;
            carteiraMaior = carteira;
        }
    }
    printf("Total arrecadado: %.2f\n", arrecadacao);
    printf("Carteira com mais multas: %d\n", carteiraMaior);
}

void q23() {
    printf("questao 23\n");
    char nome[50], nomeAlta[50], nomePesado[50], sexo[10];
    int idade, somaIdades = 0, qtdAtletas = 0;
    float peso, altura, maiorAltura = 0, maiorPeso = 0;
    
    while (1) {
        printf("Digite nome (@ para sair): ");
        scanf("%s", nome);
        if (strcmp(nome, "@") == 0) break;
        
        printf("Digite sexo (M/F), idade, peso, altura: ");
        scanf("%s %d %f %f", sexo, &idade, &peso, &altura);
        
        somaIdades += idade;
        qtdAtletas++;
        
        if ((sexo[0] == 'F' || sexo[0] == 'f') && altura > maiorAltura) {
            maiorAltura = altura;
            strcpy(nomeAlta, nome);
        }
        if ((sexo[0] == 'M' || sexo[0] == 'm') && peso > maiorPeso) {
            maiorPeso = peso;
            strcpy(nomePesado, nome);
        }
    }
    if (maiorAltura > 0) printf("Atleta fem mais alta: %s\n", nomeAlta);
    if (maiorPeso > 0) printf("Atleta masc mais pesado: %s\n", nomePesado);
    if (qtdAtletas > 0) printf("Media idades: %.2f\n", (float)somaIdades / qtdAtletas);
}

void q24() {
    printf("questao 24\n");
    float vel, tempo, distancia, litros, totalLitros = 0;
    while (1) {
        printf("Digite a velocidade (<0 para sair): ");
        scanf("%f", &vel);
        if (vel < 0) break;
        printf("Digite o tempo (em horas): ");
        scanf("%f", &tempo);
        
        distancia = vel * tempo;
        litros = distancia / 10.0;
        totalLitros += litros;
        
        printf("Distancia: %.2f km, Litros no trecho: %.2f\n", distancia, litros);
    }
    printf("Total de litros na viagem: %.2f\n", totalLitros);
}

void q25() {
    printf("questao 25\n");
    int cic, dependentes, isentos = 0;
    float rendaBruta, rendaLiquida, imposto, totalImposto = 0;
    
    while (1) {
        printf("Digite CIC (0 para sair): ");
        scanf("%d", &cic);
        if (cic == 0) break;
        printf("Digite numero de dependentes e renda bruta: ");
        scanf("%d %f", &dependentes, &rendaBruta);
        
        rendaLiquida = rendaBruta - (dependentes * 600.0);
        if (rendaLiquida <= 1000) {
            imposto = 0;
            isentos++;
        } else if (rendaLiquida <= 5000) {
            imposto = rendaLiquida * 0.15;
        } else {
            imposto = rendaLiquida * 0.25;
        }
        
        totalImposto += imposto;
        printf("CIC: %d - Imposto a pagar: %.2f\n", cic, imposto);
    }
    printf("Total arrecadado: %.2f\n", totalImposto);
    printf("Contribuintes isentos: %d\n", isentos);
}

void q26() {
    printf("questao 26\n");
    int canal, pessoas;
    int c4 = 0, c5 = 0, c7 = 0, c12 = 0, totalPessoas = 0;
    
    while (1) {
        printf("Digite o canal (4, 5, 7, 12, ou 0 para sair): ");
        scanf("%d", &canal);
        if (canal == 0) break;
        printf("Pessoas assistindo: ");
        scanf("%d", &pessoas);
        
        if (canal == 4) c4 += pessoas;
        else if (canal == 5) c5 += pessoas;
        else if (canal == 7) c7 += pessoas;
        else if (canal == 12) c12 += pessoas;
        
        totalPessoas += pessoas;
    }
    if (totalPessoas > 0) {
        printf("Audiencia C4: %.2f%%\n", ((float)c4 / totalPessoas) * 100);
        printf("Audiencia C5: %.2f%%\n", ((float)c5 / totalPessoas) * 100);
        printf("Audiencia C7: %.2f%%\n", ((float)c7 / totalPessoas) * 100);
        printf("Audiencia C12: %.2f%%\n", ((float)c12 / totalPessoas) * 100);
    }
}

void q27() {
    printf("questao 27\n");
    int matricula, qtd;
    float nota, somaNotas, cr, melhorCr5Mais = -1;
    
    while (1) {
        printf("Digite a matricula (1 a 5000, ou fora disso para sair): ");
        scanf("%d", &matricula);
        if (matricula < 1 || matricula > 5000) break;
        printf("Qtd de disciplinas cursadas: ");
        scanf("%d", &qtd);
        
        somaNotas = 0;
        for (int i = 0; i < qtd; i++) {
            printf("Nota %d: ", i + 1);
            scanf("%f", &nota);
            somaNotas += nota;
        }
        if (qtd > 0) {
            cr = somaNotas / qtd;
            printf("Matricula: %d, CR: %.2f\n", matricula, cr);
            if (qtd >= 5 && cr > melhorCr5Mais) {
                melhorCr5Mais = cr;
            }
        }
    }
    if (melhorCr5Mais != -1) {
        printf("Melhor CR (>5 mat): %.2f\n", melhorCr5Mais);
    }
}

void q28() {
    printf("questao 28\n");
    int idade, qtdMais50 = 0, qtd10a20 = 0, qtdTotal = 0, qtdMenos40 = 0;
    float altura, peso, somaAltura10a20 = 0;
    
    while (1) {
        printf("Digite idade (<0 p/ sair), altura, peso: ");
        scanf("%d", &idade);
        if (idade < 0) break;
        scanf("%f %f", &altura, &peso);
        
        qtdTotal++;
        if (idade > 50) qtdMais50++;
        if (idade >= 10 && idade <= 20) {
            qtd10a20++;
            somaAltura10a20 += altura;
        }
        if (peso < 40) qtdMenos40++;
    }
    printf("Pessoas > 50 anos: %d\n", qtdMais50);
    if (qtd10a20 > 0) printf("Media altura 10-20 anos: %.2f\n", somaAltura10a20 / qtd10a20);
    if (qtdTotal > 0) printf("%% de pessoas < 40kg: %.2f%%\n", ((float)qtdMenos40 / qtdTotal) * 100);
}

void q29() {
    printf("questao 29\n");
    float valor, totalL = 0, totalA = 0, totalH = 0, totalGeral = 0;
    char codigo[10];
    
    while (1) {
        printf("Digite o valor (0 para sair): ");
        scanf("%f", &valor);
        if (valor == 0) break;
        printf("Digite o codigo (L/A/H): ");
        scanf("%s", codigo);
        
        totalGeral += valor;
        if (codigo[0] == 'L' || codigo[0] == 'l') totalL += valor;
        else if (codigo[0] == 'A' || codigo[0] == 'a') totalA += valor;
        else if (codigo[0] == 'H' || codigo[0] == 'h') totalH += valor;
    }
    printf("Total Limpeza: %.2f\n", totalL);
    printf("Total Alimentacao: %.2f\n", totalA);
    printf("Total Higiene: %.2f\n", totalH);
    printf("Total Geral: %.2f\n", totalGeral);
}
void q30() {
    printf("questao 30\n");
}

int main(void) {
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
    q15();
    q16();
    q17();
    q18();
    q19();
    q20();
    q21();
    q22();
    q23();
    q24();
    q25();
    q26();
    q27();
    q28();
    q29();
    
    return 0;
}