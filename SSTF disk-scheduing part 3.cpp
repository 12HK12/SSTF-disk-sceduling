#include<iostream>
#include<math.h>
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
int findSmallestElement(int arr[], int n){
  
   int temp = arr[0];
   for(int i=0; i<n; i++) {
      if(temp>arr[i]) {
         temp=arr[i];
      }
   }
   return temp;
}
int main()
{
	int n;
	cout<<"Enter the size of queue : ";
	cin>>n;
	int *fifo;
	fifo=new int[n+1];
	int ih;
	cout<<"Enter the initial head position : ";
	cin>>ih;
	fifo[0]=ih;
	cout<<"Enter the  pending requests : ";
	for(int i=1;i<=n;i++)
	{
		cin>>fifo[i];
	}
	cout<<"The no of pending requests  are : ";
	for(int i=1;i<=n;i++)
	{
		cout<<"  "<<fifo[i];
	}
	
	int *fifo1;
	fifo1=new int[n-1];
	int d=0;
	for(int i=1;i<=n;i++)
	{
		d=abs(ih-fifo[i]);
		fifo1[i]=d;
		d=0;
	}
	
//	insertionSort(fifo1,n);
	cout<<"\nThe distance list of pending requests from the current head position with SSTF disk-scheduling  : ";
	for(int i=1;i<=n;i++)
	{
		cout<<"  "<<fifo1[i];
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n-1;j++)
		{
		if(fifo1[j]>fifo1[j+1])
		{
			swap(fifo[j],fifo[j+1]);
			swap(fifo1[j],fifo1[j+1]);
		}
	}}
	cout<<"\n";
	cout<<"The pending requests according to their distance from current head position";
	for(int i=0;i<=n;i++)
	{
		cout<<"  "<<fifo[i];
	}
	int sum=0,sum1=0;
	for(int i=0;i<n;i++)
	{
		sum1=abs(fifo[i+1]-fifo[i]);
		printf("\n");
		printf("The disk head moved from %d to %d with seek time %d",fifo[i],fifo[i+1],sum1);
		
		sum=sum+sum1;
		sum1=0;		
	}
	cout<<"\nThe total distance is :"<<sum;	
}
	

	
	

