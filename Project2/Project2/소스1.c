/*#include<stdio.h>

int main() {
	int a, b, t;
	int arr[100];
	int cnt;
	cnt = 0;
	t = 0;
	printf("수입력하세요");
	scanf_s("%d%d", &a, &b);
	if (a < b) {
		int c;
		c = a;
		a = b;
		b = c;
	}
	for (int i = 1; i <= b; i++) {
		if (a%i == 0 && b%i == 0) {
			arr[t] = i;
			t++;
			cnt++;
		}
		
	}
	t--;
	for (int k = 0; k < cnt; k++) {
		
		printf("%d", arr[k]);
		if (k < cnt-1) {
			printf(",");
		}
	}
	return 0;
}*/