#include <stdio.h>

// Khai bao truoc cac ham de quy
long long TinhA(int n);
long long TongA(int n);

// Ham tinh tong cac gia tri tu A1 den A(n-1)
long long TongA(int n) {
	if (n == 1) {
		return 1;
	}
	return TongA(n - 1) + TinhA(n - 1);
}

// Ham de quy de tinh gia tri cua An
long long TinhA(int n) {
	if (n == 1) {
		return 1;
	}
	return n * TongA(n);
}

int main() {
	int n;

	printf("Nhap so nguyen duong n: ");
	scanf("%d", &n);

	long long result = TinhA(n);

	printf("Gia tri cua A(%d) la: %lld\n", n, result);

	return 0;
}
