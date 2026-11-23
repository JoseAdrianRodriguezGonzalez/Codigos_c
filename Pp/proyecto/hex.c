#include "hex.h"
void board_print(const int* board, int size){
    printf("  ");
    for(int n=0;n<size;n++){
        printf("%c   ",'A'+n);
    }
    printf("\n");
    for(int j=0;j<size;j++){
        for(int n=0;n<j;n++) printf("  ");
        printf("%i",j+1);;
        for(int i=0;i<size;i++){
            if(board[size*j+i]==0)printf("   +");
            if(board[size*j+i]==1)printf("   X");
            if(board[size*j+i]==2)printf("   0");
        } 
        printf("\n");
    }
    printf("\n");
}
