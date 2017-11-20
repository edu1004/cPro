#include <stdio.h>
#include <string.h>
int main(int argc, char **argv)
{
	printf("hello char\n");

	char cs[] = " Kim";
	printf("cs %s\n",cs);
	
	char cs2[8] = {'K','i','m'};
	printf("cs2 %s\n",cs2);
	
	printf("strlen(cs2): %d\n",strlen(cs2));
	
	//문자 열간 의 바이트크기비교
	printf("strcmp(cs,cs2): %d\n",strcmp(cs,cs2));
	printf("strcmp(cs2,cs): %d\n",strcmp(cs2,cs));
	
	//해당문자 가  존재하 지 않으 면 null
	printf("strchr(cs2,'m'): %s\n",strchr(cs2,'m'));
	printf("strchr(cs2,'m'): %s\n",strchr(cs2,'y'));
	
	//문자열복사
	char name1[10] = "yangssem";
	char name2[10] ;
	strcpy(name2,name1);
	printf("name2: %s\n",name2);
	
	//문자 열병합
	strcat(name2," is My name");
	printf("name2: %s\n",name2);

		//구분자 로자르 기
	printf("strtok: %s\n",strtok(name2," "));

	//찾 는문자열 의 위치 를포인터 로반환,해당위치부 터글자반 환
	char txt[10] = "abcabc";
	printf("strstr: %s\n",strstr(txt,"a"));
	printf("strstr: %s\n",strstr(txt,"b"));
	
	
	
	return 0;
}

