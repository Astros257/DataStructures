#include <iostream>
#include"Binary Search.h"
using namespace std;

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int size = sizeof(arr) / sizeof(arr[0]);

	std::cout << binary_search(arr, size, 0);


	return 0;
}