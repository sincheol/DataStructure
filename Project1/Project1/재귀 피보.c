#include<stdio.h>
#pragma warning(disable:4996)
//N�Է��ϸ� N��°������ �Ǻ���ġ�� ���� 1���ͽ����Ѵ�.
int Fibo(int a);
int main_���() {
	int num;
	printf("������ �Է��ϼ���");
	scanf("%d", &num);
	for (int k = 1; k <= num; k++) {
		printf("%d  ", Fibo(k));
	}




	return 0;
}
int Fibo(int a) {
	if (a == 1 || a == 0) {
		return a;
	}
	else if (a >= 2) {
		return Fibo(a - 1) + Fibo(a - 2);
	}
}
//�Ǻ���ġ
//0112358