#include <stdio.h>
int main() {
    FILE *file1, *file2;
    char ch;
    file1 = fopen("file1.txt", "r");
    file2 = fopen("file2.txt", "w");
    ch=fgetc(file1);
    fseek(file2,0,0);
    while (ch != EOF) {
        fputc(ch, file2);
        ch=fgetc(file1);
    }
    printf("Contents copied successfully!\n");
    fclose(file1);
    fclose(file2);
    return 0;
}

