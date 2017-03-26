/*L2-017. 人以群分
时间限制
150 ms
内存限制
65536 kB
代码长度限制
8000 B
判题程序
Standard
社交网络中我们给每个人定义了一个“活跃度”，现希望根据这个指标把人群分为两大类，
即外向型（outgoing，即活跃度高的）和内向型（introverted，即活跃度低的）。要求两类人群的规模尽可能接近，而他们的总活跃度差距尽可能拉开。
输入格式：
输入第一行给出一个正整数N（2 <= N <= 105）。随后一行给出N个正整数，分别是每个人的活跃度，其间以空格分隔。题目保证这些数字以及它们的和都不会超过231。
输出格式：
按下列格式输出：
Outgoing #: N1
Introverted #: N2
Diff = N3
其中 N1 是外向型人的个数；N2 是内向型人的个数；N3 是两群人总活跃度之差的绝对值。
输入样例1：
10
23 8 10 99 46 2333 46 1 666 555
输出样例1：
Outgoing #: 5
Introverted #: 5
Diff = 3611
输入样例2：
13
110 79 218 69 3721 100 29 135 2 6 13 5188 85
输出样例2：
Outgoing #: 7
Introverted #: 6
Diff = 9359*/

#include<iostream>
#include<algorithm>
using namespace std;

int j(int n)
{  
  if(n%2==0)
  return n/2;
  else
  return n/2+1;
}

int a(int n)
{
  if(n%2==0)
  return n/2;
  else
  return n/2;
}

int abs(int n)
{
  if(n<0)
  return -n;
  else
  return n;
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
  sort(f,f+n);
  int s1=0;int s2=0;
  if(n%2==0)
  {
  for(int i=0;i<n/2;i++){
    s1=f[i]+s1;
    }
    for(int i=n/2;i<n;i++){
      s2=f[i]+s2;
    }
  }
  else if(n%2==1)
  {
    for(int i=0;i<n/2;i++)
    {
      s1=f[i]+s1;
    }
    for(int i=n/2;i<n;i++)
    {
      s2=f[i]+s2;
    }
  }  
  cout<<"Outgoing #: "<<j(n)<<endl;
  cout<<"Introverted #: "<<a(n)<<endl;
  cout<<"Diff = "<<abs(s2-s1)<<endl;
  return 0;
}
