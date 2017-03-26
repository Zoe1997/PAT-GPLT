/*L1-017. 到底有多二
时间限制
400 ms
内存限制
65536 kB
代码长度限制
8000 B
判题程序
Standard
一个整数“犯二的程度”定义为该数字中包含2的个数与其位数的比值。如果这个数是负数，则程度增加0.5倍；
如果还是个偶数，则再增加1倍。例如数字“-13142223336”是个11位数，其中有3个2，并且是负数，也是偶数，
则它的犯二程度计算为：3/11*1.5*2*100%，约为81.82%。本题就请你计算一个给定整数到底有多二。
输入格式：
输入第一行给出一个不超过50位的整数N。
输出格式：
在一行中输出N犯二的程度，保留小数点后两位。
输入样例：
-13142223336
输出样例：
81.82%*/

#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;

int main()
{
    char num1[50];
    scanf("%s",num1);
    double num3;
    double count=0;
    for(int i=0;i<(strlen(num1));i++)
    {
        if(num1[i]=='2')
        count++;
    }
    int len;
    len=strlen(num1);
    if(num1[0]=='-'&&(num1[len-1]=='0'||num1[len-1]=='2'||num1[len-1]=='4'||num1[len-1]=='6'||num1[len-1]=='8'))
    {
        num3=count/(len-1)*1.5*2*100;
    }
    else if(num1[0]=='-')
    {
        num3=count/(len-1)*1.5*100;
    }
    else if(num1[0]!='-'&&(num1[len-1]=='0'||num1[len-1]=='2'||num1[len-1]=='4'||num1[len-1]=='6'||num1[len-1]=='8'))
    {
        num3=count/len*100;
    }
    printf("%.2f%%",num3);
    return 0;
}
