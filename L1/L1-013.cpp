/*L1-013. 计算阶乘和
时间限制
400 ms
内存限制
65536 kB
代码长度限制
8000 B
判题程序
Standard
对于给定的正整数N，需要你计算 S = 1! + 2! + 3! + ... + N!。
输入格式：
输入在一行中给出一个不超过10的正整数N。
输出格式：
在一行中输出S的值。
输入样例：
3
输出样例：
9*/

#include<iostream>
using namespace std;

int f(int n)
{
    int e=1;
    if(n>0)
    {
        e=n*f(n-1);
    }
    return e;
}

int main()
{
    int S=0;
    int n;
    cin>>n;
    for(int i=1;i<n+1;i++)
    {
        S=S+f(i);
    }
    cout<<S;
    return 0;
}
