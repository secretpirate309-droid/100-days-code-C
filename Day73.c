#include<stdio.h>

//Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.


int main()
{
    FILE *fp;
    char ch;
    int characters=0, words=0, lines=0;
    int inword=0;
    fp=fopen("input.txt","r");
    if(fp==NULL)
    {
        printf("cannot open file\n");
        return 1;
    }
    while((ch=fgetc(fp))!=EOF)
    {
        characters++;
        if(ch=='\n')
            lines++;
        if(ch==' ' || ch=='\n' || ch=='\t'){
            inword=0;
        } else {
            if(inword==0){
                words++;
                inword=1;
            }
        }
    }
    fclose(fp);
    printf("characters: %d\n",characters);
    printf("words: %d\n",words);
    printf("lines: %d\n",lines);
    return 0;
}