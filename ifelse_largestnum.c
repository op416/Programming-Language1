#include<stdio.h>
main(){
    int a,b,large;
    printf("\n enter the values of a and b: ");
    scanf("%d %d",&a,&b);
    if(a>b)
    large=a;
    else
    large=b;
    printf("\n large = %d",large);
    return 0;
}