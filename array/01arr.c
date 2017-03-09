#include <stdio.h>
#include <string.h>
int find(int arr[],int len){
	int i = 0, j = 0, n = 0, inc = 1, tmp = 0, max = 0;
	while(n < len){
		tmp = arr[n];
		j = n;
		inc = 1;
		for(i = n+1; i < len; i++){
			printf("%d %d\n",arr[i],arr[j]);
			if(arr[i] >= arr[j]){
				inc+=1;
				j = i;
			}
		}
		if(max < inc)
			max = inc;
		for(n; n < len; n++){
			if(tmp > arr[n])
				break;
		}
		if((len-n) <= max)
			break;
	}
	return max;
}
int main(){
	int max;
	int arr[20] = {9,8,9,2,5,10,37,1,7,8,9,10,12,88,99,100,101,9,1,10};
	max = find(arr,20);
	printf("max = %d\n", max);
	return 0;
}
