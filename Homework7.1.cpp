#include<stdio.h>
int main(){
	int numbers[10] = {3, 5, 8, 6, 4, 2, 6, 0, 1, 7};
	int b;
	for(int b = 0; b <= 9; ++b){
		printf("%d\n", numbers[b]); 
	}
	printf("Do dai cua mang la 10");
	return 0; 
}
