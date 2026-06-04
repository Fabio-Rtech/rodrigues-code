#include <stdio.h>

int main() {
	
	int codigo, quantidade;
	float preco, subtotal = 0.0, taxa, total;
	char continuar = 's';
	
		do{
			printf("informe o CODIGO:\n");
				scanf("%d", &codigo);
			printf("informe o PRECO:\n");
				scanf("%f", &preco);
			printf("informe o QUANTIDADE:\n");
				scanf("%d", &quantidade);
				
				//Perguntando se deseja inserir mais itens
				printf("\ndeseja continuar ? (S/N):");
					scanf(" %c", & continuar);
				
				//Calculo do subtotal pela quantidade.
				subtotal += preco * quantidade;
				
		} while (continuar =='S' || continuar == 's');
			
				// Calaulos para a saida.
				taxa = subtotal * 0.10; //Taxa de serviço eh = 10%.
				total = subtotal + taxa;
			
				//Saida
		printf("SUBTOTAL: %.2f\n", subtotal);
		printf("TAXA DE SERVICO: %.2f\n", taxa);
		printf("TOTAL: %.2f\n", total);
	
	return 0;
}