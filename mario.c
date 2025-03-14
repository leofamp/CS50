#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int get_height(void);
void print_pyramid(int height);

int main (void){

int height = get_height();
print_pyramid(height);

}

int get_height(void) {
    int height;
    do {
        printf("Enter a height(1 to 8): ");
        scanf("%d", &height);
    } while (height < 1 || height > 8);
    return height;
}

void print_pyramid(int height) {
    for (int i = 0; i < height; i++){
        for (int j = 0; j < height - i - 1; j++){
            printf(".");
        }
        for (int k = 0; k <= i; k++){
            printf("#");
        }
        for (int l = 0; l < 4; l++){
            printf(" ");
        }
        for (int m = 0; m <= i; m++){
            printf("#");
        }
        for (int j = 0; j < height - i - 1; j++){
            printf(".");
        }      
        printf("\n");
    }
}

