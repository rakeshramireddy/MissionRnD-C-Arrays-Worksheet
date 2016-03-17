/*
OVERVIEW:  given an array that has duplicate values remove all duplicate values.
E.g.: input: [1, 1, 2, 2, 3, 3], output [1, 2, 3]

Ex 2: [4,4,2,2,1,5] output : [4,2,1,5]

INPUTS: Integer array and length of the array .

OUTPUT: Update input array by removing duplicate values and return the final array length

ERROR CASES: Return -1 for invalid inputs.

NOTES: Don't create new array, try to change the input array.
*/

#include <stdio.h>

int removeArrayDuplicates(int *Arr, int len)
{
	int i, j, k, c = 0, temp = 0;
	if (len <= 0 || Arr == NULL)
		return -1;
	for (i = 0; i < len - temp; i++)
	{
		for (j = 0; j < len - temp; j++)
		{
			if (Arr[i] == Arr[j])
			{
				c++;
				if (c>1)
				{
					temp++;
					for (k = j; k < len; k++)
						Arr[k] = Arr[k + 1];
					j--;
				}
			}
		}
		c = 0;
	}

	
}