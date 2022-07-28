#include <iostream>  
using namespace std;  
int binarySearch(int a[], int beg, int end, int val)    
{    
    int mid;    
    if(end >= beg)     
    {  
        mid = (beg + end)/2;    
        if(a[mid] == val)    
        {                 
            return mid+1;    
        }    
        else if(a[mid] < val)     
        {  
            return binarySearch(a, mid+1, end, val);    
        }    
    else     
        {  
            return binarySearch(a, beg, mid-1, val);    
        }         
    }    
    return -1;     
}   
int main() {  
  
    int arr[50];
    int m,i,val;
    printf("Enter Term of Array: ");
    scanf("%d",&m);
    printf("\nEnter Data: \n");
      for(i=0;i<m;i++)
      {
      	scanf("%d",&arr[i]);
	  }
  cout<<"\nenter value to search";
  cin>>val;   
  int res = binarySearch(arr, 0, m-1, val); 
  cout<<"The elements of the array are - ";  
  for (int i = 0; i < m; i++)  
  cout<<arr[i]<<" "; 

  cout<<"\nElement to be searched is - "<<val;   
  if (res == -1)  
  cout<<"\nElement is not present in the array";  
  else  
  cout<<"\nElement is present at "<<res<<" position of array";  
  return 0;  
}  
