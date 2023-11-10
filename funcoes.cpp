#include "funcoes.h"

void menu()
{

    int op;

    do
    {
        printf("         SPM - Funcionalidades          ");
        printf("\n1 - Viatura Login ");
        printf("      2 - Viatura em Uso ");
        printf("\n3 - COPOM ");
        printf("\n4 - Policial Militar ");
        printf("\n5 - Ofical ");
        printf("\n6 - Comandante Geral ");
        printf("      0 - Encerrar programa");

        printf("\nOpção: ");
        scanf("%d", &op);

        if (op == 1)
            menu_login_viatura();
        if (op == 2)
            menu_viatura_uso();
        if (op == 3)
            menu_COPOM();
        if (op == 4)
            login();
        if (op == 5)
            printf("Menu 5");
        if (op == 6)
            printf("Menu 6");

    } while (op != 0);
}

void menu_login_viatura()
{

    int op, cod_viatura, cod_viatura_A, qtd_pms = 1;
    int encontrado = 0;
    char id_pm[MAX];
    char tipo_viatura[MAX];

    printf("         SPM - Viatura Login          ");
    printf("\n1 - Policia Regular ");
    printf("\n2 - Policia Especializada ");

    printf("\nOpção: ");
    scanf("%d", &op);

    if (op == 1)
    {
        while (1)
        {

            printf("         SPM - Viatura Login          ");
            printf("\n");

            printf("\nCódigo da Viatura: ");
            scanf("%d", &cod_viatura);
        }

            
    }
}



void menu_viatura_uso()
{

    int id_viatura;

    printf("         SPM - Viatura Login          ");
    printf("Identificador da Viatura: ");
    scanf("%d", &id_viatura);
}

void menu_COPOM()
{

    int op, qtd_viaturas;
    char descricao[MAX], localizacao[MAX];

    printf("         SPM - COPOM          ");

    printf("\n1 - Policia Normal");
    printf("    2 - Policia Especializada: ");
    scanf("%d", &op);

    printf("\n");
    printf("Viaturas Necessárias: ");
    scanf("%d", &qtd_viaturas);

    printf("\n");
    printf("Descrição: ");
    scanf("%[^\n]", descricao);

    printf("\n");
    printf("Localização: ");
    scanf("%[^\n]", localizacao);

    if (op == 1)
    {
        fila_prioridade *inicio = NULL;
        fila_prioridade *fim = NULL;

        printf("1 - Prioridade\n");
        printf("2 - Não prioritária\n");
        scanf("%d", &op);
        if (op == 1)
        {
            enfilerar_prioridade(inicio, fim, descricao, localizacao);
        }
    }
}

void login()
{

    char nome_guerra[MAX], username[MAX], cidade[MAX], patente[MAX], password[MAX];
    int idade;

    printf("         SPM - LOGIN         ");
    printf("\n");

    printf("Nome de Guerra: ");
    scanf("%s", username);

    FILE *arquivo = fopen("policiais.txt", "r");

    if (arquivo == NULL)
    {
        printf("Erro ao acessar o Banco de dados\n");
    }
    else
    {

        while (fscanf(arquivo, "%s", nome_guerra) == 1)
        {
            fscanf(arquivo, "%s", cidade);
            fscanf(arquivo, "%d", &idade);
            fscanf(arquivo, "%s", patente);
            fscanf(arquivo, "%s", password);

            if (strcmp(nome_guerra, username) == 0)
            {

                printf("%s\n", nome_guerra);
                printf("%s\n", cidade);
                printf("%d\n", idade);
                printf("%s\n", patente);
                printf("%s\n", password);

                break;
            }
        }

        fclose(arquivo);
    }
}

void leitura_viatura(char *arquivo,viaturas*&viaturas)
{
    FILE *arq = fopen(arquivo, "r");

    if (arq == NULL)
    {
        printf("Erro ao encontrar a viatura no Banco de Dados\n");
        return;
    }
    else
    {

        int id_viatura;
        char tipo[MAX];

        while (feof(arq) == 0)
        {
            fscanf(arq, "%d", &id_viatura);
            fscanf(arq, "%[^\n]",tipo);

        }

        
    }

    fclose(arq);
}