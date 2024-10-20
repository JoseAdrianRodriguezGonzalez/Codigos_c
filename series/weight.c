#include<stdio.h>
#include<stdlib.h>

int main(int argc, char*argv[]){
    int n,*pesos,*valores,capacidad,j,i,nb,combinacionp,combinacionv,mj_m,mj_val,mj_p;
    unsigned int mochila;
    nb=8*sizeof(mochila);
    
    do{
        printf("Write the size of te value");
        scanf("%d",&n); 
    }while(n<1||n>nb);
    pesos=(int*)malloc(n*sizeof(int));
    if(pesos==NULL)
        return 1;
    valores=(int *)malloc(n*sizeof(int));
    if(valores==NULL){
        free(pesos);
        return 2;
    }
    for(i=0;i<n;i++){
        do{
            printf("Peso[%d]= ",i);
            scanf("%d",pesos+i);
        }while(*pesos<1);
        do{
            printf("Valores[%d]= ",i);
            scanf("%d",valores+i);
        }while(*valores<1);
    }
    do{
        printf("Add the size= ");
        scanf("%d",&capacidad);
    }while(capacidad<0);
    for(i=0,mj_val=0,mj_p=0,mj_m=0;i<(1<<n);i++){
        for(j=n-1;j>-1;j--){
            printf(i&(1<<j)?"1":"0");
        }
        for(j=0, combinacionp=0,combinacionv=0;j<n;j++){
            if(i&(1<<j)){
                combinacionp+=pesos[j];
                combinacionv+=valores[j];
            }
        }
        if((combinacionv>mj_val)&&(combinacionp<=capacidad)){
            mj_val=combinacionv;
            mj_p=combinacionp;
            mj_m=i;
        }
        printf("\t%d\t%d",combinacionp,combinacionv);
        printf("\n");
    }
    printf("solucion es: %d, %d kg ,$ %d\n",mj_m,mj_p,mj_val);
    free(pesos);
    free(valores);

    return 0;
}