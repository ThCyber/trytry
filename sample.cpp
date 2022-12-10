#include <bits/stdc++.h>
using namespace std;

void binarySearch(int* arr, int target, int leftMost,int rightMost)
{
	//find midpoint
	int midpoint = (leftMost+rightMost)/2;
	if (target == arr[midpoint]){
		cout << (midpoint+1);
		return;
	}
	else if(leftMost > rightMost){
		cout << "There is no such number!";
		return;
	}
	else if(target < arr[midpoint]){
		rightMost = midpoint-1;
	}
	else if(target > arr[midpoint]){
		leftMost = midpoint+1;
	}
	binarySearch(arr, target, leftMost, rightMost);
	return;
}

int main ()
{
	
	int arr[6] = {1,2,5,6,7,8};
	int target_value;
	cin >> target_value;
	binarySearch(arr, target_value, 0, 5);
	return 0;
}