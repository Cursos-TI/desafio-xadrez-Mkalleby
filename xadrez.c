#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

//recursividade bispo
void bispo(int movimentacao_bispo){

    for (int i = 0; i < 1; i++)
    {
        for (movimentacao_bispo = 1; movimentacao_bispo <=5; movimentacao_bispo++)
        {
        printf("Movimentando a %dª casa para direita e a %dª casa para cima(diagonal).\n", movimentacao_bispo, movimentacao_bispo);
        printf("%d / 5 casas movidas para a diagonal.\n", movimentacao_bispo);
        printf("Total de casas movidas atá o momento: %d\n", movimentacao_bispo + movimentacao_bispo);
        printf("\n");      
        }
    }
            
}

//recursividade torre
void torre(int movimentacao_torre){
    if (movimentacao_torre <= 5)
    {
        printf("Movimentando %dª casa para direita.\n", movimentacao_torre);
        printf("%d / 5 casas movidas para a direita.\n", movimentacao_torre);
        printf("\n");
        //incrementando
        torre(movimentacao_torre + 1);
    }
    
}

//recursividade rainha
void rainha(int movimentacao_rainha){
    if (movimentacao_rainha <= 8)
    {
        printf("Movimentando %dª casa para esquerda.\n", movimentacao_rainha);
        printf("%d / 8 casas movidas para a esquerda.\n", movimentacao_rainha);
        printf("\n");
        //incrementando
        rainha(movimentacao_rainha + 1);
    }
    
}

//recursividade cavalo
void cavalo(int movimentacao_cavalo){;
    for (int cavalo_direita = 1, cavalo_cima = 1; cavalo_direita < 3, cavalo_cima < 3; cavalo_direita++, cavalo_cima++)
    {
        printf("*cima*\n");
        printf("Movimentando %dª casa para cima (em L).\n", cavalo_cima);
        printf("%d / 2 casas movidas para a cima.\n", cavalo_cima);
        printf("\n");
        
        //verificando se a variavel "cavalo_direita" ja fez 2 loops junto com a "cavalo_cima"
        if (cavalo_direita == 2)
        {
            //decrementando o valor da variavel "cavalo_direita"
            cavalo_direita--;
            printf("*Direita*\n");
            printf("Movimentando %dª casa para a direita (em L).\n", cavalo_direita);
            printf("%d / 1 casas movidas para a direita.\n", cavalo_direita);
            printf("\n");
            printf("Total de casas movidas: %d\n", cavalo_cima + cavalo_direita);
            printf("\n");
            //impedindo que a variavel "cavalo_direita" faça outro loop
            break;

            //fazendo com que a variável "cavalo_cima" ignore o break acima e continue fazendo seu último loop
            if (cavalo_cima == 2)
            {
                continue;
            }
            
        }
    }
}

int main() {
//variáveis
    int valor_bispo;
    int valor_torre;
    int valor_rainha;
    int valor_cavalo;
    int selecao;

    //menu interativo
    do
    {
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
            //defininfo valor da variavel
            valor_bispo = 1;
            printf("---Bispo--- \n");
            printf("\n");
            printf("*Você está movimentando o Bispo*\n");
            printf("Você poderá movimentar o bispo em até 5 casas para a diagonal.\n");
            printf("\n");
            //chamando o procedimento
            bispo(valor_bispo);
            printf("----------Fim do programa----------\n");
        break;

        case 2:
            //definindo valor da variável
            valor_torre = 1;
            printf("---Torre--- \n");
            printf("\n");
            printf("*Você está movimentando a Torre*\n");
            printf("Você poderá movimentar a torre em até 5 casas para a direita.\n");
            printf("\n");
            //chamando o procedimento
            torre(valor_torre);
            printf("----------Fim do programa----------\n");
        break;

        case 3:
            //definindo valor da variável
            valor_rainha = 1;
            printf("---Rainha--- \n");
            printf("\n");
            printf("*Você está movimentando a Rainha*\n");
            printf("Você poderá movimentar a rainha em até 8 casas para a esquerda.\n");
            printf("\n");
            //chamando o procedimento
            rainha(valor_rainha);
            printf("----------Fim do programa----------\n");
        break;

        case 4: 
            printf("---Cavalo--- \n");
            printf("\n");
            printf("*Você está movimentando o cavalo*\n");
            printf("Você poderá movimentar cavalo em formato de L.\n");
            printf("\n");
            //chamando o procedimento
            cavalo(valor_cavalo);
            printf("----------Fim do programa----------\n");
        break;
        
        default:
            printf("Opção inválida, tente novamente.\n");
            printf("\n");
        break;
        //fim do switch para escolher a peça
        }
    //verificando o o número digitado correspondem aos cases do switch
    } while (selecao < 1 || selecao > 4);
    //fim do menu interativo

    return 0;
}

