#include <stdio.h>

int main(){
  long nc;
  nc = 0;
  while(fgetchar() != EOF){
	  ++nc;
 }	  
  printf("%1d\n ", nc);

return 0;
}
