/*
4. Write a function to check whether a given array is sorted or not.
Return 1 if sorted increasing, -1: decreasing, 0: not sorted
Ex:
______________________________________
| Input: 8 7 9 2 1 5 2               |
| Output: 0                          |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isInc(int arr[], int n)
{
	for (int i = 1; i < n; i++)
	{
		if (arr[i] < arr[i - 1])
		{
			return 0;
		}
	}
	return 1;
}

int isDec(int arr[], int n)
{
	for (int i = 1; i < n; i++)
	{
		if (arr[i] > arr[i - 1])
		{
			return 0;
		}
	}
	return -1;
}

int Ex4(int arr[], int n){
	if (n == 1)
	{
		return 1;
	}
	else
	{
		if (arr[0] <= arr[1])
		{
			return isInc(arr, n);
		}
		else return isDec(arr, n);
	}
	
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	argc--;
	int testcase[argc],i;
	for(i=0; i<argc;i++){
		testcase[i] = atoi(argv[i+1]);
	}
	
	printf("%d", Ex4(testcase, argc));

	return 0;
}