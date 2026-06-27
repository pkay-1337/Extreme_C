#include <stdio.h>
#define VALUE 5
#define ADD(a,b) a+b

int main(){
	printf("Defined macro value is %d\n", VALUE);
	printf("Add: %d\n", ADD(60,9));
	return 99;
}
