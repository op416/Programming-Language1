#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
// int main(int argc,char *argv[]){
//     if(argc!=2){
//         printf("you forget to type your name.\n");
//         exit(1);
//     }
//     printf("hello %s",argv[1]);
//     return 0;
// }
   

int main(int argc,char *argv[])
{
    int disp,count;
    if(argc<2){
        printf("you must enter the length of the count\n");
        printf("on the command line.try again.\n");
        exit(1);
    }
    if (argc==3 && !strcmp(argv([2],"display")) disp=1;
    else disp=0;
    for(count=atoi(argv[1]);count;--count)
    if(disp) printf("%d\n",count);
     putchar('\a');/* this will ring the bell */
    printf("done");
    return 0;   nm
}