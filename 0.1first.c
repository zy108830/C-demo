//引入stdio.h这一个文件,这种置于文件顶部的文件也叫头文件
#include <stdio.h>

//除main函数以外的函数,必须先进行声明,方可调用
void love(void);

//int表示函数的返回值类型;main是函数名,main函数不可或缺,它是程序的入口;void表示函数不接收任何参数
int main(void){
    int num;
    num=1;
    printf("I am a single ");
    printf("computer. \n");
    //%d用于数字转换
    //%s用于字符转换
    //%f用于浮点数转换
    printf("My favourite num is %d bacause it is first. \n",num);
    love();
    return 0;
}

/**
 * 无返回值,无参数
 */
void love(void){
    printf("我爱这个世界");
}