#include<stdio.h>
#include<string.h>
#define SWAP(a, b)\
{\
	a^=b;\
	b^=a;\
	a^=b;\
}
#define NS 256
int KSA(unsigned char *clave,unsigned char *S);
int PRGA(unsigned char *S,unsigned char *msg,unsigned char *msg2);
int RC4_cod(unsigned char *clave,unsigned char *msg,unsigned char*msg2);
int main(int argc,char*argv[]){
     unsigned char*clave,*msg;
    unsigned char msg_cd[30],msg_dc[30];
    if(argc<3)
        return 1;
    clave=argv[1];
    msg=argv[2];
    RC4_cod(clave,msg,msg_cd);
    RC4_cod(clave,msg_cd,msg_dc);
    printf("MSG = %s\n",msg);
    for(size_t i=0;i<strlen(msg_cd);i++){
        printf("%c ",msg_cd[i]);
    }
    printf("\n");
    for(size_t i=0;i<strlen(msg_dc);i++){
        printf("%c ",msg_dc[i]);
    }
    return 0;
}
int KSA(unsigned char *clave,unsigned char *S){
    unsigned int i,NC,j;
    for(i=0;i<NS;i++){
        S[i]=i;
    }

    NC=strlen(clave);
    for(i=0,j=0;i<NS;i++){
        j=(j+S[i]+clave[i%NC])%NS;
        if(i!=j)
            SWAP(S[i],S[j]);
    }
    return 0;
}
int PRGA(unsigned char *S,unsigned char *msg,unsigned char *msg2){
    unsigned int NM,k,i,j;
    NM=strlen(msg);
    //printf("%u",NM);
    for(k=0,i=0,j=0;k<NM;k++){
        i=(i+1)%NS;
        j=(j+S[i])%NS;
        if(i!=j)
            SWAP(S[i],S[j]);
        msg2[k]=msg[k]^(S[(S[i]+S[j])%NS]);
       
    }
    msg2[k]='\0';
}
int RC4_cod(unsigned char *clave,unsigned char *msg,unsigned char*msg2){
    unsigned char S[NS];
    unsigned int NM, k,i,j,NC;
    KSA(clave,S);
    //printf("%u",S);
    PRGA(S,msg,msg2);
    return 0;
}