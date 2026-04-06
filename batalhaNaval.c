#include <stdio.h>
 
int main() {
    
    //Criando as colunas utilizando um array de caracteres
    char colunas[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    
    //Criando as linhas utilizando um array de strings para deixar o espaçamento correto e ficar mais organizado
    char *linhas[10] = {" 1", " 2", " 3", " 4", " 5", " 6", " 7", " 8", " 9", "10"};
    
    //Criando o tabuleiro utilizando uma matriz 10x10 e o valor 0(zero) para representar a água
    int tabuleiro[10][10];
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            tabuleiro[i][j] = 0;
        }
        
    }
    //Criando os navios utilizando um vetor (array unidimensional) de tamanho 3 e o valor 3 para representá-los
    int navio1[3] = {3, 3, 3};
    int navio2[3] = {3, 3, 3};
   

    //Posicionando os navios no tabuleiro nas posições horizontal e vertical
    tabuleiro[2][2] = navio1[0];
    tabuleiro[2][3] = navio1[1];
    tabuleiro[2][4] = navio1[2];

    tabuleiro[5][7] = navio2[0];
    tabuleiro[6][7] = navio2[1];
    tabuleiro[7][7] = navio2[2];

    //Posicionando os navios no tabuleiro na posição diagonal utilizando loops aninhados
        for (int i = 6; i < 9; i++)
    {
        for (int j = 5; j > 2 ; j--)
        {
            if (i + j == 11)
            {
                tabuleiro[i][j] = 3;
            }
            
        }
        
    }

    for (int i = 3; i < 6; i++)
    {
        for (int j = 1; j < 4 ; j++)
        {
            if (i - j == 2)
            {
                tabuleiro[i][j] = 3;
            }
            
        }
        
    }

    //Imprimindo o cabeçalho e um espaço para alinhamento das colunas
    printf("  ***TABULEIRO BATALHA NAVAL*** \n");
    printf("  ");
    
    //Imprimindo as letras que representam as colunas
    for (int i = 0; i < 10; i++)
    {
        printf("  %c", colunas[i]);
    }
    printf("\n");
    
    //Imprimindo as linhas e o tabuleiro com um loop aninhado
    for (int j = 0; j < 10; j++)
    {
        printf("%s ", linhas[j]);
        for (int k = 0; k < 10; k++)
        {
            printf(" %d ", tabuleiro[j][k]);
        }
        printf("\n");
    }
    
    

    return 0;
}