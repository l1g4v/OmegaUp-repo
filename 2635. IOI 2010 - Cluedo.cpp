#include "cluedo.h"

void ResolverCaso(){
   int a[3] = {1,1,1};
   int i = Teoria(a[0],a[1],a[2]);

   while(i){
	   a[i-1]++;
	   i = Teoria(a[0],a[1],a[2]);
   }
}
