/*
�j�g�ন�p�g�A�D�^��r����ťաA�ϥ�set������r 
*/ 
#include <iostream>
#include <set>
#include <sstream>
#include <cctype>
using namespace std;
int main(){
  set<string> dic;
  string line,word;
  while(getline(cin,line)){
    for(int i=0;i<line.length();i++){
      if (isalpha(line[i])) line[i]=tolower(line[i]);  //��p�g 
      else line[i]=' '; //�D�^��r���ন�ť� 
    }
    stringstream ss(line);
    while(ss >> word) dic.insert(word);  //��J���X��       
  }
  for(set<string>::iterator it=dic.begin();it!=dic.end();it++)
    cout << *it<<endl; 
}
