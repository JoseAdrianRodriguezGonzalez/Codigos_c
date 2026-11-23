#include "image.h"
int image_load(image_t* image, const char* filename){
    unsigned width,height,error;
    unsigned char*pixmap=NULL;
//    image->pixmap=(unsigned char*)malloc(width*height*4);
    error=lodepng_decode32_file(&pixmap,&width,&height,filename);
    if(error) return 0;
    image->width=width;
    image->height=height;
    image->pixmap=pixmap;
    return 1;
}
int image_save(image_t* image, const char* filename){
    unsigned error=lodepng_encode32_file(filename,image->pixmap,image->width,image->height);
    if(error) return 0;
    return 1;
}
// Para usar esta función 
int image_create(image_t* image, unsigned width, unsigned height){
    if(width<1) return 0;
    if(height<1) return 0;
    image->pixmap=(unsigned char*)calloc(4*width*height,1);
    if(image->pixmap==NULL) return 0;
    image->width=width;
    image->height=height;
    return 1;
}
void image_destroy(image_t* image){
    if(image->pixmap) free(image->pixmap);
    image->width=0;
    image->height=0;
    
}
int image_set(image_t* image, int x, int y, color_t color){
    if(x<0|| x>=image->width ) return 0;
    if(y<0|| y>=image->height ) return 0;
    int i=y*image->width+x;
    color_t* pix=(color_t*)image->pixmap;
    *(pix+i)=color;
    return 1;
    //pix[i] ia equivaent to *(pix+i)
}
int image_get(image_t* image, int x, int y, color_t* color){
    if(x<0|| x>=image->width ) return 0;
    if(y<0|| y>=image->height ) return 0;
    int i=y*image->width+x;
    color_t* pix=(color_t*)image->pixmap; //help
    //*((color_t*)image->pixmap +i)
    *color=pix[i];
    return 1;
}
//src es la imagen origen
//dst es la imagen destino
//msize distancia del centro de la máscara a uno de los lados

int image_blur(image_t* src, image_t* dst, int msize){
    int k=msize;
    const int area=(2*k+1)*(2*k+1);
    if(src->width!=dst->width) return 0;
    if(src->height!=dst->height) return 0;
    if(msize<0) return 0;
    color_t pix;
    pix.a=255;
    for(int y=0;y<src->height;y++){
        for(int x=0;x<src->width;x++){
            unsigned uR=0;
            unsigned uG=0;
            unsigned uB=0;
            for(int r=-k;r<=k;r++){
                for(int c=-k;c<=k;c++){
                    if(y+r<0 || y+r>src->height) continue;
                    if(x+c<0 || x+c>src->width) continue;
                    image_get(src,x+c,y+r,&pix);
                    uR+=pix.r;
                    uG+=pix.g;
                    uB+=pix.b;
                    //y+r
                    //x+c
                }
            }
            pix.r=uR/area;
            pix.g=uG/area;
            pix.b=uB/area;
            image_set(dst,x,y,pix);
        }
    }
    return 1;
}
