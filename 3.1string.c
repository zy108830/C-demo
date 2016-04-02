#include <stdio.h>
#include <string.h>
//人的密度 ,在预处理中定义了DENSITY常量
#define DENSITY 62.4
int main(void){
    float weight,volume;
    int size,letters;
    //name是一个含有40个字符的数组
    char name[40];

    printf("HI, What's your first name?\n");
    //将用户输入的内容赋值给name
    scanf("%s",name);
    printf("%s,What's your weight in pounds?\n",name);
    scanf("%f",&weight);
    //sizeof()函数用于统计字节,strlen()函数用于统计字符
    size= sizeof(name);
    letters=strlen(name);
    volume=weight / DENSITY;

    //volume是体积的意思,cubic feet是立方尺,%f用于处理浮点值,.2用于控制精确度,那个$号,我也不知道是什么gui
    printf("Well, %s, your volume is $%.2f cubic feet.\n",name,volume);
    printf("Also, your first name has %d letters, \n",letters);
    printf("and we have %d bytes to store it in.\n",size);
    return 0;
}
