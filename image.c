#include "image.h"
#include <stdlib.h>
#include <string.h>

Image* image_create(int width, int height) {
    Image *img = (Image *)malloc(sizeof(Image));
    img->width = width;
    img->height = height;
    img->pixels = (unsigned char*)malloc(sizeof(width * height * 3 * sizeof(unsigned int)));    
    return img;
}

void image_free(Image *img) {
    free(img->pixels);
    free(img);
}

void image_set_pixel(Image *img, int x, int y, unsigned char r, unsigned char g, unsigned char b) {
    if (img != NULL && x >= 0 && x < img->width && y >= 0 && y < img->height) {
        int index = (y * img->width +x)*3; // TODO trouvé le calcule
        img->pixels[index + 0] = r;
        img->pixels[index + 1] = g;
        img->pixels[index + 2] = b;
    }
}

void image_save_txt(Image *img, const char *filename) {
    if (img == NULL) return;

}
