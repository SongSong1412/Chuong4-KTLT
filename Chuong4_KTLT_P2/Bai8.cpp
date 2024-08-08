#include <stdio.h>

// Ham de quy tinh f(n)
int Tinhf(int n) {
	if (n == 1) return 1;
	if (n % 2 == 0) return 2 * Tinhf(n / 2);
	else return 2 * Tinhf(n / 2) + 3 * Tinhf(n / 2 + 1);
}

int main() {
	int n = 5;
	printf("f(5) = %d\n", Tinhf(n)); // Tinh va in gia tri f(5)

	// Tinh va in gia tri f(n) voi n duoc nhap tu ban phim
	printf("Nhap so nguyen duong n: ");
	scanf("%d", &n);
	printf("f(%d) = %d\n", n, Tinhf(n));

	return 0;
}
