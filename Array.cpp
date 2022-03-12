#include<iostream>
using namespace std;
int main()
{
	int i;
	//Declaring an array
	int arr[5] = {10, 20, 30, 40, 50};
	//Traversing array using for loop
	for ( i = 0; i < 5;i++)
	{
		cout << arr[i] << " ";
	}
	//Traversing array in reverse order
	for ( i = 4; i >= 0;i--)
	{
		cout << arr[i]<<" ";
	}
	return 0;
}
