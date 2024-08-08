#include <stdio.h>

// Ham tinh Yn bang de quy
long long TinhYnDeQuy(int n) {
	if (n == 1)
		return 1; // Y1 = 1
	if (n == 2)
		return 2; // Y2 = 2
	if (n == 3)
		return 3; // Y3 = 3
	return TinhYnDeQuy(n - 1) + 2 * TinhYnDeQuy(n - 2) + 3 * TinhYnDeQuy(n - 3); // Yn = Yn-1 + 2Yn-2 + 3Yn-3
}

int main() {
	int n;

	printf("Nhap so n: ");
	scanf("%d", &n);

	long long YnDeQuy = TinhYnDeQuy(n);
	long long YnKhuDeQuy = TinhYnDeQuy(n);

	printf("Gia tri Yn tinh bang de quy: %lld\n", YnDeQuy);
	printf("Gia tri Yn tinh bang khu de quy: %lld\n", YnKhuDeQuy);

	return 0;
}
