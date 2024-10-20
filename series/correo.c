#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define Email_mx 254
#define email_pl 63
int validar(char* email);
int ispnt(char email);
int isce(char c,char *validos);
char *capturar();
int main(int argc, char *argv[]){
    char *email;
    if(argc<2)
        return 1;
    email=argv[1];
    if(validar(email))
        printf("El e-mail es correcto.\n");
    else
        printf("No se puede");
    return 0;
}
int isce(char c,char *validos){
    if(c==validos[0])
        return 1;
    else if(validos[0]=='\0')
        return 0;
    else
        return isce(c,validos+1);
}
int ispnt(char email){
    static int i=-1,j=-1;
    i++;
    if(email=='.'&&i){
        if((j+1)==i)
            return 0;
        else{
            j=i;
            return 1;
        }
    }
    else
        return 0;
    
}
int validar(char* email){
    int nc=strlen(email);
    int aux=0;
    char* validos="!#$%&'*+/=^_{|}~";
    int nce=strlen(validos);
    if(nc>Email_mx)
        return 0;
    char* bc=strchr(email,'@');
    if(bc==NULL)
        return 0;
    int da=(int)(bc-email);
    if(da>63){
        return 0;
    }
    for(int i=0;i<da;i++){
        if(!ispnt(email[i])&&!isalnum(email[i])&&!isce(email[i],validos))
            return 0;
    
    }

    return 1;
}