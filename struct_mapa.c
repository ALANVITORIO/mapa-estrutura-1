

// Bibliotecas
#include <stdio.h>
#include <stdlib.h>
// Constantes
#define tamanho 100
#define E 0
#define D 1
#define R -1

// Estrutura
struct str_no
{
    char dado;
    int esq;
    int dir;
    int pai;
};
// Variáveis
struct str_no arvore[tamanho];
int lado, indice = 0;
int opt = -1;
char pai, no;
// Prototipação
void arvore_insere(int pai, char dado, int lado);
int arvore_procura(char dado);
void pre_ordem(int r);

// arvoreprocura
int arvore_procura(char dado)
{
    if (indice != 0)
    {
        for (int i = 0; i < indice; i++)
        {
            if (arvore[i].dado == dado)
            {
                return (i);
            }
        }
    }
    else
    {
        return (0);
    }
}

// Função principal

void pre_ordem(int r)
{
    if (r != -1)
    {
        printf("%d", arvore[r].dado);
        pre_ordem(arvore[r].esq);
        pre_ordem(arvore[r].dir);
    }
}
void main()
{

    arvore_insere(1, 2, R);
    arvore_insere(0, 2, E);
    arvore_insere(1, 1, E);

    return 0;
}
