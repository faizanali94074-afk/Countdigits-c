#include<stdio.h>
int main() {
    int rev,num,i,count=0;
    printf("enter a positive integer:");
    scanf("%d", &num);
    for (i = num; i != 0; i--) {
         rev = i % 10;
         count++;
    }
    printf("number of digits is :%d", count);
    return 0;
}