namespace Quicksort
{
    internal class Program
    {
        static void swap(List<int> list, int i, int j)
        {
            int temp = list[i];
            list[i] = list[j];
            list[j] = temp;
        }
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
        static void Main(string[] args)
        {
            List<int> list = new List<int> { 10, 4, 5, 8, 2 };
             
            Quicksort(list, 0, list.Count - 1);

            Console.WriteLine();

            foreach (int element in list)
            {
                Console.Write($"{element} ");
            }
            Console.WriteLine();

        }
    }
}
