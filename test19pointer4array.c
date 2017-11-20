#include <stdio.h>

#define ROW_MAX 2
#define COL_MAX 3
int main(int argc, char **argv)
{
	printf("hello pointer3 array\n");
	
	int arr[ROW_MAX][COL_MAX] = {{1,2,3},{4,5,6}};
	
	printf("arr address : %p\n",arr);
	
	int (*row)[COL_MAX] ;//&{1,2,3} , &{4,5,6}
	int *col;// &1,&2,&3    &4,&5,&6
	for(row=arr;row<arr+ROW_MAX;row++){
		printf("row *row **row: %p, %p,%d\n",row, *row,**row);
		
		for(col=*row;col<*row+COL_MAX;col++){
			printf("%d ",*col);
		}
		printf("\n");
	}
	
	return 0;
}
