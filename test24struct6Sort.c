#include <stdio.h>
typedef struct contact{
	char *tel,*email,*addr;
} Contact;

typedef struct score{
	int kor;
	int eng;
	int math;
	int total;
	double avg;
}Score;

struct student{
		char *name;	
		//struct contact ctt;
		//struct score s;
		Contact ctt;
		Score s;
};

int main(int argc, char **argv){
	printf("struct array\n");
	printf("============= \n");
	
	Contact ctt1 = {"02","aaa@aaa.com","seoul"};
	Contact ctt2 = {"031","bbb@bbb.com","pusan"};
	Contact ctt3 = {"064","ccc@cccc.com","jeju"};
	
	Score s1 = {99,88,77,s1.kor+s1.eng+s1.math,s1.total/3.0};
	Score s2 = {33,44,55,s2.kor+s2.eng+s2.math,s2.total/3.0};
	Score s3 = {55,66,77,s3.kor+s3.eng+s3.math,s3.total/3.0};
	
	Contact cs[3] = {ctt1,ctt2,ctt3};
	int i;
	for(i=0;i<3;i++){
		printf("%d : %s %s %s\n",i,cs[i].tel,cs[i].email,cs[i].addr );
	}
	
	
	Score ss[3] = {s1,s2,s3};
	for(i=0;i<3;i++){
		printf("%d : %d %d %d %d %.2lf\n",i,
									ss[i].kor,ss[i].eng,ss[i].math,
									ss[i].total,ss[i].avg );
	}
	
	struct student st1 = {"kim",ctt1,s1};
	struct student st2 = {"yangssem",ctt2,s2};
	struct student st3 = {"lee",ctt3,s3};
	
	struct student sts[3] = {st1,st2,st3};
	
	int x;
	for(x=0;x<3;x++){
		for(i=x+1;i<3;i++){
			if(sts[x].s.total > sts[i].s.total){
				struct student temp;
				temp = sts[x];
				sts[x] = sts[i];
				sts[i] = temp;
			}
		}
	}
	
	for(i=0;i<3;i++){
		printf("%d : %s ,%s %s %s %d %d %d %d %.2lf\n",i,
									sts[i].name,
									sts[i].ctt.tel,sts[i].ctt.email,sts[i].ctt.addr ,
									sts[i].s.kor, sts[i].s.eng, sts[i].s.math,
									sts[i].s.total, sts[i].s.avg );
	}
	
	
	
	return 0;
}

