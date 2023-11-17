#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <string>
#include <ctime>
#include <stack>
#include <queue>
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
void txjs(){
  int a,b,c;
  cout<<"需要什么图形计算"<<endl<<"1.长方形/平行四边形"<<endl<<"2.三角形"<<endl<<"3.梯形"<<endl;
  cin>>w;
  if(w==1){
    cout<<"底/长:";
    cin>>a;
    cout<<"高/宽;";
    cin>>b;
    cout<<"面积:"<<a*b<<endl;
  }
  else if(w==2){
    cout<<"底:";
    cin>>a;
    cout<<"高:";
    cin>>b;
    cout<<"面积:"<<a*b/2<<endl;
  }
  else if(w==3){
    cout<<"上底:";
    cin>>a;
    cout<<"下底:";
    cin>>b;
    cout<<"高:";
    cin>>c;
    cout<<"面积:"<<(a+b)*c/2<<endl;
  }
  else{
    cout<<"更多图形正在开发中"<<endl;
  }
  system("pause");
  return;
}
void stackto(){
 	string s;
  int a;
  bool l;
  stack<int> x;
  while(s!="END"){
    cin>>s;
    if(s=="in"){
      getchar();
      cin>>a;
      x.push(a);
    }
   		else if(s=="out"){
   			l=x.empty();
       if(l==false){
         x.top();
       }
       else{
         cout<<"not"<<endl;
       }
     }
    else if(s=="del"){
       x.pop();
    }
    else if(s=="have"){
      x.size();
    }
    else if(s=="END"){
      break;
    }
    else{
      cout<<"错误"<<endl;
    }
  }
  while(l==false){
  	l=x.empty();
    x.top();
    x.pop();
  }
  system("pause");
  return;
}
void queueto(){
  string s;
  int a;
  queue<int> x;
  while(s!="END"){
    cin>>s;
    if(s=="in"){
     getchar();
     cin>>a;
     x.push(a);
    }
    else if(s=="out"){
      cout<<"前：";
      x.front();
      cout<<"后：";
      x.back();
    }
    else if(s=="del"){
      x.pop();
    }
    else if(s=="end"){
      break;
    }
    else{
      cout<<"错误"<<endl;
    }
  }
  while(x.empty()==false){
    x.front();
    x.pop();
  }
  system("pause");
  return;
}
void fg(){
	system("cls");
	cout<<"请问你喜欢什么风格"<<endl<<"1.经典黑白"<<endl<<"2.蓝天白云"<<endl<<"3.黑客"<<endl<<"4.中国红"<<endl;
	int x;
	cin>>x;
	if(x==1){
		system("color 07");
	}
	else if(x==2){
		system("color 37");
	}
	else if(x==3){
		system("color 02");
	}
	else if(x==4){
		system("color 47");
	}
	else{
		cout<<"错误"<<endl;
	}
	return;
}
void wjgl(){
  system("cls");
	while(true){
		cout<<"请输入需要干什么"<<endl<<"1.添加文件"<<endl<<"2.修改文件"<<endl<<"3.退出"<<endl;
		cin>>n;
		if(n==1){
			system("cls");
			ans+=1;
			cout<<"文件名:";
			getchar();
			getline(cin,s[ans].name);
			cout<<"内容:";
			getline(cin,s[ans].nr);
			cout<<"是否需要密码 1.需要 2.不需要"<<endl;
			cin>>w;
			if(w==1){
				cout<<"请输入密码:";
				getchar();
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
      getchar();
      cin>>w;
			if(w<=0){
				cout<<"错误"<<endl;
				sleep(1);
				system("cls");
			}
			else{
				if(s[w].mim=="not"){
					cout<<"请输入新名字:";
					getchar();
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
					getchar();
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
			cout<<ans;
			for(int i=1;i<=ans;i++){
				cout<<s[i].name<<endl<<s[i].nr<<endl<<s[i].mim<<endl;
			}
			freopen("CON","w",stdout);
			return;
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
		return;
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
      qwq=rand();
      cout<<qwq<<endl;
    }
    else if(a=="help"){
      cout<<"请查看文档"<<endl;
    }
    else if(a=="end"){
    	return;
		}
    else{
      cout<<"错误"<<endl;
    }
  }
}
void level_1(){
	system("cls");
	while(true){
		cout<<"请输入使用什么"<<endl<<"1.计算器 2.文件管理 3.cmd"<<endl<<"4.个性化 5.栈模拟 6.队列模拟"<<endl<<"7.图形计算 8.退出";
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
		else if(n==4){
			fg();
		}
		else if(n==5){
			stackto();
		}
		else if(n==6){
			queueto();
		}
    else if(n==7){
    	txjs();
		}
		else if(n==8){
			return;
		}
		else{
			cout<<"错误"<<endl;
		}
	}
}
void yh(){
	system("cls");
	while(true){
		cout<<"请输入要干什么 1."<<a[flag2].mz<<"文件夹 2.软件"<<endl;
		cin>>n;
		if(n==1){
			for(int i=1;i<=ans;i++){
			cout<<s[i].name<<endl;
			}
			cout<<endl;
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
int main(){
	for(int i=1;i<=5;i++){
	system("color 45");
	sleep(0.1);
	system("color 1A");
	sleep(0.1);
	system("color 2B");
	sleep(0.1);
	system("color 3C");
	sleep(0.1);
	}
	cout<<"cdf"<<endl;
	sleep(0.1);
	system("color 07");
	system("cls");
	freopen("yz.in","r",stdin);
	cin>>str;
	freopen("CON","r",stdin);
	if(str=="not"){
		system("start 注册.exe");
	}
	else{
    freopen("zh.in","r",stdin);
    cin>>cnt;
    getchar();
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
		return 0;
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
	return 0;
}
