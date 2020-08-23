#pragma once

//will take in an array of integers and its size, and the value we are searching for
int binary_search(int arr[], int size, int target_value)
{
	//start of the range
	int start = 0;

	//end of the range
	int end = size -1;

	//find the midpoint of the range from start to end
	int middle;

	//keep loopiung until we find the value or untile the start var is greateer thatn the end variable
	while (start < end)
	{
		middle = (start + end) / 2;
		
		//compare the value of the ranges middle value to our target value to see if its what were looking for
		if (arr[middle] == target_value)
		{
			//return the index of its location
			return middle;
		}
		else if (arr[middle] < target_value)//set the start value 1 + the middle value since the target value is more likely to be in the right side of the array
		{
			start = middle + 1;
		}
		else//set the end value to 1 less than the middle value since the value is more likly to be in the left side of the array
		{
			end = middle - 1;
		}
	}

	//this will indicate that we have not found the value in the array
	return -1;
}