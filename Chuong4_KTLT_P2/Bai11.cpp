#include <stdio.h>

// Ham tinh so Fibonnaci thu n
long long Fibonacci(int n) {
	if (n <= 2)
		return 1;
	return Fibonacci(n - 1) + Fibonacci(n - 2);
}

// Ham xuat day gom n so Fibonacci
void XuatDayFibonacci(int n) {
	printf("Day %d so Fibonacci dau tien:\n", n);
	for (int i = 1; i <= n; i++) {
		printf("%lld ", Fibonacci(i));
	}
	printf("\n");
}

int main() {
	int n;
	printf("Nhap so luong so Fibonacci muon xuat: ");
	scanf("%d", &n);
	XuatDayFibonacci(n);
	return 0;
}
