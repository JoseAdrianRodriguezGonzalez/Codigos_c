#include<stdio.h>
#include<stdlib.h>

int main(){
    int x,j;
    for (  x = 0; x < 8; x++)
    {
        for ( j = 0; j < 8 ; j++)
        {            
            if (x==1||x==6)
            {
                printf("P");
            }
            else if ((x==0&&j==0)||(x==7&&j==0)||(x==0&&j==7)||(x==7&&j==7))
            {
                printf("T");
            }else if((x==0&&j==1)||(x==0&&j==6)||(x==7&&j==1)||(x==7&&j==6)){
                printf("C");
            }else if((x==0&&j==2)||(x==0&&j==5)||(x==7&&j==2)||(x==7&&j==5)){
                printf("A");
            }else if ((x==0&&j==3)||(x==7&&j==3))
            {
                printf("M");
            }else if ((x==0&&j==4)||(x==7&&j==4))
            {
                printf("R");
            }           
        }
        printf("\n");
    }
    system("PAUSE");
    return 0;   
}