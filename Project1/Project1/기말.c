#include<stdio.h>

//1교시

// Q1) 숫자 입력 후 정렬(오름차순, 내림차순)
//swap(int *a, int *b);
//int main() {
//	int arr[100];
//	int o;
//	printf("숫자를 입력하세요 : ");
//	scanf_s("%d", &o);
//	for (int k = 0; k < o; k++) {
//		printf("숫자를 입력하세요 : ");
//		scanf_s("%d", &arr[k]);
//	}
//	for (int a = 0; a < o-1; a++) {
//		for (int k = 0; k < o - 1; k++) {
//			swap(&arr[k], &arr[k + 1]);
//		}
//	}
//	for (int r = 0; r < o; r++) {
//		printf("%d\n", arr[r]);
//	}
//
//	return 0;
//}
//
//swap(int *a,int *b) {
//	int temp;
//	if (*a > *b) {
//		temp = *a;
//		*a = *b;
//		*b = temp;
//	}
//}




// Q2) 초단위의 시간을 입력하여 시분초로 전환하기
//int main() {
//	int sec;
//	int min;
//	int hr;
//	printf("초를 입력하세요 : ");
//	scanf_s("%d", &sec);
//	hr = sec / 360;
//	min = sec % 360 / 60;
//	sec = sec % 60;
//	printf("%d시 %d분 %d초",hr,min,sec);
//	//분 60 시 360
//
//
//
//	return 0;
//}

// Q3) 두수 입력후 두수의 공약수 출력 &&출력마다 쉼표 찍기 (공약수를 배열에다가도 넣어보자!)

//int main() {
//	int a;
//	int b;
//	int c[100];
//	int k=0;
//	printf("두 수를 입력하세요 : ");
//	scanf_s("%d%d", &a, &b);
//	if (a >= b) {
//		for (int i = 1; i <= a; i++) {
//			if (a%i == 0 && b%i == 0) {
//				c[k] = i;
//				k++;
//			}
//			
//		}
//	}
//	else if (a <= b) {
//		for (int i = 1; i <= b; i++) {
//			if (a%i == 0 && b%i == 0) {
//				c[k] = i;
//				k++;
//			}
//			
//		}
//	}
//	if (k == 1) {
//		printf("%d\n", c[k-1]);
//	}
//	else if (k >= 2) {
//		for (int g = 0; g < k; g++) {
//			if (g == k - 1) {
//				printf("%d\n",c[g]);
//			}
//			else {
//				printf("%d,", c[g]);
//			}
//		}
//	}
//	
//	return 0;
//}

// Q5) 계산기 만들기
//int main()
//{
//	int num, i, temp, numindex = 0;
//	char arr[100] = { 0, };
//	int num[100] = { 0, };
//	char cal[100] = { 0, }, calindex = 0;
//	while (1)
//	{
//		gets(arr);
//		for (i = 0; arr[i]; i++)
//		{
//			if (arr[i] >= '0' && arr[i] <= '9')
//				temp = temp * 10 + arr[i] - '0';
//			else
//			{
//				if (arr[i] == '-' || arr[i] == '+')
//				{
//					num[numindex] = temp;
//					numindex++;
//					cal[calindex] = arr[i];
//					calindex++;
//					temp = 0;
//			.	}
//				printf("%3d", temp);
//				temp = 0;
//			}
//		}
//		num[numindex];
//		numindex++;
//		int res = num[0];
//		for (i = 0; i < calindex; i++)
//		{
//			if (cal[i] == '-')
//				res -= num[i + 1];
//			if (cal[i] == '+')
//				res += num[i + 1];
//		}
//
//		printf("%d\n", res);
//	}
//	return 0;
//}