
/*Esse uma cli que implementa a Cifra de Cesár e playfair*/


#include <stdio.h>
#include <string.h>
#include <getopt.h>
#include <stdlib.h>

void cesar( char palavra[20] ){
 int t ,  count ;
    

  printf("esta executando a função césar para encriptar a String %s\n",palavra);
  t = strlen(palavra); 
  printf("tamanho da string digitaado eh %d\n", t);
  for (count = 0 ; count < t; count++){
	  printf("%c", palavra[count]+5);
  }  
   printf("\n");
}
/* Função acima serve para aumentar a posição na tabela ascii 
 * em cinco posições */


void playfair( char palavra[] ){
   printf("esta executando a função PLAYFAIR para encriptar a String %s\n",palavra);
}


int main (int argc, char **argv ){
int option;    
    while((option = getopt(argc, argv, "c:p:")) != -1){
       switch (option){
	     case 'c':
	         printf("CIFRA CÉSAR\n");
		 cesar(optarg);
		 break;
	     case 'p':
		 printf("PLAYFAIR\n");
		 playfair(optarg);
		 break;
   }	    

 }
    

return 0;	
}
