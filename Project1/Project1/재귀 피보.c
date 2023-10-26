#include<stdio.h>
#pragma warning(disable:4996)
//N입력하면 N번째까지의 피보나치수 나열 1부터시작한다.
int Fibo(int a);
int main_재귀() {
	int num;
	printf("정수를 입력하세요");
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
//피보나치
//0112358