#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int main()
{
    //flags pra chamar no if
    int passou1 = 0;
    int passou2 = 0;
    int passou3 = 0;
    int passou4 = 0;

    srand(time(NULL)); // chamar a função de numero aleatorio

    // variaveis etapa4
    int tentativaetapa4;
    int numerotentativasetapa4 = 1;
    int niveisetapa4;
    int naleatorioetapa410 = rand() % 10 + 1;
    int naleatorioetapa450 = rand() % 50 + 1;
    int naleatorioetapa4100 = rand() % 100 + 1;

    // variaveis etapa3
    int tentativaetapa3;
    int numerotentativasetapa3 = 1;
    int niveisetapa3;
    int naleatorioetapa3 = rand() % 10 + 1;
    int naleatorioetapa350 = rand() % 50 + 1;
    int naleatorioetapa3100 = rand() % 100 + 1;

    // variáveis etapa2
    int tentativaetapa2;
    int numeroaleatorioate10 = rand() % 10 + 1; // gerar número aleatório entre 1 e 10 na etapa 2

    // etapa1
    int tentativaetapa1;
    printf("_______________ ETAPA 1 _______________\n\n");
    printf("SEJA BEM-VINDA AO JOGO DA ADIVINHAÇÃO!\n\nNessa 1ª etapa, você precisa adivinhar apenas um número.\nDica: Esse número está entre 1 e 10!\n\n");
    printf("Digite a sua tentativa: ");
    scanf("%d", &tentativaetapa1);
    if (tentativaetapa1 == 10){
        printf("\nParabéns! Voce acertou! :)\n\n");
        passou1 = 1;
    }
    else if (tentativaetapa1 < 1 || tentativaetapa1 > 10){
        printf("\nTentativa inválida :|\n");
    }
    else{
        printf("\nVocê Errou!\n\nFim de Jogo.\n");
    }

    // etapa2
    if (passou1){
        int numerotentativas = 1;
        printf("_______________ ETAPA 2 _______________\n\n");
        printf("Nessa 2ª etapa, você terá 3 tentativas\npara adivinhar um número aleatório.\n\n");

        do{
            printf("Digite a sua tentativa %d: ", numerotentativas);
            scanf("%d", &tentativaetapa2);
            if (tentativaetapa2 == numeroaleatorioate10){
                printf("Parabéns! Acertou!\n\n");
                passou2 = 1;
            }
            else if (tentativaetapa2 > numeroaleatorioate10){
                printf("O número é menor!\n");
            }
            else{
                printf("O número é maior!\n");
            }
            numerotentativas++;
        } while (tentativaetapa2 != numeroaleatorioate10 && numerotentativas <= 3);
        if (tentativaetapa2 != numeroaleatorioate10){
            printf("\nO número era %d!\n\nFIM DE JOGO!\n\n", numeroaleatorioate10);
        }
    }
    // etapa3
    if (passou1 && passou2){
        printf("_______________ ETAPA 3 _______________\n\n");
        printf("Nessa 3ª etapa, você terá a opção de escolhar\no nível de dificuldade do jogo!\n\n");
        printf("• 1. Fácil (Número entre 1 e 10, 5 tentativas)\n\n• 2. Médio (Número entre 1 e 50, 7 tentativas)\n\n• 3. Difícil (Número entre 1 e 100, 10 tentativas)\n\n");
        printf("Qual nível você vai escolher? ");
        scanf("%d", &niveisetapa3);
        if (niveisetapa3 >= 1 && niveisetapa3 <= 3){
            printf("\nVamos começar?\n");
        }
        switch (niveisetapa3){
        case 1:
            do{
                printf("\nDigite a sua tentativa %d: ", numerotentativasetapa3);
                scanf("%d", &tentativaetapa3);
                if (tentativaetapa3 == naleatorioetapa3){
                    printf("Parabéns! Acertou!\n\n");
                    passou3 = 1;
                }
                else if (tentativaetapa3 > naleatorioetapa3){
                    printf("O número é menor!\n");
                }
                else{
                    printf("O número é maior!\n");
                }
                numerotentativasetapa3++;
            } while (tentativaetapa3 != naleatorioetapa3 && numerotentativasetapa3 <= 5);
            if (tentativaetapa3 != naleatorioetapa3){
                printf("\nVocê não acertou!\nO número era %d!\n\nFIM DE JOGO!\n\n", naleatorioetapa3);
            }
            break;
        case 2:
            do{
                printf("\nDigite a sua tentativa %d: ", numerotentativasetapa3);
                scanf("%d", &tentativaetapa3);
                if (tentativaetapa3 == naleatorioetapa350){
                    printf("Parabéns! Acertou!\n\n");
                    passou3 = 1;
                }
                else if (tentativaetapa3 > naleatorioetapa350){
                    printf("O número é menor!\n");
                }
                else{
                    printf("O número é maior!\n");
                }
                numerotentativasetapa3++;
            } while (tentativaetapa3 != naleatorioetapa350 && numerotentativasetapa3 <= 7);
            if (tentativaetapa3 != naleatorioetapa350){
                printf("\nVocê não acertou!\nO número era %d!\n\nFIM DE JOGO!\n\n", naleatorioetapa350);
            }
            break;
        case 3:
            do{
                printf("\nDigite a sua tentativa %d: ", numerotentativasetapa3);
                scanf("%d", &tentativaetapa3);
                if (tentativaetapa3 == naleatorioetapa3100){
                    printf("Parabéns! Acertou!\n\n");
                    passou3 = 1;
                }
                else if (tentativaetapa3 > naleatorioetapa3100){
                    printf("O número é menor!\n");
                }
                else{
                    printf("O número é maior!\n");
                }
                numerotentativasetapa3++;
            } while (tentativaetapa3 != naleatorioetapa3100 && numerotentativasetapa3 <= 10);
            if (tentativaetapa3 != naleatorioetapa3100){
                printf("\nVocê não acertou!\nO número era %d!\n\nFIM DE JOGO!\n\n", naleatorioetapa3100);
            }
            break;
        default:
            printf("\nOpção de nível inválida! Volte do início!");
        }
    }
    // etapa4
     if (passou1 && passou2 && passou3){
        printf("_______________ ETAPA 4 _______________\n\n");
        printf("Nessa 4ª etapa, você terá a opção de escolhar o nível do jogo e terá potuação!\nporém, haverá descontos na pontuação a cada erro! (Você começa com 100)\n\n");
        printf("• 1. Fácil (Número entre 1 e 10, 5 tentativas)\n\n• 2. Médio (Número entre 1 e 50, 7 tentativas)\n\n• 3. Difícil (Número entre 1 e 100, 10 tentativas)\n\n>>> a cada erro -10pts <<<\n\n");
        printf("Qual nível você vai escolher? ");
        int pontos = 100;
        int tentativasusadasetapa4 = 0;
        scanf("%d", &niveisetapa4);
        if (niveisetapa4 >= 1 && niveisetapa4 <= 3){
            printf("\nVamos começar?\n");
        }
        switch (niveisetapa4){
        case 1:
            do{
                printf("\nDigite a sua tentativa %d: ", numerotentativasetapa4);
                scanf("%d", &tentativaetapa4);
                if (tentativaetapa4 == naleatorioetapa410){
                    printf("Parabéns! Acertou!\n\n");
                    passou4 = 1;
                    tentativasusadasetapa4 = numerotentativasetapa4; // pego qts vezes usei as tentativas pra fazer a conta das msg personalizadas
                    break; // não conta tentativa a mais
                }
                else if (tentativaetapa4 > naleatorioetapa410){
                    printf("O número é menor!\n");
                    pontos -= 10; if (pontos < 0) pontos = 0;//tira os pontos
                }
                else {
                    printf("O número é maior!\n");
                    pontos -= 10; if (pontos < 0) pontos = 0;// tira os pontos
                }
                numerotentativasetapa4++;
            } while (tentativaetapa4 != naleatorioetapa410 && numerotentativasetapa4 <= 5);
            if (tentativaetapa4 != naleatorioetapa410){
                printf("\nVocê não acertou!\nO número era %d!\n\nNão foi dessa vez! Tente novamente.\n\nFIM DE JOGO!\n\n", naleatorioetapa410);
            }
            else{
                printf("Pontuação final: %d\n", pontos);
                if (tentativasusadasetapa4 <= 2) {//verifica qts vezes o jogador usou as tentativas, aí designa a mensagem personalizada de acordo com o numero de tentativas utilizadas
                    printf("Excelente! Você é muito bom nisso!\n");
                }
                else{
                    printf("Boa! Mas tente melhorar!\n");
                }
            }
            break;

        case 2:
            do{
                printf("\nDigite a sua tentativa %d: ", numerotentativasetapa4);
                scanf("%d", &tentativaetapa4);
                if (tentativaetapa4 == naleatorioetapa450){
                    printf("Parabéns! Acertou!\n\n");
                    passou4 = 1;
                    tentativasusadasetapa4 = numerotentativasetapa4;
                    break;
                }
                else if (tentativaetapa4 > naleatorioetapa450){
                    printf("O número é menor!\n");
                    pontos -= 10; if (pontos < 0) pontos = 0;
                }
                else{
                    printf("O número é maior!\n");
                    pontos -= 10; if (pontos < 0) pontos = 0;
                }
                numerotentativasetapa4++;
            } while (tentativaetapa4 != naleatorioetapa450 && numerotentativasetapa4 <= 7);

            if (tentativaetapa4 != naleatorioetapa450){
                printf("\nVocê não acertou!\nO número era %d!\n\nNão foi dessa vez! Tente novamente.\n\nFIM DE JOGO!\n\n", naleatorioetapa450);
            }
            else{
                printf("Pontuação final: %d\n", pontos);
                if (tentativasusadasetapa4 <= 3) {
                    printf("Excelente! Você é muito bom nisso!\n");
                } else{
                    printf("Boa! Mas tente melhorar!\n");
                }
            }
            break;

        case 3:
            do{
                printf("\nDigite a sua tentativa %d: ", numerotentativasetapa4);
                scanf("%d", &tentativaetapa4);
                if (tentativaetapa4 == naleatorioetapa4100){
                    printf("Parabéns! Acertou!\n\n");
                    passou4 = 1;
                    tentativasusadasetapa4 = numerotentativasetapa4;
                    break;
                }
                else if (tentativaetapa4 > naleatorioetapa4100){
                    printf("O número é menor!\n");
                    pontos -= 10; if (pontos < 0) pontos = 0;
                }
                else{
                    printf("O número é maior!\n");
                    pontos -= 10; if (pontos < 0) pontos = 0;
                }
                numerotentativasetapa4++;
            } while (tentativaetapa4 != naleatorioetapa4100 && numerotentativasetapa4 <= 10);
            if (tentativaetapa4 != naleatorioetapa4100){
                printf("\nVocê não acertou!\nO número era %d!\n\nNão foi dessa vez! Tente novamente.\n\nFIM DE JOGO!\n\n", naleatorioetapa4100);
            }
            else{
                printf("Pontuação final: %d\n", pontos);
                if (tentativasusadasetapa4 <= 4) {
                    printf("Excelente! Você é muito bom nisso!\n");
                }
                else{
                    printf("Boa! Mas tente melhorar!\n");
                }
            }
            break;

        default:
            printf("\nOpção de nível inválida! Volte do início!");
        }
    }

    return 0;
}
