#include <stdio.h>

// Ham de quy phu tro de tinh so Fibonacci thu n
long long Fibonacci(int n) {
	if (n <= 2) {
		return 1;
	}
	return Fibonacci(n - 1) + Fibonacci(n - 2);
}

// Ham tim so Fibonacci lon nhat nhung nho hon n (de quy)
long long FibonaccimaxDeQuy(int n, int i, long long a, long long b) {
	if (a + b >= n) {
		return b;
	}
	return FibonaccimaxDeQuy(n, i + 1, b, a + b);
}

int main() {
	int n;
	printf("Nhap so nguyen duong n: ");
	scanf("%d", &n);

	// Khoi tao gia tri ban dau cho de quy
	long long result = FibonaccimaxDeQuy(n, 1, 1, 1);
	printf("So Fibonacci lon nhat nhung nho hon %d (de quy): %lld\n", n, result);

	return 0;
}
