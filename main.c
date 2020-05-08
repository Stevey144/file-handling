#include <stdio.h>
#include <stdlib.h>

int main()
{

/* FILE* tp=fopen("c:/temp/test.txt","r");
 int ch;
 while((ch=fgetc(tp))!=EOF){
    printf("%c",ch);
 }*/

 /*FILE *ct;
 ct=fopen("c:/temp/make.txt","w+");
 fprintf(ct,"we just created a new file called check");
 fputs("this is the second put we are using",ct);
 fclose(ct);
 */
 char but[200];
 FILE *mp=fopen("c:/temp/test.txt","r");
 fscanf(mp,"%s",but);
 printf("1:%s\n",but);
 fgets(but,200,(FILE*)mp);
 printf("2 %s\n",but);
 fgets(but,200,(FILE*)mp);
 printf("3 %s\n",but);
 fclose(mp);



}
