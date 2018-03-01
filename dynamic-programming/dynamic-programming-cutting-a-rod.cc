// A Naive Recursive Solution for Rod cutting

#include <cstdio>
#include <climits>
#include <iostream>
#include <windows.h>

using namespace std;

// A utility function to get maximum

int max(int a, int b){
	return a > b ? a : b;
}

static int it = 0;

void printArray(int *arr, int size){	
    for(int n = 0; n < size; n++)  // the initializer may be an array
        std::cout << arr[n] << " ";
}

int cutRod(int price[], int n){
	if(n <= 0)
		return 0;
	
	int max_val = INT_MIN;
	
	// Recursively cut the rod
	
	for(int i = 0; i < n; i++){
		cout << it++ << " <=> ";
		printArray(price, n-i-1);
		cout << " =>> " << n - i -1 <<endl;
		Sleep(1000/3);
		max_val = max(max_val, price[i] + cutRod(price, n-i-1));
	}
	
	return max_val;
}

int main(){
	int arr[] = {1, 5, 8, 9, 10, 17, 17, 20};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("Maximum Obtainable Value is %d\n", cutRod(arr, size));
    getchar();
    return 0;
}