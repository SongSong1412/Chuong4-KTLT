#include <stdio.h>

// Ham tim kiem nhi phan de quy
int TimKiemNhiPhan(int a[], int left, int right, int x) {
	if (left <= right) {
		int mid = left + (right - left) / 2;

		// Neu phan tu o giua la x
		if (a[mid] == x)
			return mid;

		// Neu x nho hon phan tu o giua, tìm kiếm bên trái
		if (a[mid] > x)
			return TimKiemNhiPhan(a, left, mid - 1, x);

		// Neu x lon hon phan tu o giua, tim kiem ben phai
		return TimKiemNhiPhan(a, mid + 1, right, x);
	}

	// Neu khong tim thay x
	return -1;
}

int main() {
	int a[] = { 1, 3, 5, 7, 9, 21, 33, 45, 57, 79 };
	int n = sizeof(a) / sizeof(a[0]);
	int x;

	printf("Nhap gia tri can tim: ");
	scanf("%d", &x);

	int result = TimKiemNhiPhan(a, 0, n - 1, x);

	if (result != -1)
		printf("Gia tri %d duoc tim thay tai vi tri %d.\n", x, result);
	else
		printf("Gia tri %d khong co trong mang.\n", x);

	return 0;
}
