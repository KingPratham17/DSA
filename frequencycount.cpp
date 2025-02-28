#include<bits/stdc++.h>
using namespace std;
char getmaxoccourances(string s)
{
    int ar[26]={0};
    int maxi=-1;
    int ans=-1;
    for(int i=0;i<s.size();i++)
    {
        char ch=s[i];
        int n;
        if(ch >='a' && ch <= 'z')
        {
            n = ch -'a'; 
        }
        else{
            n=ch-'A';
        }
        ar[n]++;
    }
    for(int i=0;i<26;i++)
    {
        if(maxi<ar[i])
        {
            ans=i;
            maxi=ar[i];

        }
    }
    char finalans=ans+'a';
    return finalans;
}

int main()
{
 string s;
 getline(cin,s);
 cout<<getmaxoccourances(s);
 return 0;
}
