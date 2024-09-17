#include<iostream>
using namespace std;

int main()
{  //reverse string
    string s ;
    getline(cin , s);
    int start=0,end=s.size()-1;
    while(start<end)
    {
        swap(s[start],s[end]);
        start++;
        end--;
    }
    cout<<s;
    // cout<<s.size();


    // without s.size()
    // size of string 
    cout<<endl;
    int size = 0;
    while(s[size] != '\0')
    {
        size++;
    }
    cout<<size<<" ";
    cout<<endl;

    //palimdrome
    string s2 = "noon";
    start=0,end=s2.size()-1;
    while(start<end)
    {
        if(s2[start] != s2[end])
        {
            cout<<"not palimdrome";
            return 0;
        }
        start++,end--;
    }
    cout<<"its is a palimdrome";
}