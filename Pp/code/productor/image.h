#ifndef IMAGE_H
#define IMAGE_H
#include<stdint.h>
#include<stdlib.h>
#include "lodepng.h"
struct image{
    
    unsigned width;
    unsigned height;
    unsigned char* pixmap;
};
struct color{
    unsigned char r;
    unsigned char g;
    unsigned char b;
    unsigned char a;
};
typedef struct color color_t;
typedef struct image image_t;

int image_set(image_t* image, int , int y, color_t color);
int image_get(image_t* image, int , int y, color_t* color);

int image_load(image_t* image, const char* filename);
int image_save(image_t* image, const char* filename);
int image_create(image_t* image, unsigned width, unsigned height);
void image_destroy(image_t* image);

int image_blur(image_t* src, image_t* dst, int msize);
#endif
