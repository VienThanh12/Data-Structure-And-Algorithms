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
