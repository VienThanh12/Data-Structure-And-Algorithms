void quickSort(int a[], int left, int right) {
	int i = left, j = right;
	int pivot = a[left + rand() % (right - left)];
	// chia dãy thành 2 phần
	while (i <= j) {
		while (a[i] < pivot) ++i;
		while (a[j] > pivot) --j;

		if (i <= j) {
			swap(a[i], a[j]);
			++i;
			--j;
		}
	}
	// Gọi đệ quy để sắp xếp các nửa
	if (left < j) quickSort(a, left, j);
	if (i < right) quickSort(a, i, right);
}
