// ConsoleApplication2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <stdio.h>

int num2 = 20;//全局变量-定义在代码块{}之外的变量


int main()
{
    int num1 = 10;//局部变量

    return 0;
}
//当全局变量与局部变量的名字相同时，以局部变量优先。
