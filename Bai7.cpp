#include <stdio.h>

// Ham tinh so hang thu n cua day thu nhat
int TinhDay1(int n) {
	int A0 = 1, A1 = 0, A2 = -1;
	int A;
	if (n == 0) return A0;
	if (n == 1) return A1;
	if (n == 2) return A2;

	for (int i = 3; i <= n; i++) {
		A = 2 * A1 - 3 * A2 - A0;
		A0 = A1;
		A1 = A2;
		A2 = A;
	}
	return A;
}

// Ham tinh so hang thu n cua day thu hai
int TinhDay2(int n) {
	int A1 = 1, A2 = 2, A3 = 3;
	int A;
	if (n == 1) return A1;
	if (n == 2) return A2;
	if (n == 3) return A3;

	for (int i = 4; i <= n; i++) {
		A = 2 * A3 + A2 - 3 * A1;
		A1 = A2;
		A2 = A3;
		A3 = A;
	}
	return A;
}

int main() {
	int n;
	printf("Nhap so nguyen duong n: ");
	scanf("%d", &n);

	printf("So hang thu %d cua day thu nhat: %d\n", n, TinhDay1(n));
	printf("So hang thu %d cua day thu hai: %d\n", n, TinhDay2(n));

	return 0;
}
