#include<stdio.h>
#include<stdlib.h>
#define MAIUSCULA(c) c >= 'A' && c <= 'Z'
#define MINUSCULA(c) c >= 'a' && c <= 'z'

int main (){
	FILE *arq;

	char letter, lower_case[6000], condicional[0];
	//lower_case será alocado dinamicamente
	int low = 0, up;
	//Contador Letras para armazenar

	arq = fopen("desafio.txt", "r");

	if(arq == NULL){
		printf("Erro na abertura do arquivo. Programa encerrado");
		exit(1);
	}

	
  	letter = getc(arq);


	while(letter != EOF){

    if(MINUSCULA(letter))
    {
      letter = getc(arq);
      if(MAIUSCULA(letter))
      {
        letter = getc(arq);
          if(MAIUSCULA(letter)){
            letter = getc(arq);
          
            if(MAIUSCULA(letter)){
              letter = getc(arq);
              if(MINUSCULA(letter))
              {
                condicional[0] = letter;
                letter = getc(arq);
                   if(MAIUSCULA(letter))
                    {
                      letter = getc(arq);
                          if(MAIUSCULA(letter))
                          {
                             letter = getc(arq);
                             if(MAIUSCULA(letter))
                             {
                                letter = getc(arq);
                                if(MINUSCULA(letter))
                                {
                                  letter = getc(arq);
                                  lower_case[low] = condicional[0];
                                  low++;
                        }
                      }
                    }
                 }
              }
            }   
          }
      }
    }
    else{
      letter = getc(arq);     
    }
}        

			for(up = 0; up <= low; up++)
  				printf(" %c ", lower_case[up]);

		fclose(arq);


}