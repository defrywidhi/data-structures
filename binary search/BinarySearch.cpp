#include <iostream>
using namespace std;

int binarySearch(int arr[], int first, int last, int x)
{
    while (first <= last) {
        int mid = first + (last - first) / 2;
        
        if (arr[mid] == x)
            return mid;
            
        else if (arr[mid] > x)
            last = mid - 1;    
        else
            first = mid + 1;
    }
    return false;
}

int main() 
{
    int arr[] = {1, 3, 5, 6, 8, 9, 11, 23, 34, 70}; 
    int falue = sizeof(arr) / sizeof(arr[0]);
    
    cout << "binary search\n";
    
    for(int i=0;i<falue;i++)
	{
		cout << arr[i] << ", " ;
	}

    cout << "\nEnter the target value : ";
    int x;
    cin >> x;

    int result = binarySearch(arr, 0, falue - 1, x);
    
    if (result == false)
        cout << "\nValue not found in index";

    return 0;
}