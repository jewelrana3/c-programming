// #include <stdio.h>
// int main()
// {
//     int age;
//     scanf('%d',&age);
//     printf("%d",age);
//     return 0;
// }

#include<stdio.h>
int main(){
    int age;
    float num;
    char c;
    scanf("%d %f %c",&age,&num,&c);
    printf("You are entered:%d %0.1f %c",age,num,c);
    return 0;
}