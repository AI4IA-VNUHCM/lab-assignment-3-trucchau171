/*
1.	Input an array of n integers. Write a function to check whether
the array is symmetric or not (optional: use recursive)
Ex:
 ____________________________________ 
| Input: 1 2 3 2 1                   |
| Output: symmetric                  |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Ex1(int arr[], int begin, int end){
	if (begin >= end)
	{
		return 1;
	}
	if (arr[begin] == arr[end])
	{
		return Ex1(arr, begin + 1, end - 1);
	}
	else return 0;
    
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	argc--;
	int testcase[argc],i;
	for(i=0; i<argc;i++){
		testcase[i] = atoi(argv[i+1]);
	}
	
	if (Ex1(testcase, 0, argc-1) == 1)
	{
		printf("symmetric");
	}
	else printf("asymmetric");
	
	return 0;
}
