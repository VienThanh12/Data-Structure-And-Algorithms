namespace SelectionSort
{
    internal class Program
    {
        static void SelectionSort(List <int> list)
        {
            int i = 0, min = 0;

            for (i = 0; i < list.Count; i++)
            {
                min = i;
                for (int j = i + 1; j < list.Count; j++)
                {
                    if (list[j] < list[min])
                    {
                        min = j;
                    }
                }
                int temp = list[min];
                list[min] = list[i];
                list[i] = temp;
            }
        }
        static void PrintList(List<int> list)
        {
            foreach (int element in list)
            {
                Console.Write(element + " ");
            }
            Console.WriteLine();
        }
        static void Main(string[] args)
        {
            List<int> list = new List<int> { 11, 4, 5, 8, 2 };
            SelectionSort(list);
            PrintList(list);
            foreach (int element in list)
            {
                Console.WriteLine(element);
            }
        }
    }
}
