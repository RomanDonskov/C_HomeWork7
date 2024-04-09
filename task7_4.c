// Считать массив из 10 элементов и отсортировать его по последней цифре.
#include <stdio.h>
#include <locale.h>

void SortLastDig(int a[], int size)
{
    int tmp;
    for (int i = 0; i<size-1; i++)
        for (int j = i+1; j<size; j++)
        {
            if (a[j]%10 < a[i]%10)
            {
                tmp = a[j];
                a[j] = a[i];
                a[i] = tmp;
            }
        }

}
void input_arr(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    
}

 int main (void)
 {
    setlocale(LC_ALL, "Rus");
    enum {ARR_SIZE = 10};
    int arr[ARR_SIZE];
    printf("Введите %d целых чисел через пробел:", ARR_SIZE);
    input_arr(arr, ARR_SIZE);
    SortLastDig(arr, ARR_SIZE);
    printf("Массив, отсортированный по возрастанию последней цифры элементов:\n");
    
    for(int i = 0; i<ARR_SIZE; i++)
    {
        printf("%d\t", arr[i]);
    }
    return 0;
 }