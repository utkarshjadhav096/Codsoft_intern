#include<iostream>
using namespace std;

int main(){
	int n1,n2,ans=0,ch;
	char a;
	cout<<"---------------WELCOME TO CALCULATOR PROGRAM--------------"<<endl;
	cout<<"Enter numbers"<<endl;
	cin>>n1;

  do{
  	
    cout<<"Input your operator"<<endl;
	cin>>a;
	cout<<"Enter numbers"<<endl;
	cin>>n2;

	
	switch(a){
		case '+':
			ans=n1+n2;
			cout<<"New_Ans>>"<<ans<<endl;
			n1=ans;
			break;
		case '-':
			ans=n1-n2;
			cout<<"New_Ans>>"<<ans<<endl;
			n1=ans;
			break;
		case '*':
			ans=n1*n2;
			cout<<"New_Ans>>"<<ans<<endl;
			n1=ans;
			break;
		case '/':
			ans=n1/n2;
			cout<<"New_Ans>>"<<ans<<endl;
			n1=ans;
			break;
		case '%':
			ans=n1%n2;
			cout<<"New_Ans>>"<<ans<<endl;
			n1=ans;
			break;
		default:
			cout<<"still i am learning"<<endl;
				}
		
				
			cout<<"Want to continue (1.YES/0.N0)"<<endl;
			cin>>ch;
			}while(ch==1);
 	cout<<"----------THANK YOU---------"<<endl;
	return 0;
		
}
