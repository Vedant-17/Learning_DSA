#include<iostream>
using namespace std;

void rotatebyone(int arr[],int n)
{
    int temp = arr[0];
    for (int i = 1; i < n ;i++)
    {
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = temp;
}
void rotatebyD(int arr[],int n, int d)
{
    for (int i = 0; i < d;i++)
    {
        rotatebyone(arr, n);
    }
}
void printArray(int arr[],int n)
{
    for (int i = 0; i < n ;i++)
    {
        cout << arr[i];
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr)/sizeof(arr[0]);
    rotatebyD(arr, n,5);
    printArray(arr, n);
    return 0;
}