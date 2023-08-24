#include<bits/stdc++.h>
#include <iostream>
#include <cstring>
#include<string.h>
using namespace std;
int main()
{
    cout<<"Enter Values"<<endl;
    while(1)
    {
        int len,i,bcnt=0,ncnt=0,fcnt=0,scnt=0,cnt=0;
        char ch;
        string s;
        getline(cin,s);  // input
        len=s.length();


        for(i=0; i<len; i++)
        {
            if(s[i]>='0' && s[i]<='9')
            {
                ncnt++; //3
            }
        }



        if((ncnt)==len )
          {
            if(ncnt==len && s[0]>='0')
            {
                if(len<=4 )
                {
                    cout<<"ShortInt number"<<endl;
                }
                else if(len>4)
                {
                    cout<<"LongInt number"<<endl;
                }
                else
                {
                    cout<<"Undefined"<<endl;
                }
            }
        }

    }

}
