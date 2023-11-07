#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 50


struct fila_chamadas
{
    char *descricao;
    char *localizacao;
    struct fila_chamadas *prox;
};

struct fila_prioridade
{
    char *descricao;
    char *localizacao;
    struct fila_prioridade *prox;
};




void menu();
void menu_login_viatura();
void menu_viatura_uso();
void menu_COPOM();



void enfilerar_prioridade(fila_prioridade*&inicio,fila_prioridade*&fim,char *descricao , char *localizacao);
void imprimir_prioridade(fila_prioridade*fila);

void enfilerar(fila_chamadas*&inicio,fila_chamadas*&fim,char *descricao , char *localizacao);
void imprimir(fila_chamadas*fila);