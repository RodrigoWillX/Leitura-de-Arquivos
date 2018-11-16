#include <stdio.h>
#include <conio.h>

int main(void) {
	
	
	FILE *arq;
	char linha[100];
	char *result;
	int i=1;
	
	//abre um arquivo texto para leitura
	arq= fopen("arquivo.txt","rt");
	if (arq==NULL) // se houver erro na abertura
	{
		
		printf("Problemas na abertura do arquivo \n");
	}
	
	while(!feof(arq)) 
	{
		//lê uma linha (inclusive com o '\n').
		result=fgets(linha,100,arq); // o 'fgets' lê até 99 caracteres
		if (result) // se foi possivel ler
		printf("Linha %d: %s",i,linha);
		i++;
	}	
	
	fclose(arq);
	return 0;
	

} 
