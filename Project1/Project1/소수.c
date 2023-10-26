//#include<stdio.h>
//#include<math.h>
//
//#pragma warning(disable:4996)
//
//
//#1
//int main() {
//	int N;
//	int M=0;
//	printf("수를 입력하세요: ");
//	scanf_s("%d",&N);
//	for (int a = 2; a <= N; a++) {
//		int cnt = 0;
//		for (int b = 1; b <= a; b++) {
//			M++;
//			if (a % b == 0) {
//				cnt++;
//			}
//		}
//		if (cnt == 2) {
//			printf("%d   ", a);
//		}
//	}
//	printf("\n반복횟수 : %d",M);
//
//	return 0;
//}
//
//
//
////#2
//int main() {
//	int N;
//	int M=0;
//	printf("수를 입력하세요: ");
//	scanf_s("%d", &N);
//	for (int a = 2; a <= N; a++) {
//		int cnt = 0;
//		for (int b = 2; b < a; b++) {
//			M++;
//			if (a % b == 0) {
//				cnt++;
//				break;
//			}
//		}
//		if (cnt == 0) {
//			printf("%d   ", a);
//		}
//	}
//	printf("\n반복횟수=%d", M);
//	return 0;
//}
//
////#3
//int main() {
//	
//		int N;
//		int M = 0;
//		printf("수를 입력하세요: ");
//		scanf("%d", &N);
//		for (int a = 2; a <= N; a % 2 == 1 ? a++ : a += 2) {
//			int cnt = 0;
//			for (int b = 3; b < a; b += 2) {
//				M++;
//				if (a % b == 0) {
//					cnt++;
//					break;
//				}
//			}
//			if (cnt == 0) {
//				printf("%d   ", a);
//			}
//		}
//		printf("\n반복횟수 : %d", M);
//	
//	return 0;
//}
//
////#4
//int main() {
//	int N;
//	int M = 0;
//	printf("수를 입력하세요: ");
//	scanf_s("%d", &N);
//	for (int a = 2; a <= N; a % 2 == 0 ? a++:a+=2) {
//		int cnt = 0;
//		for (int b = 3; b <= sqrt(a); b+=2) {
//			M++;
//			if (a % b == 0) {
//				cnt++;
//				break;
//			}
//		}
//		if (cnt == 0) {
//			printf("%d   ", a);
//		}
//	}
//	printf("\n반복횟수 : %d", M);
//	return 0;
//}
//
////#5
//
//int main() {
//	int N;
//	int M = 0;
//	printf("수를 입력하세요: ");
//	scanf_s("%d", &N);
//	for (int a = 2; a <= N; a % 2 == 0 ? a++ : a += 2) {
//		int cnt = 0;
//		for (int b = 1; b <= sqrt(a); b+=2) {
//			M++;
//			if (a % b == 0) {
//				cnt++;
//			}
//		}
//		if (cnt == 0) {
//			printf("%d   ", a);
//		}
//	}
//	printf("\n반복횟수 : %d", M);
//
//	return 0;
//}