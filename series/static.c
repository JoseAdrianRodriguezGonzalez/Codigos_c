#include<stdio.h>
void count(){
    int static count=0;
    count++;
    printf("%d",count);
}
int main(){
    count();
}