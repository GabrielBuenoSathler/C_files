/* ESTE ARQUIVO SE TRATA DE UM MODELO DE IMPLEMENTAÇÃO DE BIBLIOTECA GETOPS */

#include <stdio.h>
#include <getopt.h>
int main (int argc, char **argv){
	int option ;
 
printf("USO DE GETOPS.H\n"); 
  while((option  = getopt(argc,argv,"cfh")) !=-1){
	  switch(option){
		  case'c':
			  printf("ola vc usa a opcão C\n");
			  break;
	          case 'f':
	                printf("OPÇÃO F\n");
                    			
  }
 }


return 0;
}
