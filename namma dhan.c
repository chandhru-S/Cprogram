#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE *sourceFile, *destFile;
    char ch;
    sourceFile = fopen("source.txt", "r");
    if (sourceFile == NULL) {
        printf("Error opening source file.\n");
        return 1;
    }
    destFile = fopen("destination.txt", "a");
    if (destFile == NULL) {
        printf("Error opening destination file.\n");
        fclose(sourceFile);
        return 1;
    }
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destFile);
    }
    printf("Data from source file has been appended to destination file.\n");
    fclose(sourceFile);
    fclose(destFile);
    return 0;
}
