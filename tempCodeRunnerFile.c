#include<stdio.h>
void main(){
    int a=10,b=11;
    int *p,*q;
    p=&a;
    q=&b;
    *p=*q;
    printf("%d\n %d\n %d\n",b,*q,*p);
}