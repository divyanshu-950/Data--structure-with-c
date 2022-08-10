#include <stdio.h>  
#include<stdlib.h>
int Max(int [],int);
void print(int [],int);
void bucket(int a[], int n) 
{  
  int max = Max(a, n); 
  int bucket[max], i;  
  for (int i = 0; i <= max; i++)  
  {  
    bucket[i] = 0;  
  }  
  for (int i = 0; i < n; i++)  
  {  
    bucket[a[i]]++;  
  }  
  for (int i = 0, j = 0; i <= max; i++)  
  {  
    while (bucket[i] > 0)  
    {  
      a[j++] = i;  
      bucket[i]--;  
    }  
  }  
}  
void print(int a[], int n) 
{  
  for (int i = 0; i < n; ++i)  
    printf("%d  ", a[i]);  
}  
int Max(int a[], int n)
{  
  int max = a[0];  
  for (int i = 1; i < n; i++)  
    if (a[i] > max)  
      max = a[i];  
  return max;  
}  
int main()  
{  
   int a[50];
    int n,i;
    printf("Enter Term of Array: ");
    scanf("%d",&n);
    printf("\nEnter Data: \n");
      for(i=0;i<n;i++)
      {
      	scanf("%d",&a[i]);
	  }
  printf("Before sorting array elements are - \n");  
  print(a, n);  
  bucket(a, n);  
  printf("\nAfter sorting array elements are - \n");  
  print(a, n);  
}  
