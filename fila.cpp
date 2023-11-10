#include "funcoes.h"

void enfilerar(viaturas*&inicio,viaturas*&fim,int id_viatura,char tipo){
    viaturas *nova;
    
    nova =(viaturas*)malloc(sizeof(viaturas));

    nova->id = id_viatura;
    nova->tipo = tipo;
    nova->prox = NULL;

    if(inicio == NULL)
        inicio = fim = nova;

    else{
        fim->prox = nova;
        fim = nova;
    }


}



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


/*void enfilerar_chamadas(viaturas*&inicio,viaturas*&fim,char *descricao , char *localizacao){
    viaturas *nova;
    
    nova =(viaturas*)malloc(sizeof(viaturas));

    nova->descricao = descricao;
    nova->localizacao = localizacao;
    nova->prox = NULL;

    if(inicio == NULL)
        inicio = fim = nova;
    else{
        fim->prox = nova;
        fim = nova;
    }


}*/


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