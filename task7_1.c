// Ввести с клавиатуры массив из 5 элементов, найти среднее арифметическое
// всех элементов массива.
#include <stdio.h>
#include <locale.h>

float averArr(int a[], int size){
    float sum = 0;
    for (int i = 0; i<size; i++){
        sum += a[i];
    }
    return sum/size;
}


 int main (void)
 {
    setlocale(LC_ALL, "Rus");
    enum {arr_size = 5};
    int arr[arr_size];
    printf("Введите 5 целых чисел через пробел:");
    for (int i = 0; i<arr_size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Среднее арифметическое элементов введенного массива: %.3f", averArr(arr, arr_size));
    return 0;
 }