#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <string>
#include <ctime>
using namespace std;
int n,w,cnt,ans;//cnt账号数量,ans文件数量
int flag,flag2;
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
string str,str2;
void level_1();
void yh();
void cmd1(){
  string a,d,awa;
  int b,c,qwq;
  system("cls");
  while(true){
    cin>>a;
    if(a=="start"){
      getline(cin,d);
      for(int i=1;i<=ans;i++){
        if(s[i].name==d){
          if(s[i].mim!="not"){
            cout<<"密码:";
            getline(cin,awa);
            if(awa!=s[i].mim){
              cout<<"密码错误"<<endl;
            }
            else{
              cout<<s[i].name<<endl;
              cout<<"----------------------"<<endl<<s[i].nr<<endl;
            }
          }
          else{
            cout<<s[i].name<<"---------------------"<<endl<<s[i].nr<<endl;
          }
        }
      }
    }
    else if(a=="clean"){
      system("cls");
    }
    else if(a=="rand"){
      cin>>b>>c;
      if(b<c){
        qwq=rand()%b+c-b;
        cout<<qwq<<endl;
      }
      else if(b>c){
        qwq=rand()%c+b-c;
        cout<<qwq<<endl;
      }
      else{
        cout<<c<<endl;
      }
    }
    else if(a=="help"){
      cout<<"请查看文档"<<endl;
    }
    else{
      cout<<"错误"<<endl;
    }
  }
}
void wjgl(){
	system("cls");
	while(true){
		cout<<"请输入需要干什么"<<endl<<"1.添加文件"<<endl<<"2.修改文件"<<endl<<"3.退出"<<endl;
		cin>>n;
		if(n==1){
			system("cls");
			ans++;
			cout<<"文件名:";
			getline(cin,s[ans].name);
			cout<<"内容:";
			getline(cin,s[ans].nr);
			cout<<"是否需要密码 1.需要 2.不需要"<<endl;
			cin>>w;
			if(w==1){
				cout<<"请输入密码:";
				getline(cin,s[ans].mim);
			}
			else{
				s[ans].mim="not";
			}
			cout<<"OK,编号:"<<ans<<endl;
			sleep(1);
			system("cls");
		}
		else if(n==2){
			system("cls");
      cout<<"请输入编号:";
      cin>>w;
			if(w<=0){
				cout<<"错误"<<endl;
				sleep(1);
				system("cls");
			}
			else{
				if(s[w].mim=="not"){
					cout<<"请输入新名字:";
					getline(cin,s[w].name);
					cout<<"请输入新内容:";
					getline(cin,s[w].nr);
					if(a[flag2].qx>1){
						cout<<"请输入新密码(如无输入not):";
						getline(cin,s[w].mim);
					}
				}
				else{
					cout<<"请输入密码:";
					getline(cin,str);
					if(str!=s[w].mim){
						cout<<"密码错误"<<endl;
						sleep(1);
						system("cls");
					}
					else{
						cout<<"请输入新名字:";
					getline(cin,s[w].name);
					cout<<"请输入新内容:";
					getline(cin,s[w].nr);
					if(a[flag2].qx>1){
						cout<<"请输入新密码(如无输入not):";
						getline(cin,s[w].mim);
					}
					}
				}
				cout<<"ok"<<endl;
				sleep(1);
				system("cls");
			}
		}
		else if(n==3){
			cout<<"好的"<<endl;
			freopen("wj.in","w",stdout);
			cout<<ans<<endl;
			for(int i=1;i<=ans;i++){
				cout<<s[i].name<<endl<<s[i].nr<<endl<<s[i].mim<<endl;
			}
			freopen("CON","w",stdout);
			yh();
		}
		else{
			cout<<"错误"<<endl;
		}
	}
}
void jsq(){
	  system("cls");
		cout<<"请输入算式(如:10/2):";
		int a,b;
		char x;
		cin>>a>>x>>b;
		if(x=='+'){
			cout<<"结果:"<<a+b<<endl;
		}
		else if(x=='-'){
			cout<<"结果:"<<a-b<<endl;
		}
		else if(x=='*'){
			cout<<"结果:"<<a*b<<endl;
		}
		else if(x=='/'&&b!=0){
			cout<<"结果:"<<a/b;
			if(a%b==0){
				cout<<endl;
			}
			else{
				cout<<"......"<<a%b<<endl;
			}
		}
		else if(x=='/'&&b==0){
			cout<<"除数不能为0"<<endl;
		}
		else{
			cout<<"错误"<<endl;
		}
		system("pause");
		system("cls");
		yh();
}
void cmd1(){
  string a,d,awa;
  int b,c,qwq;
  system("cls");
  while(true){
    cin>>a;
    if(a=="start"){
      getline(cin,d);
      for(int i=1;i<=ans;i++){
        if(s[i].name==d){
          if(s[i].mim!="not"){
            cout<<"密码:";
            getline(cin,awa);
            if(awa!=s[i].mim){
              cout<<"密码错误"<<endl;
            }
            else{
              cout<<s[i].name<<endl;
              cout<<"----------------------"<<endl<<s[i].nr<<endl;
            }
          }
          else{
            cout<<s[i].name<<"---------------------"<<endl<<s[i].nr<<endl;
          }
        }
      }
    }
    else if(a=="clean"){
      system("cls");
    }
    else if(a=="rand"){
      cin>>b>>c;
      if(b<c){
        qwq=rand()%b+c-b;
        cout<<qwq<<endl;
      }
      else if(b>c){
        qwq=rand()%c+b-c;
        cout<<qwq<<endl;
      }
      else{
        cout<<c<<endl;
      }
    }
    else if(a=="help"){
      cout<<"请查看文档"<<endl;
    }
    else{
      cout<<"错误"<<endl;
    }
  }
}
void level_1(){
	system("cls");
	while(true){
		cout<<"请输入使用什么"<<endl<<"1.计算器 2.文件管理 3.cmd"<<endl;
    cin>>n;
    if(n==1){
			jsq();
		}
		else if(n==2){
			wjgl();
		}
		else if(n==3){
			cmd1();
		}
		else{
			cout<<"错误"<<endl;
		}
	}
}
void yh(){
	int flag;
	sleep(1);
	system("cls");
	while(true){
		cout<<"请输入要干什么"<<endl<<"1."<<a[flag2].mz<<"文件夹"<<endl<<"2.软件"<<endl;
		cin>>n;
		if(n==1){
			system("cls");
			for(int i=1;i<=ans;i++){
			cout<<s[i].name<<endl;
			}
			cout<<"请输入名字来查看"<<endl;
			getline(cin,str);
			flag=0;
			for(int i=1;i<=ans;i++){
				if(str==s[i].name){
					if(s[i].mim=="not"){
						system("cls");
						cout<<s[i].name<<endl<<"---------------------"<<s[i].nr<<endl;
						system("pause");
						system("cls");
						flag=1;
					}
					else{
						cout<<"请输入密码:";
						getline(cin,str2);
						if(str2==s[i].mim){
						system("cls");
						cout<<s[i].name<<endl<<"---------------------"<<s[i].nr<<endl;
						system("pause");
						system("cls");
						flag=1;
						}
						else{
							cout<<"密码错误"<<endl;
							flag=1;
						}
					}
				}
			}
			if(flag==0){
				cout<<"未找到文件"<<endl;
			}
		}
		else{
			cout<<"请输入进入第几页 1.1页"<<endl;
			cin>>w;
			if(w==1){
				level_1();
			}
			else{
				cout<<"错误"<<endl;
				sleep(1);
				return;
			}
		}
	}
}
void dl(){//登录
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
			return;
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
