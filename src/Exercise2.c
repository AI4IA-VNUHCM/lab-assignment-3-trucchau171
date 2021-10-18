/*
2.	Input an array of n integers. Sort the odd numbers in
increasing order and even numbers in decreasing order.
Ex:
 ____________________________________ 
| Input: 2 5 3 4 8 6 7 9 2           |
| Output: 8 3 5 6 4 2 7 9 2          |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Ex2(int arr[], int n){
	
	int even[n], odd[n];
	int z = 0;
	int t = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] % 2 == 0)
		{
			even[z] = arr[i];
			z++;
		}
		else
		{
			odd[t] = arr[i];
			t++;
		}
	}

	for (int i = 0; i < t - 1; i++)
	{
		for (int j = i + 1; j < t; j++)
		{
			if (odd[i] > odd[j])
			{
				int temp = odd[i];
				odd[i] = odd[j];
				odd[j] = temp;
			}
		}
	}

	for (int i = 0; i < z - 1; i++)
	{
		for (int j = i + 1; j < z; j++)
		{
			if (even[i] < even[j])
			{
				int temp = even[i];
				even[i] = even[j];
				even[j] = temp;
			}
		}
	}

	int indexEven = 0;
	int indexOdd = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] % 2 == 0)
		{
			// arr[i] = even[indexEven];
			printf("%d ", even[indexEven]);
			indexEven++;
		}
		else
		{
			// arr[i] = odd[indexEven];
			printf("%d ", odd[indexOdd]);
			indexOdd++;
		}
	}
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	argc--;
	int testcase[argc],i;
	for(i=0; i<argc;i++){
		testcase[i] = atoi(argv[i+1]);
	}
	
	Ex2(testcase, argc);
	
	return 0;
}
