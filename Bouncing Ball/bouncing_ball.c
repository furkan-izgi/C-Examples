#include <stdio.h>

typedef enum { false, true } bool;

void bounceTheBall(int width, int height){
    
    int position = 0;
    bool direction = true;  //Right: 1, Left: 0
    
    for (int i = 0; i < height; i++) {
        
        printf("|"); //start
        
        for (int j = 0; j < width; j++)
        {
            if (j != position)
            {
                printf(" ");
            } else {
                printf("*");
            }
            
        }
        
        printf("|\n"); //finish
        
        if(direction) {
            position += 1;
            if(position == width - 1) {
                direction = false;
            }
        } else {
            position -= 1;
            if(position == 0) {
                direction = true;
            }
        }
    }
}

void getInfos(void){
    int witdh, height;
    printf("Width?: ");
    scanf("%d", &witdh);
    printf("Height?: ");
    scanf("%d", &height);

    bounceTheBall(witdh, height);
}

int main(void) {
    
    getInfos();

    return 0;
}
