// https://bento.me/mkavian89
// https://zil.ink/mkavian89
// https://github.com/mkaian89
// https://aparat.com/masihakavian
// https://aparat.com/super_op_team
// https://youtube.com/super_op_team
#include <iostream>
#include <conio.h>
#include <windows.h>
#include <cstring>
using namespace std;

main(){
	string name;
	int year;
	int present;
	int math;
   cout << "Welcome To This Game!" << endl << "This Is a Simple Game That You Will See Continue..."<< endl;
   cout << "Your Name?"<<endl;
   cin>>name;
   cout << "Your Birthday?"<<endl;
   cin>>year;
   cout << "What's Today's Year?"<< endl;
   cin>>present;
   math = present-year;
   
   cout << "------------------------------------------------"<< endl;
   
   cout << name <<endl<< "is" << endl << math <<endl <<"Years Old!"<<'\a'<<endl;
   
   cout << endl << endl << "Thank You For Using This Program :)";
   
   getch();
   
   return 0;
}

