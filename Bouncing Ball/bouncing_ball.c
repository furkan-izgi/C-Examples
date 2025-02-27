#include <stdio.h>
#include <stdlib.h>

typedef enum { false, true } bool;

void bounceTheBall(int width, int height) {
    
    int position = 0;
    bool direction = true; //For Right(true) and for Left(false)

    char *line = (char *)malloc((width + 3) * sizeof(char)); //Additional 3 ones for '|' (twice) and '/0'

    if(line == NULL){
        printf("Allocation failed.\n");
        free(line);
        return;
    }
    
    
    for(int i = 0; i < height; i++) {
        line[0] = '|';

        for (int j = 1; j < width + 1; j++) {
            line[j] = (j - 1 == position) ? '*' : ' ';
        }

        line[width + 1] = '|';
        line[width + 2] = '\0';

        printf("%s\n", line);

        if (direction) {
            position += 1;
            direction = position == width - 1 ? false : true;

        } else {
            position -= 1;
            direction = position == 0 ? true : false;
        }
    }

    free(line);
}

void getInfos(void) {
    int width, height;
    printf("Width?: ");
    scanf("%d", &width);
    printf("Height?: ");
    scanf("%d", &height);

    bounceTheBall(width, height);
}

int main(void) {
    getInfos();
    
    return 0;
}
