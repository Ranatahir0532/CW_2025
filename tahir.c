#inlcude<stdio.h>
#include<string.h>
#include<time.h>
main(){
	char joke[]={
	"beta typing slow hai",
	"pakistan jeeet gaya",
	"sleeping time",
	"you are hacked",
	};
	strand(time(0));
	int random=rand() % 4;
	printf("joke incoming!!!!!!!\n");
	printf("%s\n",joke[random]);
	return 0;
}
