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

     static void Quicksort(List<int> list, int low, int high)
        {
            int i = low, j = high;
            int x = list[(low + high) / 2];
            do
            {
                while (list[i] < x)
                    i++;

                while (list[j] > x)
                    j--;

                if(i <= j)
                {
                    swap(list, i, j);
                    i++;
                    j--;
                }

            } while (i <= j);

            if (low < j)
                Quicksort(list, low, j);
            if (i < high)
                Quicksort(list, i, high);
        }
