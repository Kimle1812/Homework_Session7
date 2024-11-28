#include<stdio.h>
int main(){
	int numbers[5]; 
	int i, a;
	for(int i = 0; i <= 4; i++){
		printf("Moi ban nhap cac phan tu: ");
		scanf("%d", &numbers[i]);
		
	}
	printf("Mang co cac phan tu la:\n ");
	for(int i = 0; i <= 4; i++){
		printf(" %d ", numbers[i]);
	}
	return 0; 
} 
