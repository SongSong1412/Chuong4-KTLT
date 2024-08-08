#include <stdio.h>

// Ham tim so Fibonacci lon nhat nhưng nho hon n (khu de quy)
long long FibonaccimaxKhuDeQuy(int n) {
	if (n <= 1) {
		return 0;
	}
	long long a = 1, b = 1, c = 1;
	while (c < n) {
		a = b;
		b = c;
		c = a + b;
	}
	return b;
}

int main() {
	int n;
	printf("Nhap so nguyen duong n: ");
	scanf("%d", &n);

	printf("So Fibonacci lon nhat nhung nho hon %d (khu de quy): %lld\n", n, FibonaccimaxKhuDeQuy(n));

	return 0;
}
