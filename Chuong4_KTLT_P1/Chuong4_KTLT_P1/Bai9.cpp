#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// Hàm tính biểu thức U(n)
int U(int n) {
	if (n < 6) {
		return n;
	}
	return U(n - 5) + U(n - 4) + U(n - 2) + U(n - 1);
}

int main() {
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);

	int result = U(n);
	printf("Gia tri U(%d) la: %d\n", n, result);

	system("pause");
	return 0;
}
