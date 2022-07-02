#include <stdio.h>


int *vmaior(int *v1, int *v2){
    if(*v1<*v2){
        return v2;
    }
    else if(*v2<*v1){
        return v1;
    }
}

void main(){
    int a,b;
    int *p1, *p2;
    a=15;
    b=5;
    p1=&a;
    p2=&b;
    printf("valor maior:%d\n", *vmaior(p1,p2));
}