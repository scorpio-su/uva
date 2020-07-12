/*
大寫轉成小寫，非英文字母轉空白，使用set紀錄單字 
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
      if (isalpha(line[i])) line[i]=tolower(line[i]);  //轉小寫 
      else line[i]=' '; //非英文字母轉成空白 
    }
    stringstream ss(line);
    while(ss >> word) dic.insert(word);  //放入集合中       
  }
  for(set<string>::iterator it=dic.begin();it!=dic.end();it++)
    cout << *it<<endl; 
}
