#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <string>
using namespace std;
int n,w,cnt,ans;
struct wj{//�ļ�
	string name;
	string nr;//����
	string mim;//����(����Ա����)
}s[100000];
struct zh{//�˺�
	string mz;//����
	string mm;//����
  int qx;//Ȩ��
}a[100000];
string str;
void dl(){//��¼
  int flag,flag2;
	cout<<"����:";
	getline(cin,str);
	for(int i=1;i<=cnt;i++){
		if(str==a[i].mz){
			flag=1;
			flag2=i;
			break;
		}
	}
	if(flag==0){
		cout<<"�˺Ų�����!"<<endl;
		sleep(1);
		return;
	}
	else{
		cout<<"����:";
		cin>>str;
		if(str==a[flag2].mm){
			cout<<"��ӭ!"<<endl;
			yh();
		}
	}
}
int main(){
	freopen("yz.in","r",stdin);
	cin>>str;
	freopen("CON","r",stdin);
	if(str=="not"){
		system("start ע��.exe");
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
		dl();//��¼
	}
	return 0;
}
