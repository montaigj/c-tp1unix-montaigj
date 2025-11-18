#include "image.h"
#include <stdio.h>

int main(int argc, char *argv[]) {
    Image *img = image_create(200, 100);

    if (img == NULL) {
        return 1;
    }

    // Génération du dégradé de bleu
    image_set_pixel(img, x, y, 0, 0, bleu); 
    image_save_txt(img, "gradient.ppm");

    image_free(img);
    return 0;
}
