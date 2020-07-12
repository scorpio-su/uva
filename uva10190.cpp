#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n,m;
    vector<long> v;
    while (cin >> n >> m){
        if (m <= 1 || n < m) {
			cout << "Boring!\n";
			continue;
		}
        bool tes=false;
        v.clear();
        v.push_back(n);
        while(n >= m){
            if (n%m) {tes=true;break;}
            n/=m;
            v.push_back(n);
        }
        if (tes||v.back()!=1) cout << "Boring!\n";
        else{
            for(int i=0;i<v.size()-1;i++) cout << v[i] << ' ';
            cout <<  v[v.size()-1] << "\n";
        }
    }
}
