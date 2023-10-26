#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	int arr[100];
	int n,c;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	for (int k = 0; k < n-1; k++) {
		for (int t = 0; t < n-1; t++) {
			if ( arr[t]>arr[t+1]) {
				c = arr[t + 1];
				arr[t + 1] = arr[t];
				arr[t] = c;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		printf("%d   ",arr[i]);
	}


	return 0;
}