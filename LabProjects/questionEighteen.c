
#include <stdio.h>
int main(){
	FILE  *fp;
	char name[20];
	int roll,class;
	fp("studnet.txt","r");
	printf("The class students record:\n");

	while(fscanf(fp,"%s %d %d",&roll,&class,name) != EOF ) {
		if(class == 11){
			printf("%d %s %s",name,class,roll);
		};
	};
	fclose(fp);
	return 0;

}
