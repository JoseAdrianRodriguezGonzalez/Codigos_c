# Hilos
* En este esquema los n[ucleos comparten la misma memroia

1.- env variables
2.- texto, codigo compilado en leguaj maquina
3.- datos -- variables globales,y variables estáticas, constantes y variables, se comparte entre hilos
4.- Heap -- Aqui es donde se guarda la memoria dinamica , se compart entre hilos
5.- Stack -- Cuando se crea un hilo nuevo, s crea un stack, EN los stacks están las llamdas a las funciones 

Los hilos se ejecutan de manera asincrona. LOs hilos son menos costos que lso prcoesos.
EL sistema operativo es el que se encarga de identificar quien tiene la prioddad en un proceso

Dado a la esventaja de que cada hilo se procesa, se debe hacer sincronizar las etapas

La pila,: Cada hilo tiene su propia pila
La pila es LIFO
Los párametros de las funciones también se guardan en las pilas


Las varibles globales, estáticas y memoria dinámica, no son thread safe

## Condición de carrera 
OCurre cuando los hilos comarten recursos. EStos recursos solo pueden ser modificados por un hilo a la vez

## Región crítica

BLoque de código de un hilo que usa recursos compartios
