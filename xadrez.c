#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    int bispo = 1;
    int torre = 1;
    int rainha = 1;
    int cavalo_vertical;
    int cavalo_horizontal;
    int selecao;

    do
    {
        //menu interativo
        printf("----------XADREZ----------\n");
        printf("*Peças de xadrez*\n");
        printf("\n");
        printf("1- Bispo\n");
        printf("2- Torre\n");
        printf("3- Rainha\n");
        printf("4- Cavalo\n");
        printf("\n");
        printf("Selecione a peça que você deseja movimentar: ");
        scanf("%d", &selecao);
        printf("\n");

        //switch para seleção da peça
        switch (selecao)
        {
        case 1:
            // Implementação de Movimentação do Bispo
            // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
            printf("---Bispo--- \n");
            printf("\n");
            printf("*Você está movimentando o Bispo*\n");
            printf("Você poderá movimentar o bispo em até 5 casas para a diagonal.\n");
            printf("\n");
            while (bispo <= 5){
                printf("Movimentando a %dª casa para direita e a %dª casa para cima(diagonal).\n", bispo, bispo);
                printf("%d / 5 casas movidas para a diagonal.\n", bispo);
                printf("\n");
                bispo++;
            }
            printf("Total de casas movidas: %d\n", bispo + bispo);
            printf("----------Fim do programa----------\n");
        break;

        case 2:
        // Implementação de Movimentação da Torre
        // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

            printf("---Torre--- \n");
            printf("\n");
            printf("*Você está movimentando a Torre*\n");
            printf("Você poderá movimentar a torre em até 5 casas para a direita.\n");
            printf("\n");
            while (torre <= 5)
            {
                printf("Movimentando %dª casa para direita.\n", torre);
                printf("%d / 5 casas movidas para a direita.\n", torre);
                printf("\n");
                torre++;
            }
            printf("----------Fim do programa----------\n");
        break;

        case 3:
            // Implementação de Movimentação da Rainha
            // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

            printf("---Rainha--- \n");
            printf("\n");
            printf("*Você está movimentando a Rainha*\n");
            printf("Você poderá movimentar a rainha em até 8 casas para a esquerda.\n");
            printf("\n");
            while (rainha <= 8)
            {
                printf("Movimentando %dª casa para esquerda.\n", rainha);
                printf("%d / 8 casas movidas para a esquerda.\n", rainha);
                printf("\n");
                rainha++;
            }
        break;

        // Nível Aventureiro - Movimentação do Cavalo
        case 4: 
            // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
            // Um loop pode representar a movimentação horizontal e outro vertical.
            printf("---Cavalo--- \n");
            printf("\n");
            printf("*Você está movimentando o cavalo*\n");
            printf("Você poderá movimentar cavalo em formato de L.\n");
            printf("\n");
            for (cavalo_vertical = 1; cavalo_vertical < 2; cavalo_vertical++)
            {
                printf("*Horizontal*\n");
                printf("\n");
                for (cavalo_horizontal = 0; cavalo_horizontal < 2; cavalo_horizontal++)
                {
                   printf("Movimentando %dª casa para a horizontal (em L).\n", cavalo_horizontal + 1);
                   printf("%d / 2 casas movidas para a horizontal.\n", cavalo_horizontal + 1);
                }
                printf("\n");
                printf("*Vertical*\n");
                printf("Movimentando %dª casa para a vertical (em L).\n", cavalo_vertical);
                printf("%d / 1 casas movidas para a vertical.\n", cavalo_vertical);
                printf("\n");
                printf("Total de casas movidas: %d", cavalo_vertical + cavalo_horizontal);
                printf("\n");
            }
            



        break;
            printf("----------Fim do programa----------\n");
        break;
        
        default:
            printf("Opção inválida, tente novamente.\n");
            printf("\n");
        break;
        }
    } while (selecao < 1 || selecao > 4);
    //verificando o o número digitado correspondem aos cases do switch
    

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}

