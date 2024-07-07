//wap to write artificial intelligence program in a file and read it.
#include<stdio.h>
int main(){
	FILE *fl;
	char a[1000];
	fl=fopen("AI.txt","w+");
	fprintf(fl,"Artificial Intelligence got meee");
	//fclose(fl);
	//fl=fopen("AI.txt","r");
	fseek(fl,0,0);
	fgets(a,1000,fl);
	printf("%s",a);
	fclose(fl);
	
}
