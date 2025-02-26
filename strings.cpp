#include<bits/stdc++.h>
using namespace std;
void reversing_words(string& s)
{
    string temp="";
    int st=s.size()-1,e=s.size()-1;
    for(st;st>=0;st--)
    {
        if(s[st]==' ')
        {
            for(int c=st+1;c<=e;c++)
            {
                temp.push_back(s[c]);
            }
            e=st-1;
            temp.push_back(' ');

        }
        else if(st==0)
        {
            
            for(int c=st;c<=e;c++)
            {
                temp.push_back(s[c]);
            }
        }

    }
    s=temp;
    
}
int main(){
    string s;
    getline(cin,s);
    reversing_words(s);
    cout<<s;
}
//my above code is wrong for few inputs and edge cases as it seems
/* #include <bits/stdc++.h>
using namespace std;

void reversing_words(string& s) {
    string temp = "";
    int st = s.size() - 1, e = s.size() - 1;

    for (; st >= 0; st--) {
        if (s[st] == ' ') {
            if (st != e) { // To avoid extra spaces
                for (int c = st + 1; c <= e; c++) {
                    temp.push_back(s[c]);
                }
                temp.push_back(' '); // Add space between words
            }
            e = st - 1; // Move end pointer to previous word
        } else if (st == 0) {
            for (int c = st; c <= e; c++) {
                temp.push_back(s[c]);
            }
        }
    }

    // Remove any trailing space
    if (!temp.empty() && temp.back() == ' ') {
        temp.pop_back();
    }

    s = temp; // Update the original string
}

int main() {
    string s;
    getline(cin, s);
    reversing_words(s);
    cout << s << endl;
    return 0;
}
*/