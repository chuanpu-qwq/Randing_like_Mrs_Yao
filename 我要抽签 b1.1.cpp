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
	cout<<"Hello~~~~~����������������� Mrs.Yaoһ�������˳�ǩ~~"<<endl;
	Sleep(3000);
	system("color 6");
	system("cls");
	cout<<"Warning:There are many BUGS in this code.Please pay attention to the form.(��ע���ʽ)"<<endl;
	Sleep(2000);
	cout<<"��������ǰ���������δ������ļ�!";
	Sleep(1000);
	system("cls");
	system("color 7");
	system("title loading");
	Sleep(1000); 
	for(int i=1;i<=100;i++){
		cout<<"Loading...."<<i<<"%   <--- ����"<<endl;
		Sleep(50); 
	}
	Sleep(500);
	cout<<"���سɹ�."<<endl;
	srand(time(0));
	Sleep(100);
	system("cls");
	while(1){
		while(1){
			system("title �Ƿ����");
			cout<<"�Ƿ�����?��1��0:";
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
				cout<<"��д�Ĳ���....Try again...?"<<endl;
				cgo=rand()%100;
				if(cgo==50){
					cout<<"��ù����,������ǰ����.";
					exit(0);
				} 
			}			
		} 
		system("cls");
		system("title setting");
		cout<<"��ѡ��(���)��Χ:(1~r,1<=r<=10000):";
		cin>>r;
		fl=0;
		while(!fl){
			cout<<"ѡ���ϴεĶ���(1)������������(0)?"<<endl;
			cin>>cgo;
			if(!cgo){
				mp.clear();
				cnt=0;
				cout<<"OK.�����뽱Ʒ����(1<=n<=10000):"<<endl;
				cin>>n;
				tt=0;	
				for(int i=1;i<=n;i++){
					cout<<"��Ʒ���� ��Ʒ����:"<<endl;
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
		system("title ����fafa��ĳ齱~");
		cout<<"������ʼ��ֻ���Ŀ��价��~~"<<endl;
		Sleep(500);
		for(int i=5;i>=1;i--){
			cout<<i<<"..."<<endl;
			Sleep(1000);
		}
		system("cls");
		for(int i=1;i<=50;i++){ //50������ 
			cout<<"���:"<<getnum(r)<<endl;
			Sleep(50);
			system("cls");			
		} 
		for(int i=1;i<=20;i++){ //20���� 
			cout<<"���:"<<getnum(r)<<" ��Ʒ:"<<getpr()<<endl;
			Sleep(200);
			system("cls");
		}
		int ans=getnum(r);
		string tp111=getpr();
		system("title ��(��)��(ù)��(��)ʹ(��)"); 
		cout<<"��ϲ"<<ans<<"���н�!���:"<<tp111<<"һ��!";
		Sleep(10000);
		system("cls");
		mp[tp111]--;
		tt--;
		system("color 7");
	} 
	return 0;
}
//* ����:cute_chuanpu
