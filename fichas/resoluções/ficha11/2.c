#include <stdio.h>

struct coisas {
    int dia;
    int mes;
    int ano;
};

int repor_dias(int m, int a){
    int n;
    if( m==1 || m==3 || m==5 || m==7 ||m==9 || m==11){
        n=31;
    }
    else if (m==4||m==6||m==8||m==10||m==0){
        n=30;
    }
    else if(m=2 && a%4==0){
        n=29;
    }
    else if(m=2 && a%4!=0){
        n=28;
    }
    return n;
}



void tempo(int*d, int*m, int*a,int delta,int n){
    int dia, mes ,ano;
    dia=*d;
    mes=*m;
    ano=*a;
    while(ano!=0){
        while(mes!=0){
            while(dia!=0){
                if(n==0){
                    break;
                }
                dia--;
                n--;
            }
            if(n==0){
                break;
            }
            mes--;
            dia=repor_dias(mes,ano);
        }
        if(n==0){
           break;
        }
        ano--;
        mes=12;
    } 
    *d=dia+1;
    *m=mes;
    *a=ano;
}

int main(){
    struct coisas atual;
    int*d,*m,*a,k,j;
    printf("\n\ndigite uma data: ");
    scanf("%d/%d/%d", &atual.dia, &atual.mes, &atual.ano);
    printf("\nquer avançar ou recuar?\n\n1-avançar\n\n2-recuar\n\n");
    scanf("%d",&j);
    printf("\nquantos dias? ");
    scanf("%d",&k);
    d=&atual.dia;
    m=&atual.mes;
    a=&atual.ano;
    tempo(d,m,a,j,k);
    printf("a sua data seria: %d/%d/%d\n",atual.dia,atual.mes,atual.ano);
}