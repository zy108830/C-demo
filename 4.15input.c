#include <stdio.h>
#include <string.h>

int main(void){
    int age;
    char haha[40];
    float pi;




    printf("请输入您的年龄和姓名,以及圆周率\n");


    //scanf()函数用于将用户输入的内容根据第一个参数进行格式化,然后再复制给第二个参数
    //再将内容赋值给字符串数组时不用加&符号,其他的都要添加
    scanf("%d",&age);
    scanf("%s",haha);
    scanf("%f",&pi);


    printf("您的年龄是%d岁,姓名是%s,圆周率是%.2f",age,haha,pi);
    return 0;
}
