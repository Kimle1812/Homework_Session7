#include<stdio.h>
int main(){
	int numbers[5] = {1, 2, 3, 4, 5}; 
	int i, a = 0;
	printf("Mang co cac phan tu chan la:\n ");
	for(int i = 0; i <= 4; i++){
		if(numbers[i] % 2 == 0){
			printf(" %d ", numbers[i]);
			++a; 
		}
	}
	if(a == 0){
		printf("Mang khong co so chan"); 
	} 
	return 0; 
} 
