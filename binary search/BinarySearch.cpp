#include<iostream>

using namespace std;

int main()
{
    int x, i, arr[50], num, y, temp, first, last, middle;
    cout<<"Enter the size of elements : ";
    cin>>x;
    cout<<"Enter "<<x<<" elements : ";
    for(i=0; i<x; i++)
        cin>>arr[i];
    // sort the array first
    for(i=0; i<(x-1); i++)
    {
        for(y=0; y<(x-i-1); y++)
        {
            if(arr[y]>arr[y+1])
            {
                temp = arr[y];
                arr[y] = arr[y+1];
                arr[y+1] = temp;
            }
        }
    }
    // print the sorted array
    cout<<"\nSorted Array :\n";
    for(i=0; i<x; i++)
        cout<<arr[i]<<" ";
    // now back to binary search
    cout<<"\n\nEnter element to be find : ";
    cin>>y;
    first = 0;
    last = (x-1);
    middle = (first+last)/2;
    while(first <= last)
    {
        if(arr[middle]<y)
            first = middle+1;
        else if(arr[middle]==y)
        {
            cout<<"\nThe element, "<<y<<" found at position "<<middle+1;
            break;
        }
        else
            last = middle-1;
        middle = (first+last)/2;
    }
    if(first>last)
        cout<<"\nThe element, "<<y<<" is not found";
    cout<<endl;
    return 0;
}