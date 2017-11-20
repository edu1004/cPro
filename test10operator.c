#include <stdio.h>
#include <stdbool.h>
int main(int argc, char **argv)
{
	printf("hello operator\n");
	
	//1. (),  [], ,  . , ->
	printf("int len : %d\n", sizeof(int));
	int arr[] = {1,2,3,4,5};
	printf("arr len : %d\n", sizeof(arr));
	
	//2. (cast)  *(pointer)  ++ -- +
	
	
	
	//3. * / + - %
	printf("arr len : %d\n", sizeof(arr)/sizeof(int));
	
	//4. <<, >>
	
	//5. ==  !=  > < >= <=
	
	//6.  & | ^
	
	//7. && ||
	
	//#include <stdbool.h>
	bool b = true;
	printf("bool b : %d\n", b);
	
	
	
	return 0;
}

