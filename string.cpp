#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str="hi i am pratham";
    cout<<str<<endl;
    return 0;
    //learning to use comapare stl function for substring

    string str1("forGeeks");
    string str2("Geeks");

    
    if ((str1.compare(3, 5, str2)) == 0)
        cout << "Substring Matched";
    else
        cout << "Strings Not Matched";

    return 0;
}
