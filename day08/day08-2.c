#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

void fillRandom(int array[10][10]) {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            array[i][j] = rand() % 20 + 1;
        }
    }
}

void printArray(int array[10][10]) {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%2d ", array[i][j]);
        }
        printf("\n");
    }
}

void movePointer(int(*array)[10]) {
    int x = 0, y = 0;
    int lastX = x, lastY = y;

    while (1) {

        if (x < 0 || x >= 10 || y < 0 || y >= 10) {
            break;
        }

        int currentValue = array[x][y];
        printf("현재 위치 : (%d, %d), 배열의 값: %d\n", x, y, currentValue);

        lastX = x;
        lastY = y;

        int newX = x + (y + currentValue) / 10;
        int newY = (y + currentValue) % 10;

        x = newX;
        y = newY;

        if (x >= 10) {
            break;
        }
    }

    printf("더 이상 이동할 수 없습니다\n");
    printf("종료 위치: (%d, %d), 배열의 값: %d\n", lastX, lastY, array[lastX][lastY]);
}

int main() {
    srand(time(NULL));
    int array[10][10];

    fillRandom(array);
    printArray(array);
    movePointer(array);

    return 0;
}