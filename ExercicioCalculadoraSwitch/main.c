#include <stdio.h>
#include <locale.h>

int main(){
	
	//variavel
	float n1,n2,resuloperacao;
	char operador;
	
	setlocale(LC_ALL,"portuguese");
	
	//entrada de dados
	printf("------------------------\n");
	printf("MASTER CALC 2025 PRO\n");
	printf("------------------------\n");
	printf("Informe o N1: ");
	scanf("%f",&n1);
	printf("Informe a operação: ");
	scanf(" %c",&operador);
	printf("Informe o N2: ");
	scanf("%f",&n2);
	
	//estrutura condicional , para validação da operação 
	switch(operador){
		
		case '+':
			resuloperacao = n1 + n2;
			printf("O resultado da soma: %.2f",resuloperacao);
			//printf("O resultado da soma: %.2f",n1 + n2);
		break;
		
		case '-':
			resuloperacao = n1 - n2;
			printf("O resultado da subtração: %.2f",resuloperacao);
			//printf("O resultado da soma: %.2f",n1 - n2);
		break;
		
		case '*':
			resuloperacao = n1 * n2;
			printf("O resultado da multiplicação: %.2f",resuloperacao);
			//printf("O resultado da soma: %.2f",n1 * n2);
		break;
		
		case '/':
			if(n2 == 0){ // CASO O USUARIO INSIRAR 0 NO N2 ELE PRECISA DAR ERRO
				printf("ERRO");
			}else{
				resuloperacao = n1 / n2;
				printf("O resultado da divisão: %.2f",resuloperacao);
				//printf("O resultado da soma: %.2f",n1 / n2);
			}
		break;
		default:
			printf("Operador não encontrado");
	}
	
	
	return 0;
}


