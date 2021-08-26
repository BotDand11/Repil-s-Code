#include<bits/stdc++.h>
using namespace std;
int t;
int a,b,c,d;
int zong;
inline int read()
{
    int s=0,w=1;
    char ch=getchar();
    while(ch<'0'||ch>'9') {if(ch=='-')w=-1;ch=getchar();}
    while(ch>='0'&&ch<='9') s=s*10+ch-'0',ch=getchar();
    return s*w;
}
inline void write(int x)
{
    if(x<0) putchar('-'),x=-x;
    if(x>9) write(x/10);
    putchar(x%10+'0');
}
inline void print(int x)
{
    write(x);
    putchar('\n');
}
inline void work()
{
    a=read();b=read();c=read();
    if(a>b) swap(a,b);
    zong=(b-a)*2;
    if(a>zong)
    {
        print(-1);
        return;
    }
    if(b>zong)
    {
        print(-1);
        return;
    }
    if(c>zong)
    {
        print(-1);
        return;
    }
    d=c+(b-a);
    if(d>zong) d-=zong;
    print(d);
}
int main()
{
    t=read();
    while(t--) work();
    return 0;
}