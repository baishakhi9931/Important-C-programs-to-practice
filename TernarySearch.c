/* 
Submitted by: Sneha Jaiswal
GitHUb Link: https://github.com/Sneha-jais
*/

#include <stdio.h>

int ternarySearch(int l, int r, int key, int ar[])
{
	if (r >= l) {

		int mid1 = l + (r - l) / 3;
		int mid2 = r - (r - l) / 3;

		// Check if key is present at any mid
		if (ar[mid1] == key) {
			return mid1;
		}
		if (ar[mid2] == key) {
			return mid2;
		}

		if (key < ar[mid1]) {

			// The key lies in between l and mid1
			return ternarySearch(l, mid1 - 1, key, ar);
		}
		else if (key > ar[mid2]) {

			// The key lies in between mid2 and r
			return ternarySearch(mid2 + 1, r, key, ar);
		}
		else {

			// The key lies in between mid1 and mid2
			return ternarySearch(mid1 + 1, mid2 - 1, key, ar);
		}
	}

	// Key not found
	return -1;
}

int main()
{
	int l, r, p, key;

	int ar[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	l = 0;

	// length of array
	r = 9;

	key = 5;

	// Search the key using ternarySearch
	p = ternarySearch(l, r, key, ar);


	printf("Index of %d is %d\n", key, p);

	key = 50;

	// Search the key using ternarySearch
	p = ternarySearch(l, r, key, ar);

	printf("Index of %d is %d", key, p);
}
