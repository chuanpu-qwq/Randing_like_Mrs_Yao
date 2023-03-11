#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
map<string,int> mp;
char tag;
int cgo,r,n,nums,tt,cnt;
bool fl;
string s,str[10005];
bool isnum1(char c,int l,int r){ //* 0<=l<=r<=9.
	if(c-'0'>=l&&c-'0'<=r){
		return 1;
	}
	return 0;
}
inline int getnum(int r){
	return rand()%r+1;
}

void ck(){ //*  checking prizes list. 
 	if(cnt==0) exit(0); 
	for(int i=1;i<=cnt;i++){
		if(mp[str[i]]==0){
		 	str[i]="///";
		}
	}
}
string getpr(){
	int fl=1;
	string tp1;
	while(fl){
		tp1=str[getnum(cnt)];
		if(tp1!="///"){
			fl=0;
		}
	}
	return tp1; 
}
int main(){
//	Sleep(150000);
	system("cls");
	cout<<"Hello~~~~~你可以在这里体验像 Mrs.Yao一样的幸运抽签~~"<<endl;
	Sleep(3000);
	system("color 6");
	system("cls");
	cout<<"Warning:There are many BUGS in this code.Please pay attention to the form.(请注意格式)"<<endl;
	Sleep(2000);
	cout<<"请在游玩前保存好所有未保存的文件!";
	Sleep(1000);
	system("cls");
	system("color 7");
	system("title loading");
	Sleep(1000); 
	for(int i=1;i<=100;i++){
		cout<<"Loading...."<<i<<"%   <--- 功德"<<endl;
		Sleep(50); 
	}
	Sleep(500);
	cout<<"加载成功."<<endl;
	srand(time(0));
	Sleep(100);
	system("cls");
	while(1){
		while(1){
			system("title 是否继续");
			cout<<"是否运行?是1否0:";
			cin>>tag;
			if(isnum1(tag,0,1)){
				if(tag-'0'){
					cout<<"Fine.";
					break;
				}else{
					cout<<endl<<"OK.Thanks for coming!"<<endl;
					return 0;
				}
			}else{
				cout<<"你写的不对....Try again...?"<<endl;
				cgo=rand()%100;
				if(cgo==50){
					cout<<"倒霉孩子,程序提前结束.";
					exit(0);
				} 
			}			
		} 
		system("cls");
		system("title setting");
		cout<<"请选择(序号)范围:(1~r,1<=r<=10000):";
		cin>>r;
		fl=0;
		while(!fl){
			cout<<"选用上次的东西(1)还是重新设置(0)?"<<endl;
			cin>>cgo;
			if(!cgo){
				mp.clear();
				cnt=0;
				cout<<"OK.请输入奖品类数(1<=n<=10000):"<<endl;
				cin>>n;
				tt=0;	
				for(int i=1;i<=n;i++){
					cout<<"奖品名称 奖品个数:"<<endl;
					cin>>s>>nums;
					if(!mp[s]){
						mp[s]=nums;
						tt+=nums;
						str[++cnt]=s;
					}
				}	
				if(tt!=0){
					fl=1;
				}else{
					cout<<"input again,please!"<<endl;
				}
			}else{
				if(tt==0){
			 		cout<<"error!!!there aren't any prizes!";
				}else{
					fl=1;
				}
			}
		}
		ck();
		system("cls");
		Sleep(1000);
		system("color 2");
		system("title 让人fafa♂的抽奖~");
		cout<<"即将开始刺只因♂的开箱环节~~"<<endl;
		Sleep(500);
		for(int i=5;i>=1;i--){
			cout<<i<<"..."<<endl;
			Sleep(1000);
		}
		system("cls");
		for(int i=1;i<=50;i++){ //50个快速 
			cout<<"序号:"<<getnum(r)<<endl;
			Sleep(50);
			system("cls");			
		} 
		for(int i=1;i<=20;i++){ //20慢速 
			cout<<"序号:"<<getnum(r)<<" 奖品:"<<getpr()<<endl;
			Sleep(200);
			system("cls");
		}
		int ans=getnum(r);
		string tp111=getpr();
		system("title 幸(倒)运(霉)天(孩)使(子)"); 
		cout<<"恭喜"<<ans<<"号中奖!获得:"<<tp111<<"一份!";
		Sleep(10000);
		system("cls");
		mp[tp111]--;
		tt--;
		system("color 7");
	} 
	return 0;
}
//* 作者:cute_chuanpu
