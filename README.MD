## Data Structure And Algorithms 

I can not remember all of the Data Structure And Algorithms that I have learned. So I created this repository to save all of that and I will search it much more easily. 


### Selection Sort

i: 1 -> n

j: i + 1 -> n 
min is the position that has the smallest value in the array from i + 1 -> n

swap(a[i), a[min])

int i = 0, min = 0;

            for(i = 0; i < list.Count; i++)
            {
                min = i;
                for(int j = i + 1; j < list.Count; j++)
                {
                    if (list[j] < list[min])
                    {
                        min = j;
                    }
                }
            }
            int temp = list[min];
            list[min] = list[i];
            list[i] = temp;


### Quicksort
Average time: O (n logn)
The worst case: O (n ^ 2)

The idea of algorithm Quicksort is like Binary Search. 

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

