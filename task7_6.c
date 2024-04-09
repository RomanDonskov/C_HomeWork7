// Дан массив из 10 элементов. Определить, какое число в массиве встречается
// чаще всего. Гарантируется, что такое число ровно 1.
#include <stdio.h>
#include <locale.h>

int SeekMaxFrq(int a[], int size)
{
    int maxFr, carrFr, elem;
    elem = a[0];
    maxFr = 1;
    carrFr = 1;
    for (int i = 1; i<size; i++)
    {
        if (a[i] == elem) maxFr++;
    }
    
    for (int i = 1; i<size-1; i++)
    {    
        for (int j = i+1; j<size; j++)
        {
            if (a[i] == a[j])
            {
            carrFr++;
            }
        }
        if (carrFr>maxFr) 
        {
            elem = a[i];
            maxFr = carrFr;
        }
    }
    return elem;
}

int input_arr(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    return 0;
}

 int main (void)
 {
    setlocale(LC_ALL, "Rus");
    enum {ARR_SIZE = 10};
    int arr[ARR_SIZE];
    
    printf("Введите %d целых чисел через пробел:", ARR_SIZE);
    input_arr(arr, ARR_SIZE);
    
    printf("Чаще всего встречается число %d", SeekMaxFrq(arr, ARR_SIZE));
    
    return 0;
 }