#include <stdio.h>
int main(){
    int s1,s2,s3,s4;
    int var1=5;
    char var2='a';
    int *ptr1= &var1;
    char *ptr2=&var2;
    *ptr2='b';
    s1=sizeof(char);
    s2=sizeof(char*);
    s3=sizeof(int);
    s4=sizeof(int*);
    printf("var1 tem o enderçco %p e o valor %d\n", ptr1, var1 );
    printf("var2 tem o endereçco %p e o valor %c\n", ptr2, var2 );
    printf("tamanhos : char-%d bits ; char*-%d bits ; int-%d bits ; int*-%d bits \n",s1,s2,s3,s4);
    printf("outros valores 1: %p e o valor %d\n", ptr1+1, *(ptr1+1) );
    printf("outros valores 2: %p e o valor %d\n", ptr2+1, *(ptr2+1) );    
}