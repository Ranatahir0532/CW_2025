#include<stdio.h>
#include<string.h>
int main(){
      char qualification[10];
      printf("enter your qualification\nmaster\nbachlors\nintermediate\n");
      scanf("%s",&qualification);
      
      if(strcmp(qualification,"master")==0){
         char interview[10];
		 printf("enter your interview result\npass or fail\n");
		 scanf("%s",&interview);
		 if(strcmp(interview,"pass")==0){
		 	printf("congratulation you are hired");
		 }
		 else{
		 	printf("first clear your interview");
		 }
	}else{
		printf
		("qualification must be masters");
	}	 	
}

