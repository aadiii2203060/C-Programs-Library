#include <stdio.h>

int main() {
    FILE *fp;
    char text[50] = "Hello, this is a File I/O example in C.";

    fp = fopen("sample.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    fprintf(fp, "%s", text);
    fclose(fp);

    printf("Data written to file.\n");

    fp = fopen("sample.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    char buffer[100];
    fgets(buffer, sizeof(buffer), fp);
    printf("Data read from file: %s\n", buffer);
    fclose(fp);

    return 0;
}
