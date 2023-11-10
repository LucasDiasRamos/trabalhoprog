#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 50

struct viaturas
{
    int id;
    char tipo;
    struct viaturas *prox;
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
void login();


void enfilerar(viaturas*&inicio,viaturas*&fim,int id_viatura,char tipo);


void enfilerar_prioridade(fila_prioridade*&inicio,fila_prioridade*&fim,char *descricao , char *localizacao);
void imprimir_prioridade(fila_prioridade*fila);

