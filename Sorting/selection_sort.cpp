#include <stdio.h>  
  
void selection(int arr[], int n)  
{  
    int i, j, small;  
      
    for (i = 0; i < n-1; i++)    
    {  
        small = i; 
          
        for (j = i+1; j < n; j++)  
        if (arr[j] < arr[small])  
            small = j;  
    int temp = arr[small];  
    arr[small] = arr[i];  
    arr[i] = temp;  
    }  
}  
  
void printArr(int a[], int n) 
{  
    int i;  
    for (i = 0; i < n; i++)  
        printf("%d ", a[i]);  
}  
  
int main()  
{  
    int a[50];
    int m,i;
    printf("Enter Term of Array: ");
    scanf("%d",&m);
    printf("\nEnter Data: \n");
      for(i=0;i<m;i++)
      {
      	scanf("%d",&a[i]);
	  }
    selection(a, m);
    printArr(a, m);
    return 0;  
}    
