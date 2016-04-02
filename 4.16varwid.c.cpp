#include <stdio.h>
int main(void){
    //无符号的数值类型的数据,可以表示的范围更大:宽度,精度
    unsigned width,precision;
    int number=256;
    double weight=242.5;
    printf("What field width? \n");
    scanf("%d",&width);
    /**
     * %*d中的*号是修饰符的意思,用于控制%d输出结果的样式
     * 因为number的字符宽度为3,如果我们输入小于3的width,则系统会自动将宽度延长为3
     * 试着输入-100,2,100这三个数字吧
     */
    printf("The number is: %*d; \n",width,number);


}

