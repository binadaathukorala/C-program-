#include<stdio.h>
int arr[10]={0};
int main () {
for (int i=0; i < 10; i++){
   arr[i] = i;
   printf("%d ", arr[i]);
} 
return 0;
}