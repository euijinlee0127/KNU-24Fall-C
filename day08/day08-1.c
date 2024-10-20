#include <stdio.h>
#include <string.h>

void reverse(char* str);

int main() {
    char str[20];

    printf("문자열을 입력하세요: ");
    scanf_s("%19s", str, (unsigned)sizeof(str)); // 최대 19자 입력

    reverse(str);
    printf("뒤집어진 문자열: %s\n", str);

    return 0;
}

void reverse(char* str) {
    char* start = str; // 시작 포인터
    char* end = str + strlen(str) - 1; // 끝 포인터
    char temp;

    while (end > start) {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}
