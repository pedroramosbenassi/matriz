#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#define TRUE 1
#define FALSE 0



int main()
{

    char menu=0;
     int i=0;
    int j=0;
    int iposicao=0;
    int jposicao=0;
    float resultado=0;
    int flag1=TRUE;
    char siposicao[10];
    char sjposicao[10];
    char Nomedamatriz[10];
    for(int k=0; k<10; k++)
    {
        Nomedamatriz[k]=0;
    }
    FILE *fp;
    char nomedoarquivo[32];
    char check[10];
    float valorintensionado;
    int f;
    char texto;
    float soma=0;
    float valor=0;
    char x[10];

    while (menu!='z' && menu!='Z')
    {



    switch(menu)
    {
    //Inserir novcas matrizes
    case 'A':
        //limpeza de cache
    for(int f=0; f<=32; f++)
        {
         nomedoarquivo[f]=0;
         if(f<10)
         {
         Nomedamatriz[f]=0;
         siposicao[f]=0;
         sjposicao[f]=0;
        }
        }

        system("cls");
        printf("        _______________________________________________________________________________ \n");
        printf("        *                                                                             * \n");
        printf("        *       Digite o nome da matriz:                          (ate 10 caracteres) * \n");
        printf("        *                                ");
        fflush(stdin);
        scanf("%s", &Nomedamatriz);
        fflush(stdin);
        printf("        *                                                                             * \n");
        printf("        *       Digite o o numero de linhas e colunas da matriz                       * \n");
        printf("        *       Linha:");
        fflush(stdin);
        scanf("%d", &i );
        printf("        *       Coluna:");
        fflush(stdin);
        scanf("%d", &j );
        printf("        *                                                                             * \n");
        printf("        *_____________________________________________________________________________* \n");
        system ("pause");
        system("cls");
        break;







    case 'B':
                            //Editar termo da matriz
        system("cls");
        flag1=TRUE;
        if(i!=iposicao && j!=jposicao)
        {
        while (flag1==TRUE)
        {
            //posição do termo desejado
            printf("        _________________________________________________________________________________ \n");
            printf("        *                                                                               * \n");
            printf("        *       Digite a posicao (linha vs coluna) em que deseja adicionar um valor     * \n");
            fflush(stdin);
            printf("        *       Linha: ");
            scanf("%d",&iposicao);
            while(iposicao>=i )
            {
                system("cls");
                printf("ERROR 3 - DIGITE UM VELOR VÁLIDO MENOR QUE %d: ", i);
                fflush(stdin);
                scanf("%d", &iposicao);
                system("cls");
            printf("        _________________________________________________________________________________ \n");
            printf("        *                                                                               * \n");
            printf("        *       Digite a posicao (linha vs coluna) em que deseja adicionar um valor     * \n");
            printf("        *       Linha: %d                                                               * \n",iposicao);

            }
            printf("        *       Coluna: ");
            fflush(stdin);
            scanf("%d", &jposicao);
            while(jposicao>=j )
            {
                system("cls");
                printf("ERROR 4 - DIGITE UM VELOR VÁLIDO MENOR QUE %d: ", j);
                fflush(stdin);
                scanf("%d", &jposicao);
                system("cls");
            printf("        _________________________________________________________________________________ \n");
            printf("        *                                                                               * \n");
            printf("        *       Digite a posicao (linha vs coluna) em que deseja adicionar um valor     * \n");
            printf("        *       Linha: %d                                                               * \n",iposicao);
            printf("        *       Coluna: %d                                                              * \n",jposicao);

            }
            //transformar_arquivo

            itoa (iposicao,siposicao,10);
            itoa (jposicao,sjposicao,10);
            strncat(nomedoarquivo,Nomedamatriz, 10);
            strncat(nomedoarquivo,"_", 1);
            strncat(nomedoarquivo,siposicao,10);
            strncat(nomedoarquivo,"_", 1);
            strncat(nomedoarquivo,sjposicao,10);
            fp=fopen(nomedoarquivo, "w");



        printf("        *       Digite o valor para a posicao %d vs %d                                  * \n", iposicao, jposicao);
        printf("        *       Valor: ");
        scanf("%f", &valorintensionado);
        printf("        *                                                                               * \n");
        printf("        *_______________________________________________________________________________* \n");
        fprintf(fp,"%.2f", valorintensionado);
        fclose(fp);

        for(int f=0; f<=21; f++)
        {
         nomedoarquivo[f]=0;
         if(f<10)
         {
         siposicao[f]=0;
         sjposicao[f]=0;
        }
        }
        printf("        _____________________________________________ \n");
        printf("        *                                           * \n");
        printf("        *       Deseja adicionar outro termo?       * \n");
        printf("        *                   (S/N)                   * \n");
        printf("        *___________________________________________* \n");

        fflush(stdin);
        scanf("%c", &menu);

        if (menu=='N')
        {
            flag1=FALSE;
        }
        system("pause");
        system("cls");
        }
        }
        else
        {
            printf("\n\n\t Nao hA nenhuma matriz no catAlogo OU DIGITASTE LETRAS NAS OPCOES DE N LINHAS OU N COLUNAS, por favor retorne a opcao A \n");
            fflush(stdin);
            system("pause");
            system("cls");
        }

        break;




        case 'C':
            flag1=TRUE;
            if(i!=iposicao && j!=jposicao)
            {
            while(flag1==TRUE)
            {
            printf("        _____________________________________________ \n");
            printf("        *                                           * \n");
            printf("        *       Qual termo gostaria de Consultar?   * \n");
            printf("        *       Linnha:");
            fflush(stdin);
            scanf("%d", &iposicao);
            while(iposicao>=i ||isalpha(iposicao) )
            {
                system("cls");
                printf("ERROR 3 - DIGITE UM VELOR VÁLIDO MENOR QUE %d: ", i);
                fflush(stdin);
                scanf("%d", &iposicao);
                system("cls");
            printf("        _____________________________________________ \n");
            printf("        *                                           * \n");
            printf("        *       Qual termo gostaria de Consultar?   * \n");
            printf("        *       Linnha: %d                          * \n", iposicao);
            }

            printf("        *       Coluna:");
            fflush(stdin);
            scanf("%d", &jposicao);
            fflush(stdin);

            while(jposicao>=j ||isalpha(jposicao) )
            {
                system("cls");
                printf("ERROR 3 - DIGITE UM VELOR VÁLIDO MENOR QUE %d: ", j);
                fflush(stdin);
                scanf("%d", &jposicao);
                system("cls");
            printf("        _____________________________________________ \n");
            printf("        *                                           * \n");
            printf("        *       Qual termo gostaria de Consultar?   * \n");
            printf("        *       Linnha: %d                          * \n", iposicao);
            printf("        *       Coluna: %d                          * \n", jposicao);
            }
            printf("        *                                           * \n");

                    for(f=0; f<32; f++)
                    {
                    nomedoarquivo[f]=0;
                    if(f<10)
                    {
                    siposicao[f]=0;
                    sjposicao[f]=0;
                    }
                    }
                //transformar arquivo()
                itoa (iposicao,siposicao,10);
                itoa (jposicao,sjposicao,10);
                strncat(nomedoarquivo,Nomedamatriz, 10);
                strncat(nomedoarquivo,"_",1);
                strncat(nomedoarquivo,siposicao,10);
                strncat(nomedoarquivo,"_", 1);
                strncat(nomedoarquivo,sjposicao,10);
                fp=fopen(nomedoarquivo, "r");


                if(fp==NULL)
                {
                printf("        *   Houve um provlema ao abrir o arquivo    * \n");
                printf("        *            Tente mais tarde :/            * \n");
                printf("        *___________________________________________* \n");
                fclose(fp);
                }
                else
                {
                    fscanf(fp,"%f", &valorintensionado);
                    printf("        *  O valor nesta posicao eh: %f             * \n", valorintensionado);
                    printf("        *___________________________________________* \n");
                    fclose(fp);
                }
        printf("        _____________________________________________ \n");
        printf("        *                                           * \n");
        printf("        *       Deseja consultar outro termo?       * \n");
        printf("        *                   (S/N)                   * \n");
        printf("        *___________________________________________* \n");

        fflush(stdin);
        scanf("%c", &menu);

        if (menu=='N')
        {
            flag1=FALSE;
        }
        system("pause");
        }
        break;
            }
                break;





                //Remover matriz

            case 'D':
                if(i!=iposicao && j!=jposicao)
                {

                printf("        ____________________________________________________ \n");
                printf("        *                                                  * \n");
                printf("        *       Deseja realmente apagar a Matriz: %s       * \n",Nomedamatriz);
                printf("        *                  (S/N)                           * \n");
                printf("        *                   ");
                fflush(stdin);
                scanf("%c", &menu);

                if(menu=='S')
                {
                fflush(stdin);
                 for(int ii=0; ii<i; ii++)
                    {
                        for(int jj=0; jj<j ; jj++)
                            {
                    for(f=0; f<=32; f++)
                    {
                    nomedoarquivo[f]=0;
                    if(f<10)
                    {
                    siposicao[f]=0;
                    sjposicao[f]=0;
                    }
                    }
                    //transformar_arquivo()
                    itoa (ii,siposicao,10);
                    itoa (jj,sjposicao,10);
                    strncat(nomedoarquivo,Nomedamatriz,10);
                    strncat(nomedoarquivo,"_", 1);
                    strncat(nomedoarquivo,siposicao,10);
                    strncat(nomedoarquivo,"_", 1);
                    strncat(nomedoarquivo,sjposicao,10);


                    fp=fopen(nomedoarquivo, "r");
                   if(fp!=NULL)
                    {
                        fclose(fp);
                        remove(nomedoarquivo);
                    }

                    }
                    }

                    printf("        *                                                  * \n");
                    printf("        *                Matriz apagada!                   * \n");
                    printf("        *__________________________________________________* \n");
                    }
                    else
                    {
                    printf("        *                                                  * \n");
                    printf("        *                  OPERACAO ABORTADA               * \n");
                    printf("        *__________________________________________________* \n");
                    }
                    }
                    break;





            case 'E':

                printf("        _________________________________________________________________ \n");
                printf("        *                                                               * \n");
                printf("        *       Selecione uma linha ou coluna para fazer a somatória    * \n");
                printf("        *                        (L-Linha/ C-Coluna)                    * \n");
                printf("        *                              ");
                char choice;
                fflush(stdin);
                scanf("%c", &choice);
                printf("        *                  Numero da linha/coluna: ");
                fflush(stdin);

                if(choice=='L')
                {
                printf("        *   O valor da soma de todos os elementos da linha e: %f        * \n");
                printf("        *_______________________________________________________________* \n");
                }



                 if(choice=='C'){
                 printf("        *   O valor da soma de todos os elementos da coluna e: %f       * \n");
                 printf("        *_______________________________________________________________* \n");
                                }
                break;







            }



    printf("        __________________________________________________ \n");
    printf("        *                                                * \n");
    printf("        *                    MENU                        * \n");
    printf("        *                                                * \n");
    printf("        *            A - Adicionar matriz                * \n");
    printf("        *            B - Aditar termo da matriz          * \n");
    printf("        *            C - Consultar um termo da matriz    * \n");
    printf("        *            D - Excluir a matriz                * \n");
    printf("        *            E - somar os temos da linha ou col  * \n");
    printf("        *            Z - Sair                            * \n");
    printf("        *                                                * \n");
    printf("        *________________________________________________* \n");
    fflush(stdin);
    scanf("%c", &menu);
}









 return 0;

}
