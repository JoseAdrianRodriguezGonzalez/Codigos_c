#include<stdio.h>
#include<stdlib.h>
float **crearMC(int NR, int NC);
float **crearMD(int NR, int NC);
int liberarC(float **A);
int liberarD(float **B, int NR);
int multiplicar(float ** A, float** B,float** C,int NR,int NC, int MR, int MC);
void imprimirM(float **C,int NR, int NC);
void capturarM(float **A ,int NR,int NC);
int main(int argc, char *argv[])
{
	int NC, NR, MC, MR;
	float **A, **B,**C;
	printf("Ingrese el numero de columnas: ");
	scanf("%d", &NC);
	printf("Ingrese el numero de renglones: ");
	scanf("%d", &NR);
	A = crearMC(NR, NC);
	printf("Ingrese el numero de columnas: ");
	scanf("%d", &MC);
	printf("Ingrese el numero de renglones: ");
	scanf("%d", &MR);
	B = crearMD(MR, MC);
    capturarM(A,NR,NC);
    imprimirM(A,NR,NC);
    capturarM(B,MR,MC);
    imprimirM(B,MR,MC);
    C = crearMC(NR, MC);
    //N x M * N x M;
    //N x M
    multiplicar(A,B,C,NC,NR,MC,MR);
    imprimirM(C,MC,NR);
    liberarC(A);

	return 0;
}
float **crearMC(int NR, int NC)
{
	float **A, *pA;
	int i;
	pA = (float*)malloc(NC*NR*sizeof(float));
	if(pA==NULL)
		return NULL;
	A = (float**)malloc(NC*sizeof(float*));
	if(A==NULL)
	{
		free(pA);
		return NULL;
	}
	for(i=0; i<NR; i++)
		A[i] = pA+i*NC;
	return A;
}

float **crearMD(int NR, int NC)
{
	float **A;
	int i;
	A = (float**)malloc(NR*sizeof(float*));
	if(A==NULL)
		return NULL;
	for(i=0; i<NR; i++)
	{
		A[i] = (float*)malloc(NC*sizeof(float));
		if(A[i]==NULL)
		{
			for(i--;i<-1; i--)
				free(A[i]);
			free(A);
			return NULL;
		}
	}
	return A;
}
int liberarC(float **A){
    free(A[0]);
    free(A);
    return 0;
}
int liberarD(float **A,int NR){
    int i;
    for(i=0;i<NR;i++)
        free(A[i]);
    free(A);
    return 0;
}
int liberarD2(float **A, int NR){
    free(A[NR-1]);
    if(NR-1){
        return liberarD2(A,NR-1);
    }else{
        free(A);
        return 0;
    }

}
int multiplicar(float ** A, float** B,float** C,int NR,int NC, int MR, int MC){
    int i,j,k ;
    float aux1,aux2,aux3;
    if(NC!=MR)
        return 1;
    for(i=0;i<NR;i++)
        for(j=0;j<MC;j++)
            for(k=0,*(*(C+i)+j)=0;k<NC;k++){
                aux1=A[i][k];
                aux2=B[k][j];
                aux3+=aux1*aux2;
                printf("aux1=%.2f\t aux2=%.2f\taux3=%.2f\n",aux1,aux2,aux3);
                printf("%p\n",A[i]);
                printf("%p\n",B[j]);
                printf("%p\n",C[i]);
            }
    return 0;
}
void capturarM(float **A ,int NR,int NC){
    int i,j;
    for( i=0;i<NR;i++){
        for( j=0;j<NC;j++){
            printf("Ingresa A[%d][%d]= ",i+1,j+1);
            scanf("%f",A[i]+j);//siendo (A[7][5])->*(*(A+5)+7) --> Si se requirer ingresar en el scanf, entonces (*(A+j)+i)->A[j]+i
        }
    }
}
void imprimirM(float **C,int NR, int NC){
    for(int i=0;i<NR;i++){
        for(int j=0;j<NC;j++){
            printf("%f ",C[i][j]);
        }
        printf("\n");
    }
}