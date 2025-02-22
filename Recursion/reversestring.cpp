#include <iostream>
using namespace std;
void revString(string &str,int start,int end)
{
    if(start>=end){return;}

    char c = str[start];
    str[start] = str[end];
    str[end] = c;

    revString(str,start+1,end-1);
}
int main()
{
    string st = "Aarigato";
    revString(st,0,6);
    cout<<st<<endl;
}