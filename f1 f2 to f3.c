#include <stdio.h>
int main() {
    FILE *file1, *file2, *file3;
    char ch;
    file1 = fopen("file1.txt", "r");
    file2 = fopen("file2.txt", "r");
    file3 = fopen("file3.txt", "w");
	fseek(file3,0,0);
    while ((ch = fgetc(file1)) != EOF) {
        fputc(ch, file3);
    }
    while ((ch = fgetc(file2)) != EOF) {
        fputc(ch, file3);
    }

    printf("Contents copied successfully to file3.txt!\n");

    // Close files
    fclose(file1);
    fclose(file2);
    fclose(file3);

    return 0;
}

