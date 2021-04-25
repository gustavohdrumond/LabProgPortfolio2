#include <stdio.h>
#include <locale.h> 

int main()
{
	setlocale(LC_ALL, "Portuguese");
    char nome_prod[100];			//Nome do Produto
    float quantidade[100];			//Quantidade do Produto
    float valor_unitario[100];		//Valor do Produto por unidade
    float percentual[100];			//Desconto aplicado de acordo com a �rea
    
    int i=0;
	int vtr=0;						//�ndice do vetor	
    
    int area_produto;				//�rea do produto
    float valor_base[100];			//Resultado da quantidade do produto multiplicado pelo seu valor unit�rio
    float valor_desconto[100];		//Resultado do valor base multiplicado pelo seu desconto (%)
    float valor_total[100];			//Resultado do valor base subtra�ndo o desconto aplicado
    
    char prosseguir;				//Vari�vel para decis�o de cadastramento de produtos ou exibi��o do relat�rio
	
	do
    {
    	//Entrada dos dados
        printf("\n Digite o NOME do produto: ");
        scanf("%s", &nome_prod[vtr]);

        printf("\n Digite a �REA do Produto: \n1 para INFORM�TICA - 2 para JOGOS - 3 para ELETR�NICOS \n");
        scanf("%i", &area_produto);

        printf("\n Digite a QUANTIDADE do produto: ");
        scanf("%f", &quantidade[vtr]);

        printf("\n Digite o VALOR UNIT�RIO do produto: ");
        scanf("%f", &valor_unitario[vtr]);
		
		//C�lculo dos valores de acordo com a �rea
        if (area_produto == 1)
        {
            percentual[vtr] = (0.05) ;
            valor_base[vtr] = (quantidade[vtr] * valor_unitario[vtr]);
            valor_desconto[vtr] = (valor_base[vtr] * percentual[vtr]);
            valor_total[vtr] = (valor_base[vtr] - valor_desconto[vtr]);
        }
        else
        {
            if (area_produto == 2)
            {
                percentual[vtr] = (0.08) ;
            	valor_base[vtr] = (quantidade[vtr] * valor_unitario[vtr]);
            	valor_desconto[vtr] = (valor_base[vtr] * percentual[vtr]);
            	valor_total[vtr] = (valor_base[vtr] - valor_desconto[vtr]);
            }
        else
        {
                if (area_produto == 3)
                {
                    percentual[vtr] = (0.10);
            		valor_base[vtr] = (quantidade[vtr] * valor_unitario[vtr]);
            		valor_desconto[vtr] = (valor_base[vtr] * percentual[vtr]);
            		valor_total[vtr] = (valor_base[vtr] - valor_desconto[vtr]);
                }
        }
        }
        
        //Mensagem de confirma��o para cadastramento de novo produto ou exibi��o do relat�rio final
        printf("\n Deseja continuar? Informe s para sim ou n para exibir o relat�rio final ");
        scanf("%s", &prosseguir);
        
        if (prosseguir !='n')
		{
        	vtr++;
		}
    } while (prosseguir != 'n');

	//Sa�da dos dados
	for (i; i <= vtr; i++)
    {
        printf("\n Nome do produto: %c",  nome_prod[i]);
        printf("\n Quantidade do produto: %.1f", quantidade[i]);
        printf("\n Valor Unitario do produto: %.2f", valor_unitario[i]);
        printf("\n Valor do Desconto do produto: %.2f", percentual[i]);
        printf("\n Valor Base do produto: %.2f", valor_base[i]);
        printf("\n Valor do Desconto do produto: %.2f", valor_desconto[i]);
        printf("\n Valor Total do produto: %.2f", valor_total[i]);
    }
    return 0;
}