#include <iostream>
#include <algorithm>
#include <sstream>
#include <iomanip>
#include <vector>
#include <cstddef>
using namespace std;

const int maxn=1024;
vector<string> lineword[maxn];
size_t wordlen[maxn],maxwords,linecnt;

int main()
{
    string line,word;
    maxwords=linecnt=0;
    fill_n(wordlen,maxn,0);
    while (getline(cin,line)){
        stringstream ss(line);
        size_t wi=0;
        while (ss>>word){
            wordlen[wi]=max(wordlen[wi],word.size());
            wi++;
            lineword[linecnt].push_back(word);
        }
        maxwords=max(maxwords,wi);
        linecnt++;
    }
    for(int i=0;i<linecnt;i++){
        const auto& ws=lineword[i];
        for(int j=0;j<ws.size();j++){
            cout << left << setw(j<ws.size()-1 ? wordlen[j]+1:0) << ws[j];
        }
        cout << "\n";
    }
    return 0;
}
