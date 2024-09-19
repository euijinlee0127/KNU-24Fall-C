#include <stdio.h>

int main(void) {
    int operation;
    double num1, num2, result;

    printf("연산 기호 입력 (덧셈:1, 뺄셈:2, 곱셈:3, 나눗셈:4): ");
    scanf_s("%d", &operation);

    printf("숫자 두 개 입력: ");
    scanf_s("%lf %lf", &num1, &num2);

    if (operation == 1) {
        result = num1 + num2;
        printf("정답: %.2lf\n", result);
    }
    else if (operation == 2) {
        result = num1 - num2;
        printf("정답: %.2lf\n", result);
    }
    else if (operation == 3) {
        result = num1 * num2;
        printf("정답: %.2lf\n", result);
    }
    else if (operation == 4) {
        if (num2 != 0) {
            result = num1 / num2;
            printf("정답: %.2lf\n", result);
        }
        else {
            printf("오류: 0으로 나눌 수 없습니다.\n");
        }
    }
    else {
        printf("오류: 잘못된 연산 기호입니다.\n");
    }

    return 0;
}

