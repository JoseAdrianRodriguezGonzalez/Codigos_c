#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
    int dato;
    struct Node *left;  
    struct Node *right ;
}Node ;
void preorden(Node* nodo);
void inorden(Node* nodo);
void postorden(Node* nodo);
//Crear un nodo
Node* newNode(int dato);
void imprimirArbol(Node* raiz,int nivel);
void printEspacios(int nivel);
int main(){
    Node* raiz=newNode(1);
    raiz->right=newNode(3);
    raiz->right->left=newNode(6);
    raiz->right->left->left=newNode(11);
    raiz->right->left->right=newNode(12);
    raiz->right->right=newNode(7);
    raiz->right->right->left=newNode(13);
    raiz->right->right->right=newNode(14);
    raiz->right->right->right->left=newNode(19);
    raiz->right->right->right->right=newNode(20);
    raiz->left=newNode(2);
    raiz->left->left=newNode(4);
    raiz->left->left->left=newNode(8);
    raiz->left->left->left->left=newNode(15);
    raiz->left->left->left->right=newNode(16);
    raiz->left->left->right=newNode(9);
    raiz->left->right=newNode(5);
    raiz->left->right->left=newNode(10);
    raiz->left->right->left->left=newNode(17);
    raiz->left->right->left->right=newNode(18);
    imprimirArbol(raiz,0);
    printf("Preorden(RID): ");
    preorden(raiz);
    printf("\n");
    printf("Inorden(IRD): ");
    inorden(raiz);
    printf("\n");
    printf("postorden(IDR):");
    postorden(raiz);
    return 0;
}
Node* newNode(int dato){
    Node* node=(Node*)malloc(sizeof(Node));
    node->dato=dato;//Se agrega el valor del dato 
    node->left=NULL;//Se indican ambos en NULL para decir que no tiene hijos
    node->right=NULL; 
    return node;
}
void printEspacios(int nivel){
    for(int i=0;i<nivel;i++){
        printf("\t");
    }
}
void imprimirArbol(Node* raiz,int nivel){
    if(raiz==NULL) return ;
    imprimirArbol(raiz->right,nivel+1);
    printEspacios(nivel);
    printf("%d\n",raiz->dato);
    imprimirArbol(raiz->left,nivel+1);
}
void preorden(Node* nodo){
    if(nodo==NULL)return ;
    printf("%d-",nodo->dato);
    preorden(nodo->left);
    preorden(nodo->right);
}
void inorden(Node* nodo){
    if(nodo==NULL)return ;
    inorden(nodo->left);
    printf("%d-",nodo->dato);
    inorden(nodo->right);
}
void postorden(Node* nodo){
    if(nodo==NULL)return ;
    postorden(nodo->left);
    postorden(nodo->right);
    printf("%d-",nodo->dato);
}
