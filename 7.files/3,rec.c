#include <stdio.h>
int main() {
    FILE *fp1, *fp2;
    char s1[100], s2[100];
    char ch;
    printf("Enter the source file name: ");
    scanf("%s", s1);
    printf("Enter the destination file name: ");
    scanf("%s", s2);
    fp1 = fopen(s1, "r");
    if (fp1 == NULL) {
        printf("Unable to open the source file.\n");
        return 1;
    }
    fp2 = fopen(s2, "w");
    if (fp2 == NULL) {
        printf("Unable to create the destination file.\n");
        fclose(fp1);
        return 1;
    }
    while ((ch = fgetc(fp1)) != EOF) {
        fputc(ch, fp2);
    }
    printf("File copied successfully.\n");
    fclose(fp1);
    fclose(fp2);
    return 0;
}
