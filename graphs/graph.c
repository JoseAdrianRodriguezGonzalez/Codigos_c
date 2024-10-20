#include<stdio.h>
#include<stdlib.h>
//Estructura para el nodo en la lista de adyacencia
typedef struct Node{
    int dest;
    struct Node* next;
}Node;
//Estructura para la lista de adyacencia
typedef struct AdjList{
    struct Node* head;
}AdjList;//Estructra para el grafo
typedef struct Graph{
    int numVertices;
    struct AdjList* array;
}Graph;
//crea los nodos
Node* createNode(int dest){
    Node * newnode=(Node* )malloc(sizeof(Node));
    newnode->dest=dest;
    newnode->next=NULL;
    return newnode;    
}
Graph * createGraph(int V);
void addEdge(Graph* graph, int src,int dest,int dirge);
void printGraph(Graph * graph);
int main(){
    int V=5;
    Graph* graph=createGraph(V);
    addEdge(graph,0,1,0);
    addEdge(graph,0,4,0);
    addEdge(graph,1,2,0);
    addEdge(graph,1,3,0);
    addEdge(graph,1,4,0);
    addEdge(graph,2,3,0);
    addEdge(graph,3,4,0);
    addEdge(graph,4,1,0);
    printGraph(graph);
    return 0;   
}
//Crea el grafo
Graph * createGraph(int V){
    Graph* graph=(Graph*) malloc(sizeof(Graph));
    graph->numVertices=V;
    graph->array=(AdjList*)malloc(V*sizeof(AdjList));
//INICIA LA LSITA DE ADYACENCIA COMO VACÍA
    for(int i=0;i<V;i++){
        graph->array[i].head=NULL;
    }
    return graph;
}
//Añadir un EDGE
void addEdge(Graph* graph, int src,int dest,int dirge){
    if(dirge){
        Node * newnode=createNode(dest);
        newnode->next=graph->array[src].head;
        graph->array[src].head=newnode;
    }
    else if(!dirge){
        //Src a dest
        Node * newnode=createNode(dest);
        newnode->next=graph->array[src].head;
        graph->array[src].head=newnode;

        newnode=createNode(src);
        newnode->next=graph->array[dest].head;
        graph->array[dest].head=newnode;
    }
}
void printGraph(Graph * graph){
    for(int v=0;v<graph->numVertices;v++){
        Node* pGraph=graph->array[v].head;
        printf("\nLista de adyacencia %d\nhead",v);
        while(pGraph){
            printf("->%d",pGraph->dest);
            pGraph=pGraph->next;
        }
        printf("\n");
    }
}