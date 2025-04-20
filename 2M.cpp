#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int n=0;

    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='*')
        {

           int x=str[i+1]-'0';
           int y=str[i-1]-'0';
           n+=(x*y);

        }

         if(str[i]=='+')
         {
            int x=str[i-1]-'0';
            n+=x;


         }

        if(str[i]=='-')
        {
            int x=str[i+1]-'0';
            n-=x;

        }
    }

    cout<<n<<endl;
    return 0;
}
