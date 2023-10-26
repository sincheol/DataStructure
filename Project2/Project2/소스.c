/*#include<stdio.h>

int main() {
	int a, b, c, d, cnt;
	c = 0;
	cnt = 0;
	printf("Enter two integers>> ");
	scanf_s("%d%d", &a, &b);
	if (a == 0 && b == 0) {
		return 0;
	}
	if (a >= 1) {
		for (int i = 1; i <= b;i) {
			d = i;
			i = c + d;
			if (i >= a) {

				for (int k = i; k <= b;k) {
					d = k;
					k = c + d;
					c = d;
					cnt++;
				}
				break;
			}
			c = d;
		}
	}
	else if (a == 0) {
		cnt = 0;
		for (int i = 1; i <= b;i) {
			d = i;
			i = c + d;
			c = d;
			cnt++;
		}
	}
	printf("%d", cnt);




	return 0;
}
*/
//1123581321