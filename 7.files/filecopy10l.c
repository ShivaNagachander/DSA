#include<stdio.h>

void main()
{
    FILE *f1, *f2;
    int linecount = 0;
    char ch;

    printf("Writing input to S2.txt (enter '@' to stop):\n");
    f1 = fopen("S2.txt", "w");
    ch = getchar();
    while (ch != '@')
    {
        fputc(ch, f1);
        ch = getchar();
    }
    fclose(f1);

    printf("\nReading from S2.txt and writing to S3.txt (up to 10 lines):\n");
    f1 = fopen("S2.txt", "r");
    f2 = fopen("S3.txt", "w");
    ch = fgetc(f1);
    do
    {
        fputc(ch, f2);
        if (ch == '\n')
            linecount++;
        ch = fgetc(f1);
    } while (ch != EOF && linecount < 10);
    fclose(f1);
    fclose(f2);

    printf("\nReading from S3.txt:\n");
    f2 = fopen("S3.txt", "r");
    ch = fgetc(f2);
    while (ch != EOF)
    {
        printf("%c", ch);
        ch = fgetc(f2);
    }

    printf("\n");
}
