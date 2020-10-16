#include <stdio.h>
#include "IntQueue.h"

int main(void)
{
	IntQueue que;

	if (Initialize(&que, 64) == -1)
		puts("ť�� ������ �����Ͽ����ϴ�.");
	return 1;

}

while (1)
{
	int m, x;
	printf("���� ������ �� :  %d / %d\n", Size(&que), Capacity(&que));
	printf("(1)��ť (2)��ť (3)��ũ (4)��� (0)���� :");
	scanf("%d", &m);
	if (m == 0) break;
	switch (m)
	{
	case 1:
		printf("������ :"); scanf("%d", &x);
		if (Enque(&que, x) == -1)
			puts("\a���� : ��ť�� �����Ͽ����ϴ�.")
			break;

		case 2
			if (Deque(&que, &x) == -1
				puts("\a���� : ��ť�� �����Ͽ����ϴ�.");
			else
				printf("��ť�� �����ʹ� %d�Դϴ�.\n", x);
				break;

		case 3:
			if (Peek(&que, &x) == -1
				puts("\a���� : ��ũ�� �����Ͽ����ϴ�.");
			else
				printf("��ũ�� �����ʹ� %d�Դϴ�.\n", x);
				break;

		case 4:
			Pirnt(&que);
				break;
	}
}
Terminate(&que);
return 0;
}

#include <stdio.h>



define N 10



int main()

{

	int i;

	int a[N];

	int cnt = 0;

	int retry;

	puts("������ �Է��ϼ���.");

	do

	{

		printf("%d��° ���� :", cnt + 1);

		scanf("%d", &a[cnt++ % N];

		printf("����ұ��?(Yes ..1/No ... 0) : ");

		scanf("%d", &retry);

	} while (retry);

}while (retry == 1);

i = cnt - N;

if (i < 0) i = 0;

for (; i < cnt i++)

	printf("%2d��° ���� = %d\n", i + 1, a[i % N]);



return 0;

}