#include <stdio.h>
#include <stdlib.h>

int BezoutP(int, int);
int BezoutQ(int, int);

int main(){
    int a,b;
    char opc;
    do{
        printf("\n\tIntroduce un n%cmero: ",163);
            scanf("%d",&a);
        if(a<0) a=-a;
        printf("\tIntroduce otro n%cmero: ",163);
            scanf("%d",&b);
        if(b<0) b=-b;
        if(b>a){
            int aux=a;
            a=b;
            b=aux;
        }
        printf("\n\tEl coeficiente del primer valor es: %d",BezoutP(a,b));
        printf("\n\tEl coeficiente del segundo valor es: %d",BezoutQ(a,b));
        printf("\n\t%cRepetir?",168);
        printf("\n\t-->(s/n) ");
            fflush(stdin);
            scanf("%c",&opc);
        int i;
        for(i=0;i<100;i++){
            printf("-");
        }
    }while(opc=='s');
    return 0;
}

int BezoutP(int a, int b){
    if(a%b==0){
        return 0;
    }
    else{
        return BezoutQ(b,a%b);
    }
}

int BezoutQ(int a, int b){
    if(a%b==0){
        return 1;
    }
    else{
        return (BezoutP(b,a%b)-(BezoutQ(b,a%b)*(a/b)));
    }
}
