// Считать массив из 12 элементов и выполнить циклический сдвиг ВПРАВО на 4
// элемента.
#include <stdio.h>
#include <locale.h>

void ShiftR(int a[], int res[], int size, int ofset)
{
    int tmp = 0;
    for (int i = 1; i<size; i++)
    {
        tmp = i + ofset;
        if (tmp >= size) tmp = tmp - size;
        res[tmp] = a[i];
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
    enum {ARR_SIZE = 12, OFSET = 4};
    int arr[ARR_SIZE];
    int res[ARR_SIZE];
    printf("Введите %d целых чисел через пробел:", ARR_SIZE);
    input_arr(arr, ARR_SIZE);
    ShiftR(arr, res, ARR_SIZE, OFSET);
    printf("Циклический сдвиг исходного массива вправо на %d элемента:\n", OFSET);
    
    for(int i = 0; i<ARR_SIZE; i++)
    {
        printf("%d\t", res[i]);
    }
    return 0;
 }