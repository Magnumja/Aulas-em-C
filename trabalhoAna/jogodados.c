#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Prof, nao quis usar float em vez de double para os valores de ganho e perda no programa, pq
// float tem menos precisão, pq utiliza 32 bits, so que double utiliza 64 bits
// Dai eu preferi usar o double dessa vez.

// Esta função mostra o menu principal do jogo
void mostrarMenu()
{
    printf("=== Jogo de Dados ===\n");
    printf("1. Jogar\n");
    printf("0. Sair\n");
    printf("=====================\n");
}

int main()
{
    int opcao, aposta, num1, num2, dado1, dado2, soma; // Variáveis para opções, apostas, números escolhidos e dados
    double ganho, totalGanho = 0.0, totalPerda = 0.0;  // Variáveis para ganhar e perder dinheiro

    // Aqui estou inicializando o gerador de números aleatórios, mas eu tive que pegar ele na internet, pois nao tava conseguindo
    // tentei jogando todos os numeros, colocando dominio de funcao pra ver se ia, mas nada funcionava, dai pesquisei
    // e coloquei srand(time(NULL)), pra poder gerar

    srand(time(NULL));

    // Esse loop fica rodando enquanto o jogador não decidir sair, por isso o 1 engtre parenteses no while
    // porem eu fiz um while dentro do outro pra continuar o jogo msm dps dos dados serem lançados

    while (1)
    {
        mostrarMenu();                 // Chama a função que mostra o menu, literalmente um void kskskkss
        printf("Escolha uma opção: "); // Pede pro jogador escolher uma opção
        scanf("%d", &opcao);           // Lê a opção escolhida

        // Se a opção for 0, o jogador quer sair
        if (opcao == 0)
        {
            printf("Obrigado por jogar, prof Ana!\n"); // Mensagem de despedida
            break;                                     // Sai do jogo
        }
        else if (opcao == 1)
        { // Se o jogador escolher jogar
            printf("Bem-vindo ao jogo de dados, prof!\n");

            // Aqui começa o loop do jogo em si
            while (1)
            {
                printf("Digite o valor da aposta (ou 0 para voltar ao menu): "); // Pede o valor da aposta
                scanf("%d", &aposta);                                            // Lê a aposta do jogador

                // Se a aposta for 0, o jogador quer voltar ao menu
                if (aposta == 0)
                {
                    break; // Sai do loop do jogo e volta pro menu
                }

                // Pede os dois números do jogador
                while (1)
                {
                    printf("Escolha dois números (de 1 a 6):\n"); // Pede dois números pro jogador
                    printf("Número 1: ");                         // Pede o primeiro número
                    scanf("%d", &num1);                           // Lê o primeiro número

                    // Verifica se o primeiro número está entre 1 e 6
                    if (num1 < 1 || num1 > 6)
                    {
                        printf("Erro: Escolha um número entre 1 e 6!\n");
                        continue; // Repete o loop para que o jogador escolha um número válido
                    }

                    printf("Número 2: "); // Pede o segundo número
                    scanf("%d", &num2);   // Lê o segundo número

                    // Verifica se o segundo número está entre 1 e 6
                    if (num2 < 1 || num2 > 6)
                    {
                        printf("Erro: Escolha um número entre 1 e 6!\n");
                        continue; // Repete o loop para que o jogador escolha um número válido
                    }
                    break; // Sai do loop caso ambos os números sejam válidos
                }

                // Aqui o programa lança os dados, e pra mim foi a parte mais chata da matematica
                // descobri pesquisando que o rand ele ajuda a sempre escolher um numero entre 1 e 5 por conta do bloqueio no 6
                // logo, sempre que for o valor entre 1 e 5 somado com 1 vai me dar um numero dentro dos valores que o dado possui

                dado1 = rand() % 6 + 1; // Gera um número aleatório entre 1 e 6
                dado2 = rand() % 6 + 1; // Gera outro número aleatório entre 1 e 6
                soma = dado1 + dado2;   // Soma os valores dos dados

                // Mostra os resultados dos dados
                printf("Os dados mostraram: %d e %d\n", dado1, dado2);
                printf("Soma dos dados: %d\n", soma);

                // Aqui o programa verifica as condições de ganho, essa foi a parte mais tranquila pq era mais uma repetição de cada caso
                // como se eu tivesse fazendo as condicoes de maior e menor no if else, mas na paridade resolvi usar o resto pra ser mais preciso

                if (dado1 == num1 && dado2 == num2)
                {
                    ganho = 6 * aposta; // Se o jogador acertar os dois, ganha 6 vezes a aposta
                    printf("Você acertou os dois valores! Ganho: R$ %.2f\n", ganho);
                    totalGanho += ganho; // Adiciona o ganho ao total de ganhos
                }
                else if (soma == num1 + num2)
                {
                    ganho = 3 * aposta; // Se acertar a soma, ganha 3 vezes a aposta
                    printf("Você acertou a soma! Ganho: R$ %.2f\n", ganho);
                    totalGanho += ganho; // Adiciona ao total de ganhos
                }
                else if (dado1 == num1 || dado1 == num2 || dado2 == num1 || dado2 == num2)
                {
                    ganho = aposta; // Se acertar um número, ganha o valor da aposta de volta
                    printf("Você acertou um dos valores! Ganho: R$ %.2f\n", ganho);
                    totalGanho += ganho; // Adiciona ao total de ganhos
                }
                else if ((num1 + num2) % 2 == soma % 2)
                {
                    ganho = 0.5 * aposta; // Se a paridade da soma for igual, ganha metade da aposta
                    printf("A paridade da soma é igual! Ganho: R$ %.2f\n", ganho);
                    totalGanho += ganho; // Adiciona ao total de ganhos
                }
                else
                {
                    printf("Você não ganhou nada desta vez.\n"); // Se não ganhar, não recebe nada
                    ganho = 0.0;                                 // Nenhum ganho
                    totalPerda += aposta;                        // Adiciona a aposta ao total de perdas
                }

                // Exibe o total de ganhos e perdas até o momento e preferi colocar isso pra ter uma nocao de como tava sendo feito todos os calculos finais
                printf("Total de ganhos: R$ %.2f\n", totalGanho);
                printf("Total de perdas: R$ %.2f\n", totalPerda);
            }
        }
        else
        {
            printf("Opção inválida! Tente novamente.\n"); // Se a opção não for válida
        }
    }

    return 0; // Termina o programa e espero que a senhora tenha gostado e que tenha funcionado no seu note, bjao prof
}
