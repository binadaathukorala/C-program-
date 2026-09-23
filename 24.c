#include<stdio.h>
char arr[50]={0};
int COUNT = 0;  
int main () {
printf("Enter a word: ");
scanf("%s",arr);
for (int i=0; i < 50; i++){
if (arr[i] == 0){
  break;  
}
else {
    COUNT++;
}
}printf("%d",COUNT);

return 0;
}