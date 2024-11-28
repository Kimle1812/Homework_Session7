#include<stdio.h>
int main(){
	int i, a;
	printf("Moi ban nhap chi so cua mang: ");
	scanf("%d", &a); 
	int numbers[a];
	for(int i = 0; i <= (a - 1); i++){
		printf("Moi ban nhap cac phan tu: ");
		scanf("%d", &numbers[i]);
		
	}
	printf("Mang co cac phan tu la:\n ");
	for(int i = 0; i <= (a - 1); i++){
		printf(" %d ", numbers[i]);
	}
	return 0; 
} 
