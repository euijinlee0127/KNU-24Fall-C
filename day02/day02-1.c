#include <stdio.h>
int main(void) {
	int op;
	printf("���ϴ� ����� �Է��Ͻÿ�.");
		scanf_s("%d", &op);

		double num1, num2;
		printf("ù��° ����: ");
		scanf_s("lf", &num1);
			printf("�ι�° ����: ");
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
