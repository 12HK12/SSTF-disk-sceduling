#include<iostream>
using namespace std;
void insertionSort(int arr[], int n) 
{ 
    int i, key, j; 
    for (i = 1; i < n; i++) { 
        key = arr[i]; 
        j = i - 1; 
  
        while (j >= 0 && arr[j] > key) { 
            arr[j + 1] = arr[j]; 
            j = j - 1; 
        } 
        arr[j + 1] = key; 
    } 
}
int main()
{
	int n;
	cout<<"Enter the no of pending requests : ";
	cin>>n;
	int *fifo;
	fifo=new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>fifo[i];
	}
	cout<<"The no of pending requests : ";
	for(int i=0;i<n;i++)
	{
		cout<<"  "<<fifo[i];
	}
		insertionSort(fifo,n);
    cout<<"\nThe no of pending requests requests in order of their distance from the current request : ";
	for(int i=0;i<n;i++)
	{
		cout<<"  "<<fifo[i];
	}
	
   
	
}
