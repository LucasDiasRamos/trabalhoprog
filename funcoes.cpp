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
            printf("Menu 4");
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

            FILE *arquivo = fopen("viaturas.txt", "r");

            if (arquivo == NULL)
            {
                printf("Erro ao encontrar a viatura no Banco de Dados\n");
                return;
            }
            else
            {
                while (fscanf(arquivo, "%d %s", &cod_viatura_A, tipo_viatura) == 2)
                {
                    if (cod_viatura_A == cod_viatura && strcmp(tipo_viatura, "regular") == 0)
                    {
                        encontrado = 1;
                        break;
                    }
                }

                fclose(arquivo);

                if (encontrado)
                {
                    printf("Viatura encontrada\n");
                    break;
            
                }
                else{
                    printf("Viatura não é do tipo correto\n");
                }
            }
            
        }
            printf("\n");
            printf("Quantidade de PMs: ");
            scanf("%d", &qtd_pms);
            printf("\n");
            printf("         SPM - Viatura Login          ");

            if (qtd_pms < 2)
                printf("\nAutorização negada poucos PMs\n");
            else if (qtd_pms > 4)
                printf("\nAutorizaçãoo negada muitos PMs\n");

            else
            {
                printf("\n");
                for (int i = 0; i < qtd_pms; i++)
                {
                    printf("Identificação dos PM %d: ", i + 1);
                    scanf(" %[^\n]", id_pm);
                }
                printf("         SPM - Viatura Estado Neutro        ");
                printf("\n1 - Apto para atender ocorrencia");
                printf("\n2 - Cancelar Embarcação");
                printf("\nOpção: ");
                scanf("%d", &op);
                if (op == 1)
                {
                    printf("1");
                }
                if (op == 2)
                    return;
            }
        
    }

    if (op == 2)
    {
        while (1)
        {

            printf("         SPM - Viatura Login          ");
            printf("\n");

            printf("\nCódigo da Viatura: ");
            scanf("%d", &cod_viatura);

            FILE *arquivo = fopen("viaturas.txt", "r");

            if (arquivo == NULL)
            {
                printf("Erro ao encontrar a viatura no Banco de Dados\n");
                return;
            }
            else
            {
                while (fscanf(arquivo, "%d %s", &cod_viatura_A, tipo_viatura) == 2)
                {
                    if (cod_viatura_A == cod_viatura && strcmp(tipo_viatura, "especializada") == 0)
                    {
                        encontrado = 1;
                        break;
                    }
                }

                fclose(arquivo);

                if (encontrado)
                {
                    printf("Viatura encontrada\n");
                    break;
            
                }
                else{
                    printf("Viatura nãp é do tipo correto\n");
                }
            }
            
        }
            printf("\n");
            printf("Quantidade de PMs: ");
            scanf("%d", &qtd_pms);
            printf("\n");
            printf("         SPM - Viatura Login          ");

            if (qtd_pms != 4 )
                printf("\nAutorizaçãoo negada necessita-se de EXATAMENTE 4 PMs\n");

            else
            {
                printf("\n");
                for (int i = 0; i < qtd_pms; i++)
                {
                    printf("Identificação dos PM %d: ", i + 1);
                    scanf(" %[^\n]", id_pm);
                }
                printf("         SPM - Viatura Estado Neutro        ");
                printf("\n1 - Apto para atender ocorrencia");
                printf("\n2 - Cancelar Embarcacao");
                printf("\nOpção: ");
                scanf("%d", &op);
                if (op == 1)
                {
                    printf("1");
                }
                if (op == 2)
                    return;
            }
        
    }
}

void menu_viatura_uso(){

    int id_viatura;

    printf("         SPM - Viatura Login          ");
    printf("Identificador da Viatura: ");
    scanf("%d",&id_viatura);


}


void menu_COPOM(){

    int op,qtd_viaturas;
    char descricao[MAX], localizacao[MAX];

    printf("         SPM - COPOM          ");
    
    printf("\n1 - Policia Normal");
    printf("    2 - Policia Especializada: ");
    scanf("%d",&op);

    printf("\n");
    printf("Viaturas Necessárias: ");
    scanf("%d",&qtd_viaturas);

    printf("\n");
    printf("Descrição: ");
    scanf("%[^\n]",descricao);

    printf("\n");
    printf("Localização: ");
    scanf("%[^\n]",localizacao);

    if(op == 1){
        fila_prioridade *inicio = NULL;
        fila_prioridade *fim = NULL;


        printf("1 - Prioridade\n");
        printf("2 - Não prioritária\n");
        scanf("%d",&op);
        if(op == 1)
        {
            enfilerar_prioridade(inicio,fim,descricao,localizacao);
        }

        

    }



}



