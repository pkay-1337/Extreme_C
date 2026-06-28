#include <stdio.h>
/*
#ifdef
#ifndef
#else
#elif
#endif
*/

// #define VAR
int main(){
	int j = 10;
	int i;
#ifdef VAR
	i = 100;
#else
	i = 200;
#endif 
	printf("i+j = %d\n", i+j);
}
	
