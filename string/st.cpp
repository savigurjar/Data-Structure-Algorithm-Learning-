#include<iostream>
using namespace std;
/*
int main()
{
    // char arr[] = {'a','p','p','l','e'};
    // arr[2] = '\0'; //null chracter
    // for(int i=0;i<5;i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    //last space for null character


    // string s = "its the we \"get\" started "; //for ""
    // cin>>s //not take space, enter,tab
    string s;
    getline(cin,s); //only take space ,tab 
    cout<<s.size()<<endl; // null character will be in last \0
    cout<<s;
 cout<<endl;
    //append operation
    
}*/



int main() {
    string s1 = "savi", s2 = "v";
    s2.push_back('i');    // Adds 'i' to s2, so now s2 is "vi"
    s1.pop_back();        // Removes the last character from s1, so now s1 is "sav"
    s2 = s2 + "tae";      // s2 becomes "vitae"
    string s3 = s1 + s2;  // Concatenates s1 and s2, so s3 becomes "savvitae"
    cout << s3;           // Outputs "savvitae"
    
    return 0;
}
