#include <stdio.h>

// Khai bao nguyen mau cac ham
int TinhXn(int n);
int TinhYn(int n);

// Ham tinh so hang thu n cua day x_n
int TinhXn(int n) {
	if (n == 0)
		return 1;  // x0 = 1
	return TinhXn(n - 1) + TinhYn(n - 1);  // xn = xn-1 + yn-1
}

// Ham tinh so hang thu n cua day y_n
int TinhYn(int n) {
	if (n == 0)
		return 0;  // y0 = 0
	return 3 * TinhXn(n - 1) + 2 * TinhYn(n - 1);  // yn = 3xn-1 + 2yn-1
}

int main() {
	int n;
	printf("Nhap so n: ");
	scanf("%d", &n);

	int xn = TinhXn(n);
	int yn = TinhYn(n);

	printf("So hang thu %d cua day x_n la: %d\n", n, xn);
	printf("So hang thu %d cua day y_n la: %d\n", n, yn);

	return 0;
}
