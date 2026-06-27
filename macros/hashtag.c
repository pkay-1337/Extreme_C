#include <stdio.h>
#define PRINT(word) printf("%s\n", #word);
#define meow(x) char x ## _cmd[5];

int main(){
	PRINT(test);
	PRINT("Hello");
	meow(x)
}
