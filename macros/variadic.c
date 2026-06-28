#include <stdio.h>
#define DYN(format,...) printf(format, __VA_ARGS__);

int main(){
	DYN("%d\n", 5)
	DYN("%s %s\n", "abcd", "efgh")
}

