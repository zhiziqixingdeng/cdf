#include <iostream>
#include <string>
using namespace std;
int cnt;
struct zh{
  string name;
  string mm;
  int qx;
}s[100000];
int main(){
  string flag;
  int flag2;
  string str;
  freopen("zh.in","r",stdin);
  cin>>cnt;
  for(int i=1;i<=cnt;i++){
    getline(cin,s[i].name);
    getline(cin,s[i].mm);
    cin>>s[i].qx;
  }
  freopen("CON","r",stdin);
  cnt++;
  cout<<"名字:";
  getline(cin,s[cnt].name);
  cout<<"密码:";
  getline(cin,s[cnt].mm);
  freopen("yz.in","r",stdin);
  freopen("yz.in","w",stdout);
  cin>>str;
  if(str=="not"){
    s[cnt].qx=3;
  }
  else{
    s[cnt].qx=1;
  }
	cout<<"ok"<<endl;
  freopen("CON","r",stdin);
  freopen("CON","w",stdout);
  freopen("zh.in","w",stdout);
  cout<<cnt<<endl;
  for(int i=1;i<=cnt;i++){
    cout<<s[i].name<<endl<<s[i].mm<<endl<<s[i].qx<<endl;
  }
  return 0;
}
