#include <stdio.h>
#include <stdlib.h>

typedef struct{
  unsigned short int type;
  unsigned int size;
  unsigned short int reserved[2];
  unsigned int offset;

} FileHeader;

void fileHeaderWrite(FILE *fp, FileHeader *fh){
  fwrite(&fh->type, sizeof(unsigned short int), 1, fp);
  fwrite(&fh->size, sizeof(unsigned int), 1, fp);
  fwrite(&fh->reserved, 2 * sizeof(unsigned short int), 1, fp);
  fwrite(&fh->offset, sizeof(unsigned int), 1, fp);
}

typedef struct{
  unsigned int infosize;
  int width, height;
  unsigned short int planes;
  unsigned short int bits;
  unsigned int compression;
  unsigned int imagesize;
  int xresolution, yresolution;
  unsigned int ncolours;
  unsigned int importantcolours;

} InfoHeader;

void infoHeaderWrite(FILE *fp, InfoHeader *ih){
  fwrite(&ih->infosize, sizeof(unsigned int), 1, fp);
  fwrite(&ih->width, sizeof(int), 1, fp);
  fwrite(&ih->height, sizeof(int), 1, fp);
  fwrite(&ih->planes, sizeof(unsigned short int), 1, fp);
  fwrite(&ih->bits, sizeof(unsigned short int), 1, fp);
  fwrite(&ih->compression, sizeof(unsigned int), 1, fp);
  fwrite(&ih->imagesize, sizeof(unsigned int), 1, fp);
  fwrite(&ih->xresolution, sizeof(int), 1, fp);
  fwrite(&ih->yresolution, sizeof(int), 1, fp);
  fwrite(&ih->ncolours, sizeof(unsigned int), 1, fp);
  fwrite(&ih->importantcolours, sizeof(unsigned int), 1, fp);
}

typedef struct{
  unsigned char b;
  unsigned char g;
  unsigned char r;
  unsigned char a;

} BGRA;


unsigned char interValue(unsigned char a, unsigned char b, double i, double total){
  return i/total * a + (total-i)/total * b;
}

BGRA interBGRA(BGRA color1, BGRA color2, int i, int total){
  BGRA value = { interValue(color1.b, color2.b, i, total),
    interValue(color1.g, color2.g, i, total),
    interValue(color1.r, color2.r, i, total),
    interValue(color1.a, color2.a, i, total) };
  return value;
}

BGRA average( BGRA color ){
  double avg = ((double)color.b + color.g + color.r) / 3.0;
  BGRA value = { avg, avg, avg, 0 };
  return value;
}


int main(){
  int width = 1024, height = 1024;
  FileHeader fileHeader = {
    0x4d42, 54 + width * height * 4, {0, 0}, 54 
  };

  InfoHeader infoHeader = { 
    40, width, height, 1, 32, 0, 64, 4, 4, 4, 4
  };

  FILE *fp = fopen("output.bmp", "wb");
  fileHeaderWrite(fp, &fileHeader);
  infoHeaderWrite(fp, &infoHeader);

  int i, j;
  const BGRA red = {0, 0, 255, 0}, blue = {255, 0, 0, 0}, green = {0, 255, 0, 0}, white = {255, 255, 255, 0};
  for( i = 0 ; i < width ; ++i ){
    for( j = 0 ; j < height ; ++j ){
      //BGRA color = interBGRA( interBGRA(red, blue, i, width), interBGRA(green, white, i, width), j, height );
      fwrite( &red, sizeof(BGRA), 1, fp );
    }
  }
  fclose(fp);
  return 0;
}