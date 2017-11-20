#include <stdio.h>
#include <wiringPi.h>
#include <string.h>
#define LED4 4   // gpio 23
#define LED7 7   // gpio 4
int main(int argc, char **argv)
{
	printf("hello gpio\n");
	
	//menu >> 제 작 >> buile 
	//>> gcc -Wall -o "%e" "%f" -l wiringPi
	if(wiringPiSetup() == -1) return 1;
	printf("wiringPiSetup() ok\n");
	
	pinMode(LED4,OUTPUT);
	pinMode(LED7,OUTPUT);
	char color[10];
	while(1){
		printf("input LED color...\n");
		scanf("%s",color);
		fflush(stdin);
		
		printf("color %s\n",color);
		if(strcmp(color,"red")==0){
			printf("LED red ON\n");
			digitalWrite(LED4,0);
			digitalWrite(LED7,0);
			digitalWrite(LED4,1);
		}else if(strcmp(color,"green")==0){
			printf("LED green ON\n");
			digitalWrite(LED4,0);
			digitalWrite(LED7,0);
			digitalWrite(LED7,1);
		}else {
			printf("other\n");
			digitalWrite(LED4,0);
			digitalWrite(LED7,0);
		}
		
	}
	
	return 0;
}

