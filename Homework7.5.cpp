#include<stdio.h>
int main(){
	int i, min, max;
	int numbers[5] = {1,2, 3, 4, 5};
	min = numbers[0];
	max = numbers[0];
	for(i = 0; i <= 4; i++){
		if(min > numbers[i]){
			min = numbers[i];
		}
		if(max < numbers[i]){
			max = numbers[i];
		}
	}
	printf("Phan tu lon nhat trong mang la %d\n", max);
	printf("Phan tu nho nhat trong mang la %d\n", min);
	return 0;
}
