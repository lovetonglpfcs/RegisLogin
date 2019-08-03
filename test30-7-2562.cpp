#include<iostream>
#include<string>
using namespace std;
int main()
{
	char Ch;
	string RePass,ReUser,LoPass,LoUser;
	do{
		cout << "////////////Menu////////////\n";
		cout << "\t1.Register\n";
		cout << "\t2.Login\n";
		cout << "\tQ.Exit Program\n";
		cout << "----------------------------\n";
		cout << "Enter Menu : ";
		cin >> Ch;
		if(Ch == '1'){
			cout << "*********Register*********\n";
			cout << "Input Username : ";
			cin >> ReUser;
			cout << "Input Password : ";
			cin >> RePass;
		}else if(Ch == '2'){
			do{
			cout << "*********Login************\n";
			cout << "Input Username : ";
			cin >> LoUser;
			cout << "Input Password : ";
			cin >> LoPass;
			if(LoUser==ReUser&&LoPass==RePass){
				cout << "Username or Password correct ^__^\n";
				break;
			}else{
				cout << "!!!!Username or Password incorrect Please try again!!!!\n";
			}
			}while(true);
		}
	}while(Ch != 'Q');
	cout << "Exit Program....\n";
	return(0);
}