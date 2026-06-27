#include <stdio.h>

#define LOOP(a,b,c) for(int a=b; a<=c; a++){
#define PRINT(x) printf("%d\n", x);}

int main(){
	LOOP(cat,0,10)
		PRINT(cat)
	return 0;
}
