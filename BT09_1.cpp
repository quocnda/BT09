#include<iostream>
using namespace std;
char* contract(char* a,char* b)
{
    char* ans=new char(100);
    int i=0;
    while(*(a+i)!='\0')
    {
        *(ans+i)=*(a+i);
        //cout<<*(ans+i)<<" ";
        i++;

    }
    int j=0;
    while(*(b+j)!='\0')
    {
        *(ans+i+j)=*(b+j);
        j++;
    }
    return ans;

}
int getsize(char* b) {
    int cnt=0;
    int i=0;
    while(*(b+i)!='\0')
    {
        cnt++;
        i++;
    }
    return cnt;
}
int main() {
    char* a=new char(100);
    char* b=new char(100);

    cin>>a;
    cin>>b;
    int n=getsize(a);
    int m=getsize(b);
    char* ans=contract(a,b);
    int i=0;
    while(i<n+m){
        cout<<*(ans+i);
        i++;
    }

}