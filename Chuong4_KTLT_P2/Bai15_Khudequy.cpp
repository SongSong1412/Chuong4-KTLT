#include <stdio.h>

// Ham tinh yn bang cach khong de quy (khu de quy)
long long TinhYnKhuDeQuy(int n) {
	if (n == 1)
		return 1; // Y1 = 1
	if (n == 2)
		return 2; // Y2 = 2
	if (n == 3)
		return 3; // Y3 = 3

	long long Y1 = 1, Y2 = 2, Y3 = 3, Yn;

	for (int i = 4; i <= n; i++) {
		Yn = Y3 + 2 * Y2 + 3 * Y1;
		Y1 = Y2;
		Y2 = Y3;
		Y3 = Yn;
	}

	return Yn;
}

int main() {
	int n;

	printf("Nhap so n: ");
	scanf("%d", &n);

	long long YnKhuDeQuy = TinhYnKhuDeQuy(n);

	printf("Gia tri Yn tinh bang khu de quy: %lld\n", YnKhuDeQuy);

	return 0;
}