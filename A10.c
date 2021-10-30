#include<stdio.h>
#include<string.h>

void main()
{
    FILE *fin;
    char ch;
    int i,pos;
    fin=fopen("abc.txt","r+");
    if(fin==NULL)
    {
        printf("Unable to open file.");
    }

    fseek(fin,0,SEEK_END);
    pos=ftell(fin);

    i=0;
    while(i<pos)
    {
        i++;
        fseek(fin,-i,SEEK_END);
        ch=fgetc(fin);
        printf("%c",ch);
    }

    //copy contents from one file to another

    FILE *fout = fopen("op.txt","w");
    if(fout==NULL)
    {
        printf("Unable to open file.");
    }

    else{
        ch = fgetc(fin);
        while (ch != EOF)
        {
            fputc(ch, fout);
            ch = fgetc(fin);
        }
    }     
}
