#include<stdio.h> //Librería para entrada y salida de datos
#include<math.h> //Librería para funciones matematicas
#include<time.h> //Librería para medir el tiempo
#include<stdlib.h> //Librería estándar para la función aleatoria
#define pi 3.141592653589793238462 //Definimos la constante de pi
#define N 3 //El número de limites o rangos
float norm(float mean,float desviation); //función que devuelve valores flotantes normalizados
int main(){
    //Therefore analyze them as the subcategories
    float mean,desv,d,sumas[N],M[N-1]; //Se definen las variables de media, desviación, la d para los valores de distribución normal, la sumatoria de los conjuntos y las reglas
    int histo[N],b; //se define el histograma de cada rango, el valor b que son las condicionales bitwise
    int n; //La cantidad de elementos
    srand(time(NULL)); //Se define una semilla  en base al tiempo de la computadora 
    do{//se realizan las peticiones al usuario para la media y desviación
    printf("Introduzca la media: ");
    scanf("%f",&mean);
    printf("Introduzca la desviacion: ");
    scanf("%f",&desv);
    }while(mean<=0 || desv <=0); //Tienen que ser valor mayores a 0
    do{
        printf("Ingrese el numero de elementos: ");
        scanf("%d",&n);
    }while(n<=0|| n>1000); //La cantidad de productos en la fábrica
    for(int i=0;i<N;i++){ //Se rellena con ceros el arreglo del histograma y las sumas
        histo[i]=0;
        sumas[i]=0;
    }
    for(int i=0;i<N-1;i++){ //Se le pide al usuario los rangos
        float tiempos;

        printf("Ingrese el rango %d: ",i+1);
        scanf("%f",&tiempos);
        if(tiempos<=0){
            i--;
            continue;
        }else{
            M[i]=tiempos;
        }
    }
    if (M[0]>M[1]){
        int flag=0;
        if( M[0] ==0||M[1]==0){
            M[0]+=1;
            M[1]+=1;
            flag=1;
        }
        M[0]*=M[1];
        M[1]=M[0]/M[1];
        M[0]/=M[1];
         if( flag){
            M[0]-=1;
            M[1]-=1;
            flag=0;
        }
    }
    clock_t start = clock();
    for(int i=0;i<n;i++){ //Se generan los números aleatorios normalizados 
        d=norm(mean,desv); //numero aleatorio 
        b=(!(d<M[0])&!(d<M[1]))<<1|(!(d<M[0])&(d<M[1])); //Condición Bitwise
       /* Metódo IF/else 
       if(d<25){
            histo[0]+=1;
            sumas[0]+=d;
        }else if( d<35){
            histo[1]+=1;
            sumas[1]+=d;
        }else{
            histo[2]+=1;
            sumas[2]+=d;
        }*/
       histo[b]++; //Se añaden al histograma
       sumas[b]+=d; ///Se añaden las sumas
    }
    float sumas_totales=sumas[0]+sumas[1]+sumas[2]; //Se hacen las sumas totales
    printf("rapidos= %d\nnormales=%d \n lentos= %d\n",histo[0],histo[1],histo[2]); //Se muestras los histogramas de cada rango de cada uno de los conjuntos 
    printf("Sumas de rapidos=%f\n Sumas de normales=%f\n Sumas de lentos=%f\n Sumas de totales=%f",sumas[0],sumas[1],sumas[2],sumas[0]+sumas[1]+sumas[2]); //se muestran todos los datos 
    printf("\nPromedios rapidos =%f\t Promedios normales = %f\t Promedios rapidos=  %f\t",sumas[0]/(float)histo[0],sumas[1]/(float)histo[1],sumas[2]/(float)histo[2]);
    printf("\nPromedio total: %f" ,sumas_totales/(float)n );

    clock_t end = clock(); // Captura el tiempo final
    double cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC; // Calcula el tiempo en segundos
    printf("Tiempo de ejecucion: %f segundos\n", cpu_time_used);
    return 0;
}
float norm(float mean,float desviation){//utiliza la transformación Box-Müller 
    float u1=(float)rand()/RAND_MAX;
    float u2=(float)rand()/RAND_MAX;
    float z1=sqrt(-2*log(u1))*sin(2*pi*u2);
    return z1*desviation+mean;
}