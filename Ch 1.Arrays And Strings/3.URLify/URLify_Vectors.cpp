// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <iostream>
#include <bitset>
#include <algorithm>
using namespace std;
int main()
{
    string word;
	  cout<<endl<<"Enter String: ";
    getline(cin, word);
    int len = word.length();
    vector <int> str (word.begin(), word.end());
    int spaceCount = count(str.begin(), str.end(), 32);
    int newSize = len + (2 * spaceCount);
    // First we are replacing space with zero
    replace(str.begin(), str.end(), 32, 48);

    int itr = 0;
    while(itr < newSize)
    {
        if(48 == str[itr])
        {
            //Now we are inserting % and 2 before 0
            str.insert(str.begin()+itr, 50);
            str.insert(str.begin()+itr, 37);
            itr = itr+3;
        }
        else
            itr++;
    }

    for(auto itr = str.begin(); itr != str.end(); ++itr){
        cout << (char)*itr;
    }
    return 0;
}
