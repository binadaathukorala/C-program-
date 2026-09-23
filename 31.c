#include<stdio.h>
char arr[50]={0};
int COUNT = 0; 
int letters = 0;
int size = sizeof(arr)/sizeof(arr[0]); 
int main () {
printf("Enter a word: ");
scanf("%s",arr);
for (int i=0; i <size; i++){
if (arr[i] == 0){
  break;  
}
else {
    COUNT++;
}
}
letters = COUNT;
for (int i=0; i <size; i++){
while (arr[i] = arr[letters]){
    arr[i] = arr[i++];
    letters--;
    printf("ITS A palindrome");
}}
return 0;
}