#include <stdio.h>
int main(void) {
	int op;
	printf("원하는 기능을 입력하시오.");
		scanf_s("%d", &op);

		double num1, num2;
		printf("첫번째 숫자: ");
		scanf_s("lf", &num1);
			printf("두번째 숫자: ");
			scansf_s("lf", &num2);

			double result = 0.;
			if (op == 1) {
				result = num1 + num2;
			}

			else if (op == 2) {
				result = num1 - num2;
			}

			else if (op == 3) {
				result = num1 * num2;
			}

			else if (op == 4) {
				result = num1 / num2;
			}

			printf("%lf", result);

			return 0;
}
