#include<stdio.h>
#include<stdlib.h>
#include "lodepng.h"
#include "image.h"
void print_help(void){
    fprintf(stderr,"usage: sempc <input.png> <output.png> <dist>");
    exit(1);
}
void error_msg(char* message){
    fprintf(stderr,message);
    exit(1);
}
int main(int argc, char** argv){
    if(argc!=4)print_help();
    int msize=atof(argv[3]);
    if(msize<0)error_msg("Mask size must be greater than 0");
    image_t image;
    image_create(&image,image.width,image.height);
    if(!image_load(&image,argv[1]))error_msg("Unable to load the image");
    printf("%u",image.width);
    printf("x%u\n",image.height);
    //size=width*height *4*szyeof(unsigned cahr)
    //unsigned size= width*height;
    //unsigned char R,G,B,A,Y;
   /* color_t gray,pixel;
    for(unsigned  y=0;y<image.height;y++){
        for (unsigned  x = 0; x < image.width; x++)
        {
            image_get(&image,x,y,&pixel);
            
            gray.r=(unsigned char)(0.3*pixel.r+0.59*pixel.g+0.11*pixel.b);
            gray.g=gray.r;
            gray.b=gray.r;
            gray.a=pixel.a;
            image_set(&image,x,y,gray);
        }
    }
*/
//Desenfoque
    image_t dest;
    image_create(&dest,image.width,image.height);
    image_blur(&image,&dest,msize);


//Guardsmo
   if(!image_save(&dest,argv[2])) error_msg("Unable to save te image");
    image_destroy(&image);
    image_destroy(&dest);
    return 0;
}