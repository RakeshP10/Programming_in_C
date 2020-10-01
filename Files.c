#include <stdio.h>
#include <stdlib.h>
#include<string.h>
void main()
{
    char word[50];
    FILE *fp;

    fp=fopen("score.txt","r");

    while(!feof(fp))
    {
        fscanf(fp,"%s",word);
        printf("%s",word);
    }

fclose(fp);
}
