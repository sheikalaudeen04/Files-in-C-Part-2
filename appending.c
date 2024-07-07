/*#include <stdio.h>

int main() {
    FILE *ipf, *opf;
    char ch;
    ipf = fopen("input.txt", "r");
    opf = fopen("output.txt", "a");
    while ((ch = getc(ipf)) != EOF) {
        //fprintf(opf, "%c", ch);
        fputc(ch, opf);
    }
    fclose(ipf);
    fclose(opf);

    printf("Data appended successfully.\n");

    return 0;
}*/
#include <stdio.h>
int main(){
    FILE *ipf,*opf;
    char ch;
    ipf=fopen("input.txt","r");
    opf=fopen("output.txt","a");
    while((ch=getc(ipf))!=EOF){
        fputc(ch,opf);
    }
    fclose(ipf);
    fclose(opf);
    printf("Data appended successfully.\n");
    return 0;
}


