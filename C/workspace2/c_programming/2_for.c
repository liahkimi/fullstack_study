#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int i = 10;

	// for�� �ʱ���� int ������ ���� ���m�� �ϸ鼭 �����ϱ�!
	// �Լ��� ���� �� �� �� �� ����!
	for (int i = 0; i < 3; i++) { // �����Ŀ� ; �� ���� �ʴ´�.
		int data = 49; // for�� �ȿ��� ������ ������ for�� �ȿ����� ��밡��.
		printf("for�� ���� i�� �� : %d\n", i);
	}

	// for���� �ʱ�Ŀ��� ������ ������ ���������Դϴ�.
	// for�� ������ ����Ǹ� �޸𸮿��� �����ȴ�.
	i++;
	printf("for�� �ܺ��� i�� �� : %d\n", i);
	// data; // for�� �ȿ��� ������ ������ for�� �ȿ����� ��밡��.

	// for���� Ȱ���� ����
	printf("\n---------- for���� Ȱ���� ���� ----------\n");

	// 1. 1���� 5������ ������ for���� Ȱ���Ͽ� ���ϱ�
	int sum = 0; // ������ ������ ����

	for (int i = 1; i <= 5; i++) {
		sum += i;
	}

	printf("1���� 5������ ���� : %d\n", sum);

	// 2. 1���� 50������ �� �߿� ¦���� �� ���ϱ�
	sum = 0; // ������ ����� ����, ���� �����س��� ������ �״�� �������� 0���� ���� ����.

	//for (int i = 1; i <= 50; i++) {
	//	if (i % 2 == 0) { // i�� ¦�����
	//		sum += i;
	//	}
	//} // �ݺ�Ƚ�� : 50

	//int count = 0;

	//for (int i = 2; i <= 50; i+=2) {
	//	sum += i;
	//	count++;
	//} // �ݺ�Ƚ�� : 25

	//printf("�ݺ�Ƚ�� : %d\n", count);
	//printf("1���� 50������ ¦���� �� : %d\n", sum);

	//sum = 0;

	//for (int i = 1; i <= 25; i++) {
	//	sum += i * 2;
	//} // �ݺ�Ƚ�� : 25��

	//printf("1���� 50������ ¦���� �� : %d\n", sum);

	//sum = 0;

	//for (int i = 1; i <= 50; i++) {
	//	if (i % 2 == 1) { // i �� Ȧ�����
	//		continue; // ��� ���� �ݺ� ����
	//	}
	//	sum += i;
	//}
	//printf("1���� 50������ ¦���� �� : %d\n", sum);

	// 3. 10���� 1���� ����, ���η� �̻ڰ� ����ϱ�
	//for (int i = 10; i >= 1; i--) {
	//	printf("%d ", i);
	//}

	//for (int i = 0; i < 10; i++) {
	//	printf("%d ", 10 - i);
	//}


	printf("\n---------- for���� Ȱ���� ������ ���� ----------\n");

	// ���ϴ� ���� �Է� ���� ��, �ش� ���� ����ϱ�
	int dan;
	printf("���� ���� �� : ");
	scanf("%d", &dan);

	printf("===== %d�� =====\n", dan);

	for (int i = 0; i < 9; i++) {
		printf("%d * %d = %2d\n", dan, i + 1, dan * (i + 1));
	}

	//printf("%d * %d = %d\n", dan, 1, dan * 1);
	//printf("%d * %d = %d\n", dan, 2, dan * 2);
	//printf("%d * %d = %d\n", dan, 3, dan * 3);
	//printf("%d * %d = %d\n", dan, 4, dan * 4);
	//printf("%d * %d = %d\n", dan, 5, dan * 5);
	//printf("%d * %d = %d\n", dan, 6, dan * 6);
	//printf("%d * %d = %d\n", dan, 7, dan * 7);
	//printf("%d * %d = %d\n", dan, 8, dan * 8);
	//printf("%d * %d = %d\n", dan, 9, dan * 9);


	return 0;
}