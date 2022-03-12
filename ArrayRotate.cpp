#include<iostream>
using namespace std;
int main()
{
    int x,i,arr[7] = {10, 20, 30, 40, 50, 60, 70};
    x = arr[0];
    arr[0] = arr[1];
    arr[7] = x;
    for (i = 0; i < 7;i++)
    {
        arr[i] = arr[i + 1];
        cout<< arr[i] << " ";
    }
    return 0;
}