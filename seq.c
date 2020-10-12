#include <stdio.h>

int main(){
	int a, b;
	printf("Adja meg az intervallum aljat es tetejet, ami kozott a szamokat akarja generalni");
	scanf("%d %d", &a, &b);

	if(a < b){
		while(a <= b){
			printf("%d\n", a);
			a++;
		}
	}
	else{	
		while(a >= b){
			printf("%d\n", a);
			a--;
		}
	}

	return 0;
}