
#include<stdio.h>
 
int main() {
   int arr[20], i, n;
 
   scanf("%d", &n); 

  for (i = 0; i < n; i++) 
     scanf("%d", &arr[i]);
  int temp;
  for(i=0;i<n/2;i++)
  {
     temp=arr[i];
     arr[i]=arr[n-i-1];
     arr[n-i-1]=temp;
  }
  for (i = 0; i < n; i++) 
  {
     printf("%d\n", arr[i]); // For printing the array elements 
  } 
  return (0);
}
