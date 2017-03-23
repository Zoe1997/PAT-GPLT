/*L1-028. 判断素数
时间限制
400 ms
内存限制
65536 kB
代码长度限制
8000 B
判题程序
Standard
本题的目标很简单，就是判断一个给定的正整数是否素数。
输入格式：
输入在第一行给出一个正整数N（<=10），随后N行，每行给出一个小于231的需要判断的正整数。
输出格式：
对每个需要判断的正整数，如果它是素数，则在一行中输出“Yes”，否则输出“No”。
输入样例：
2
11
111
输出样例：
Yes
No*/

#include<iostream>
#include<cmath>
using namespace std;

string judge(int num)
{
    for(int i=2;i<=(int)sqrt(num);i++)
    {
        if((num%i)==0)
        return "No";
    }
    return "Yes";
}

int main()
{
    int n;
    cin>>n;
    int *f;
    f=new int [n];
    for(int i=0;i<n;i++)
    {
        cin>>f[i];
    }
    for(int i=0;i<n;i++)
    {
        if(f[i]==1)
        cout<<"No"<<endl;
        else
        cout<<judge(f[i])<<endl;
    }
    return 0;
}
