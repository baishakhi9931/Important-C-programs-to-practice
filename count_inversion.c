/* 
Submitted by: Sneha Jaiswal
GitHUb Link: https://github.com/Sneha-jais
*/

#include <stdio.h>
#include <stdlib.h>
int getCount(int arr[], int n)
{
	int inv_count = 0;
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (arr[i] > arr[j])
				inv_count++;

	return inv_count;
}


int main()
{
	int arr[] = {1, 20, 6, 4, 5};
	int n = sizeof(arr) / sizeof(arr[0]);
	printf(" Number of inversions are %d \n",
		getCount(arr, n));
	return 0;
}
