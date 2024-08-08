//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//
//int S1(int n) {
//	if (n == 1) return 1;
//	return n + S1(n - 1);
//}
//
//double S2(int n) {
//	if (n == 1) return sqrt(2.0);
//	return sqrt(2.0 + S2(n - 1));
//}
//
//double S3(int n) {
//	if (n == 1) return 0.5;
//	return (double)n / (n + 1) + S3(n - 1);
//}
//
//double S4(int n) {
//	if (n == 1) return 1.0;
//	return 1.0 / (2 * n + 1) + S4(n - 1);
//}
//
//int S5(int n) {
//	if (n == 1) return 1 * 2;
//	return n * (n + 1) + S5(n - 1);
//}
//
//double S6(int n) {
//	if (n == 1) return 1.0 / (1 * 2 * 3);
//	return 1.0 / (n * (n + 1) * (n + 2)) + S6(n - 1);
//}
//
//int S7(int n) {
//	if (n == 1) return 1;
//	return n * n + S7(n - 1);
//}
//
//int S8(int n) {
//	if (n == 1) return 1;
//	return (n * (n + 1)) / 2 + S8(n - 1);
//}
//
//double factorial(int n) {
//	if (n == 0 || n == 1) return 1;
//	return n * factorial(n - 1);
//}
//
//double S9(int n) {
//	if (n == 1) return (1 + 2) / factorial(2);
//	int sign = (n % 2 == 0) ? 1 : -1;
//	return sign * (n + (n + 1)) / factorial(n + 1) + S9(n - 1);
//}
//
//double S10(int n) {
//	if (n == 1) return (1.0 * 2) / (2 + sqrt(3.0));
//	return (double)(n * (n + 1)) / ((n + 1) + sqrt((double)(n + 2))) + S10(n - 1);
//}
//
//double S11(int n) {
//	if (n == 1) return (1.0 + sqrt(1.0 + 2)) / ((2 + sqrt(3.0)) * factorial(2));
//	return (n + sqrt((double)(n + (n + 1)))) / ((n + 1) + sqrt((double)(n + 2))) / factorial(n + 1) + S11(n - 1);
//}
//
//int main() {
//	int choice, n;
//	printf("Chon mot bai toan (1-11): ");
//	scanf("%d", &choice);
//	printf("Nhap n: ");
//	scanf("%d", &n);
//
//	switch (choice) {
//	case 1:
//		printf("S(%d) = %d\n", n, S1(n));
//		break;
//	case 2:
//		printf("S(%d) = %.2f\n", n, S2(n));
//		break;
//	case 3:
//		printf("S(%d) = %.2f\n", n, S3(n));
//		break;
//	case 4:
//		printf("S(%d) = %.2f\n", n, S4(n));
//		break;
//	case 5:
//		printf("S(%d) = %d\n", n, S5(n));
//		break;
//	case 6:
//		printf("S(%d) = %.2f\n", n, S6(n));
//		break;
//	case 7:
//		printf("S(%d) = %d\n", n, S7(n));
//		break;
//	case 8:
//		printf("S(%d) = %d\n", n, S8(n));
//		break;
//	case 9:
//		printf("S(%d) = %.2f\n", n, S9(n));
//		break;
//	case 10:
//		printf("S(%d) = %.2f\n", n, S10(n));
//		break;
//	case 11:
//		printf("S(%d) = %.2f\n", n, S11(n));
//		break;
//	default:
//		printf("Lua chon khong hop le!\n");
//	}
//
//	system("pause");
//	return 0;
//}
