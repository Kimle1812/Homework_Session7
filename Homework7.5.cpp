#include<stdio.h>
int main(){
	int numbers[5] = {1, 2, 3, 4, 5}; 
	int i, a, smallest, largest;
	for(int i = 0; i <= 4; i++){
		for(int a= 0; a <= 4; a++){
			if(numbers[i] < numbers[a]){
				smallest = numbers[i];
		    }
		}
		for(int a= 0; a <= 4; a++){
			if(numbers[i] > numbers[a]){
				largest = numbers[i];
		    }
		}
	}
	printf("Mang co phan tu nho nhat la: %d\n ", smallest);
	printf("Mang co phan tu lon nhat la: %d\n ", largest);
	return 0; 
} 
