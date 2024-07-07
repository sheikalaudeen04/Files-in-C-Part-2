#include<stdio.h>
int main(){
	FILE *Fptr;
	char a;
	int c=0;
	Fptr=fopen("d:/Aids.txt","r");
	//printf("%d\n",ftell(Fptr));
	a=fgetc(Fptr);
	while(a!=EOF){
		if(a=='\n'||a==' ')
			c+=1;
		printf("%c",a);
		a=fgetc(Fptr);
	}
	c+=1;
	printf("\nNo of words:%d",c);
	printf("\nNo of letter:%d",ftell(Fptr));//tells cursor position
	printf("\n%d",c);
	fclose(Fptr);
}
