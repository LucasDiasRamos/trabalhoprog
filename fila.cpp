#include "funcoes.h"

void enfilerar_prioridade(fila_prioridade*&inicio,fila_prioridade*&fim,char* descricao , char* localizacao){
    fila_prioridade *nova;
    
    nova =(fila_prioridade*)malloc(sizeof(fila_prioridade));

    nova->descricao = descricao;
    nova->localizacao = localizacao;
    nova->prox = NULL;

    if(inicio == NULL)
        inicio = fim = nova;
    else{
        fim->prox = nova;
        fim = nova;
    }


}


void enfilerar(fila_chamadas*&inicio,fila_chamadas*&fim,char *descricao , char *localizacao){
    fila_chamadas *nova;
    
    nova =(fila_chamadas*)malloc(sizeof(fila_chamadas));

    nova->descricao = descricao;
    nova->localizacao = localizacao;
    nova->prox = NULL;

    if(inicio == NULL)
        inicio = fim = nova;
    else{
        fim->prox = nova;
        fim = nova;
    }


}


void imprimir_prioridade(fila_prioridade*fila){
    fila_prioridade *p;
    
    for(p = fila; p!= NULL; p = p->prox){
        printf("%s ",p->descricao);
        printf("%s ",p->localizacao);
            
    }
}

void imprimir(fila_prioridade*fila){
    fila_prioridade *p;
    
    for(p = fila; p!= NULL; p = p->prox){
        printf("%s ",p->descricao);
        printf("%s ",p->localizacao);
            
    }
}