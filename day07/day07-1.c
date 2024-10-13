#include <stdio.h>

int main(void)
{
    int num;

    printf("정수를 입력 하세요 : ");
    scanf_s("%d", &num);

    for (int i = 0; i < num; i++)
    {
        for (int k = i; k < (num - 1); k++)
        {
            printf(" ");
        }
        for (int k = 0; k <= (i * 2); k++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
