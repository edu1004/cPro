#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
	
	
	printf("malloc calloc realloc  free\n");
	printf("============= \n");
	
	int arr[10];
	int *pt_arr;
	
	
	pt_arr = arr;
	int i;
	for(i=0;i<10;i++){
		arr[i] = i+1;
	}
	//pt_arr = (int*)malloc(sizeof(int)*15);
	//배열길이에 맞추기 위해 10곱한 메모리 할당
	//java >>> = int arr[] = {0,0,0,0,0,0,0,0,0,0};
	
	pt_arr = (int*)calloc(15,sizeof(int));
	//sizeof(int)크기변수 10개 저장할 공간 할당.
	//java >>> int arr[] = new int[10];
	
	for(i=0;i<10;i++){
		pt_arr[i] = arr[i];
	}	
	
	pt_arr = realloc(pt_arr, sizeof(int)*5);
	
	free(pt_arr);//할당 된 메모리 해제
		
	for(i=0;i<15;i++){
		printf("%d ", pt_arr[i]);
	}
	
	
	 
	return 0;
}
