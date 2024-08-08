//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//// Hàm đệ quy tính tổng S1(n) = 1 + 2 + 3 + ... + n
//int S1(int n) {
//	if (n == 1)
//		return 1;
//	return n + S1(n - 1);
//}
//
//// Hàm đệ quy tính tổng S2(n) = 1 + 1/2 + 1/3 + ... + 1/n
//double S2(int n) {
//	if (n == 1)
//		return 1.0;
//	return 1.0 / n + S2(n - 1);
//}
//
//// Hàm đệ quy tính tổng S3(n) = 1*2 + 2*3 + 3*4 + ... + n(n + 1)
//int S3(int n) {
//	if (n == 1)
//		return 1 * 2;
//	return n * (n + 1) + S3(n - 1);
//}
//
//int main() {
//	int n;
//	printf("Nhap gia tri cua n: ");
//	scanf("%d", &n);
//
//	int sum1 = S1(n);
//	double sum2 = S2(n);
//	int sum3 = S3(n);
//
//	printf("Tong S1(n) = 1 + 2 + 3 + ... + %d la: %d\n", n, sum1);
//	printf("Tong S2(n) = 1 + 1/2 + 1/3 + ... + 1/%d la: %.2f\n", n, sum2);
//	printf("Tong S3(n) = 1*2 + 2*3 + 3*4 + ... + %d(%d + 1) la: %d\n", n, n, sum3);
//
//	system("pause");
//	return 0;
//}
