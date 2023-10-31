#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <string>
using namespace std;
int n,w,cnt,ans;
struct wj{//文件
	string name;
	string nr;//内容
	string mim;//密码(管理员设置)
}s[100000];
struct zh{//账号
	string mz;//名字
	string mm;//密码
  int qx;//权限
}a[100000];
string str;
void dl(){//登录
  int flag,flag2;
	cout<<"名字:";
	getline(cin,str);
	for(int i=1;i<=cnt;i++){
		if(str==a[i].mz){
			flag=1;
			flag2=i;
			break;
		}
	}
	if(flag==0){
		cout<<"账号不存在!"<<endl;
		sleep(1);
		return;
	}
	else{
		cout<<"密码:";
		cin>>str;
		if(str==a[flag2].mm){
			cout<<"欢迎!"<<endl;
			yh();
		}
	}
}
int main(){
	freopen("yz.in","r",stdin);
	cin>>str;
	freopen("CON","r",stdin);
	if(str=="not"){
		system("start 注册.exe");
	}
	else{
    freopen("zh.in","r",stdin);
    cin>>cnt;
		for(int i=1;i<=cnt;i++){
			getline(cin,a[i].mz);
			getline(cin,a[i].mm);
			cin>>a[i].qx;
		}
		freopen("CON","r",stdin);
		freopen("wj.in","r",stdin);
		cin>>ans;
		for(int i=1;i<=ans;i++){
			getline(cin,s[i].name);
			getline(cin,s[i].nr);
			getline(cin,s[i].mim);
		}
		freopen("CON","r",stdin);
		dl();//登录
	}
	return 0;
}
