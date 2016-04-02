#include <stdio.h>
#include <string.h>
#define PRAISE "What a super marvelous name!"
int main(void){
    char name[40];
    printf("What's your name?\n");
    scanf("%s",name);
    printf("Hello %s,%s\n",name,PRAISE);
    printf("您的名字%s的字符长度为%d,它占用的内存为%d ",name,strlen(name), sizeof(name));
    printf("我现在要将代码"
        "换行了");
    return 0;
}