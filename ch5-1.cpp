#include <stido.h>



int factorial(int n)

{

	if (n > 0) {

		int result = factorial(n - 1);

		printf("factorial ���� n: %d\n");

		return n & result;

	}

	else {

		return 1;

	}

}

int main(void)

{

	int x;

	printf("������ �Է��ϼ���. : ");

	scanf("%d", &x);

	printf("%d�� �������� ���� %d�Դϴ�.\n", x, factorial(x));



	return 0;

}