#include <stdio.h>

//��ũ�� ���
#define MIN 5

int main() {
	////���ȭ�� ����
	////-> ������ �����ε� �ӿ� ����� ���� ������ �� ���� ����
	const int num = 10;
	////num = 222;//���ȭ�� ������ �ٸ� ������ �ٲ� �� ����.

	const int CODE = 49;//����� �빮�ڷ� ǥ�����ֱ�

	//MIN = 49; //��ũ�� ����̹Ƿ� ���� �Ұ�
	printf("��ũ�λ�� MIN : %d\n", MIN);

	//������ ���
	int a = 10;
	int b = 20;

	//int* ptr = &a;//�� : a������ �ּ�
	//ptr = &b;//������ ������ �����̱⿡ �� ���浵 ����!(���� b���ּҷ� �ٲ�)

	//������ ����� ��(�ּ�) ���� �Ұ�
	int* const ptr = &a;//ptr���� a�� �ּҰ��� ����ְ�
	//ptr = &b;//�ٸ� �ּҰ����� ����Ұ�

	//�迭
	int datas[] = { 10,20,30 }; //datas�� 10�� ����� �ּҸ� ������ �ִ�.
	//�� datas�� ������!
//datas = &b;//�迭�� ��ü������ ������ ���(ù��° ����� �ּҰ��� ������ ������ ��ҵ��� �ּҸ� �ľ��ؾ� �ϱ� ������)


// ��� ������
	const int* ptr2 = &a;
	//*ptr2 = 49; // ��� ������ �ӿ� ����Ǿ� �ִ� �ּҷ� �����ؼ� ���� ������ �� ����.
	ptr2 = &b; // �ּҰ� ������ �����ϴ�.






}