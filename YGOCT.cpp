#include<cstdio>
#include<cstring>
#include<string>
#include<iostream>
using namespace std;
int main() {
    string inString,outString;
    int startPos=0;
    freopen("input.txt" ,"r" ,stdin);
    freopen("output.txt" ,"w" ,stdout);
    cin >> inString;
    while(inString.find("_" ,startPos) != EOF) {
        int temp = inString.find("_" ,startPos);
        if(inString[temp - 2] == '*') {
            int reNum = inString[temp - 1] - '0';
            outString = inString.substr(startPos ,temp - startPos - 2);
            for(int i = 1; i <= reNum; ++ i)
              cout << outString << "\n";
        } else {
            outString = inString.substr(startPos ,temp - startPos);
            cout << outString << "\n";
        }
        startPos = temp + 1;
    }
    return 0;
}