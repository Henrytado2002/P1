#include <stdio.h>

void ordena(int*p, int*v, int*s){
    int aux;
    if(*s<*p){
        aux=*s;
        *s=*p;
        *p=aux;
    }
    if(*s<*v){
        aux=*s;
        *s=*v;
        *v=aux;
    }
    if(*v<*p){
        aux=*v;
        *v=*p;
        *p=aux;
    }
}

int main(){
    int a,b,c;
    int*p,*v,*s;
    a=12;
    b=6;
    c=10;
    printf("ordem antiga: %d-%d-%d \n",a,b,c);
    p=&a;
    v=&b;
    s=&c;
    ordena(p,v,s);
    printf("em ordem: %d<%d<%d \n",a,b,c);
}