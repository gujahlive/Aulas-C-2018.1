#include<stdio.h>
#include<string.h>
struct TipoData{
	int dia,mes,ano;
}data;
typedef struct{
	int anoLancamento,qtPortas;
	char marca[20];
	
	float preco;
	
}TipoCarro;
main(){
	TipoCarro *ResolveMarca;
	int n,i,carNew,carOld;
	float mediaCars,Sum=0;
	
	printf("Quantos carros deseja: ");
	scanf("%d",&n);
	 TipoCarro Carro[n],CarroMaisNovo;
	for(i=0;i<n;i++){
		fflush(stdin);
		printf("Ano Lancamento: ");
		scanf("%d",&Carro[i].anoLancamento);
		printf("Preco: ");
		scanf("%f",&Carro[i].preco);
		printf("Quantidade de portas: ");
		scanf("%d",&Carro[i].qtPortas);
		printf("Marca: ");
		scanf("%d",&Carro[i].marca);
		printf("\n");
		carNew = Carro[i].anoLancamento;
		carOld = Carro[i].anoLancamento;
		Sum += Carro[i].preco;
		fflush(stdin);
	}
	
	for (i=0;i<n;i++){
		if(Carro[i].anoLancamento < carNew){
			CarroMaisNovo.anoLancamento = Carro[i].anoLancamento;
			fflush(stdin);
			//CarroMaisNovo.marca = &Carro.marca;  
			strcpy(ResolveMarca.marca,Carro[i].marca);// deveria passar sem ponteiro.
			fflush(stdin);
			CarroMaisNovo.preco = Carro[i].preco;
			CarroMaisNovo.qtPortas = Carro[i].qtPortas;
		}
		
	}
	printf("confere: \n\n");
	for(i=0;i<n;i++){
		printf("Ano Lancamento: %d\n",Carro[i].anoLancamento);
		printf("Preco: %.2f\n",Carro[i].preco);
		printf("Quantidade de portas: %d\n",Carro[i].qtPortas);
		printf("Marca: %s\n",Carro[i].marca);
		printf("\n");
	}
	mediaCars = Sum/n;
	
	printf("media dos precos: %.2f\n\n",mediaCars);
	printf("O carro mais novo eh: %d\n\n",carNew);//imprimindo ano do carro mais novo
	printf("Dados do carro mais novo\n");
	printf("Ano Lancamento: %d\n",CarroMaisNovo.anoLancamento);
	printf("Preco: %.2f\n",CarroMaisNovo.preco);
	printf("Marca: %s\n",CarroMaisNovo.marca);
	printf("Quantidade de Porta: %d\n",CarroMaisNovo.qtPortas);


	
	
	system("pause");
}
