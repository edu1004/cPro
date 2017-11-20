#include <stdio.h>
enum Car{
	Ray,Sonata,Santafe,Volvo,OOOO,BMW
};
enum Car2{
	Ray2=11,Sonata2=22,Santafe2=33,Volvo2=44,OOOO2=55,BMW2=66
};
int main(int argc, char **argv){
	printf("enum\n");
	printf("============= \n");
	
	//const int a = 10;
	//const int b = 20;
	//const int c = 30;
	
	printf("Ray : %d\n", Ray);
	printf("Sonata : %d\n", Sonata);
	printf("Santafe : %d\n", Santafe);
	printf("Volvo : %d\n", Volvo);
	printf("OOOO : %d\n", OOOO);
	printf("BMW : %d\n", BMW);
	printf("============= \n");
	printf("Ray2 : %d\n", Ray2);
	printf("Sonata2 : %d\n", Sonata2);
	printf("Santafe2 : %d\n", Santafe2);
	printf("Volvo2 : %d\n", Volvo2);
	printf("OOOO2 : %d\n", OOOO2);
	printf("BMW2 : %d\n", BMW2);
	
	enum Car c;
	c = OOOO;
	switch(c){
	case 	Ray:
		printf("Your Car code : %d\n", c);
		break;
	case 	Sonata:
		printf("Your Car code : %d\n", c);
		break;
	case 	Santafe:
		printf("Your Car code : %d\n", c);
		break;
	case 	Volvo:
		printf("Your Car code : %d\n", c);
		break;
	case 	OOOO:
		printf("Your Car code : %d\n", c);
		break;
	case 	BMW:
		printf("Your Car code : %d\n", c);
		break;
	default :
		printf("other\n");
		break;
	}
	
	return 0;
}



