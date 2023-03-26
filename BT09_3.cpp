#include<iostream>
using namespace std;
int getsize(char* a)
{
    int cnt=0;
    int i=0;
    while(*(a+i)!='\0')
    {
        cnt++;
        i++;

    }
    return cnt;
}

char* reserve(char* a)
{
     int cnt=getsize(a);
     char* ans=new char(cnt+1);
     int i=cnt-1;
     while(i>=0)
     {
        *(ans+cnt-1-i)=*(a+i);
        i--;
     }
     *(ans+cnt)='\0';
     return ans;
}
char* delete_char(char* a,char c) {
    int n=getsize(a);
    int j=0;
    char* ans=new char(n+1);
    for(int i=0;i<n;i++) {
       if(*(a+i)!=c) {
        *(ans+j)=*(a+i);
        j++;
       }
    }
    *(ans+j)='\0';
    return ans;
}
char* pad_right(char* a,int n) {
    int cnt=getsize(a);
    char* ans=new char(cnt+1);
    int i=0;
    while(i<n) {
        if(*(a+i)!='\0')
          {
            *(ans+i)=*(a+i);
          }
        else {
            
            char tmp=char (32);
            *(ans+i)=tmp;
            *(ans+i+1)='\0';
        }
        
        i++;
    }
    *(ans+i)='\0';
    return ans;
}
int main() {
    char* a=new char(100);
    cin.getline(a,100);
    char* ans=reserve(a);

    char* ans1=delete_char(a,'c');
    char* ans2=pad_right(a,10);
    
}