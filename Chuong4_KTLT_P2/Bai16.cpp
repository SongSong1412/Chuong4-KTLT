#include <stdio.h>

// Ham tinh Xn bang de quy
long long TinhXnDeQuy(int n) {
	if (n == 1 || n == 2)
		return 1;  // X1 = 1 và X2 = 1
	return TinhXnDeQuy(n - 1) + (n - 1) * TinhXnDeQuy(n - 2);  // Xn = Xn-1 + (n-1)Xn-2
}
#include <stdio.h>

// Ham tinh Xn bang cach khong de quy (khu de quy)
long long TinhXnKhuDeQuy(int n) {
	if (n == 1 || n == 2)
		return 1;  // X1 = 1 và X2 = 1

	long long X1 = 1, X2 = 1, Xn;

	for (int i = 3; i <= n; i++) {
		Xn = X2 + (i - 1) * X1;
		X1 = X2;
		X2 = Xn;
	}

	return Xn;
}

int main() {
	int n;

	printf("Nhap so n: ");
	scanf("%d", &n);

	long long XnDeQuy = TinhXnDeQuy(n);
	long long XnKhuDeQuy = TinhXnKhuDeQuy(n);

	printf("Gia tri Xn tinh bang de quy: %lld\n", XnDeQuy);
	printf("Gia tri Xn tinh bang khu de quy: %lld\n", XnKhuDeQuy);

	return 0;
}
