#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10
 
int main() {

    int matriz[LINHAS][COLUNAS];

    for (int i = 0; i < LINHAS; i++)
    {
        for (int j = 0; j < COLUNAS; j++)
        {
            matriz[i][j] = 0;
        }
        
    }
    
    for (int i = 6; i < 9; i++)
    {
        for (int j = 5; j > 2 ; j--)
        {
            if (i + j == 11)
            {
                matriz[i][j] = 3;
            }
            
        }
        
    }

    for (int i = 3; i < 6; i++)
    {
        for (int j = 1; j < 4 ; j++)
        {
            if (i - j == 2)
            {
                matriz[i][j] = 3;
            }
            
        }
        
    }
    
    for (int i = 0; i < LINHAS; i++)
    {
        for (int j = 0; j < COLUNAS; j++)
        {
            printf(" %d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    

    return 0;
}