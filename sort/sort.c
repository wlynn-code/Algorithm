#include <stdio.h>
void bubble(int arr[], int len){
	int i = 0, j = 0;
	for(i = 1; i < len; i++){
		int flag = 0;
		for(j = 0; j < len-i; j++){
			if(arr[j] > arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				flag = 1;
			}
		}
		if(0 == flag){
			break;
		}
	}
}

void insert(int arr[], int len){
	int i = 0, j = 0;
	for(i = 1; i < len; i++){
		int temp = arr[i];
		for(j = i; arr[j-1]>temp && j>=1; j--){
			arr[j] = arr[j-1]; 
		}
		if(j != i){
			arr[j] = temp;
		}
	}
}

int main(){
	int arr[9] = {20, 5, 30, 8, 15, 6, 25, 10, 18};
	//bubble(arr, 9);
	insert(arr,9);
	printf("the result of sort is:");
	int i = 0;
	for(i = 0; i < 9; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}
