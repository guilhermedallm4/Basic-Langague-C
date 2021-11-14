#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define algoritimo(w) w >= '0' && w <= '9'



int main(){
	char conteudo[200], arq[6] = "90052", next[10], capturar;
	int up = 0, i;

	strcat(arq, ".txt");

	FILE *a = fopen(arq, "r");
	
	if(a == NULL){
		printf("ERRO ARQUIVO INVALIDO!!\n");
		exit(1);

	}else

	capturar = getc(a);

	while(capturar != EOF){

		if(algoritimo(capturar)){
			
			for(i = 0; capturar != EOF; i++){
				next[i] = capturar;
				conteudo[up] = capturar;
				capturar = getc(a);
				up++;

			}
			
			next[i] = '\0';
			up = 0;
			strcat(next, ".txt");
			fclose(a);
			strcpy(arq, next);
			a = fopen(arq, "r");

			if(a == NULL){
				printf("Não foi possível abrir o arquivo\n");
				exit(1);

			}

			capturar = getc(a);
			conteudo[up] = capturar;
			up++;

		}else{
			conteudo[up] = capturar; 
			up++;

		}
		
		capturar = getc(a);

	}

	conteudo[up] = '\0';

	for(int i = 0; conteudo[i] != '\0'; i++)
		printf("%c", conteudo[i]);

	fclose(a);
	

}