/*L1-008. 求整数段和
时间限制
400 ms
内存限制
65536 kB
代码长度限制
8000 B
判题程序
Standard
给定两个整数A和B，输出从A到B的所有整数以及这些数的和。
输入格式：
输入在一行中给出2个整数A和B，其中-100<=A<=B<=100，其间以空格分隔。
输出格式：
首先顺序输出从A到B的所有整数，每5个数字占一行，每个数字占5个字符宽度，向右对齐。最后在一行中输出全部数字的和。
输入样例：
-3 8
输出样例：
   -3   -2   -1    0    1
    2    3    4    5    6
    7    8
Sum = 30*/

#include<cstdio>
#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    for(int i=a,j=0;i<b+1;i++,j++)
    {
        printf("%5d",i);
        if((j)%5==4)
        cout<<endl;
    }
    cout<<endl;
    int sum=0;
    for(int i=a;i<b+1;i++)
    {
        sum=sum+i;
    }
    cout<<"Sum = "<<sum<<endl;
    return 0;
}
