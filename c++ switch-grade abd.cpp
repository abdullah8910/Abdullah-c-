#include <iostream> 
using namespace std; 
int main() 
{ 
   char grade;
     cout<<"Enter your grade:"<<endl;
	cin>>grade;
	switch (grade)
{ 
    case 'A': case 'a':
	 cout<<"Your average must be between 90 ? 100";
	break;
	case 'B': case 'b':
	 cout<<"Your average must be between 80 - 89";
	break;
	case 'C': case 'c':
	 cout<<"Your average must be between 70 - 79";
	break;
	case 'D': case 'd':
	 cout<<"Your average must be between 60 - 69";
	break;
	default:
	 cout<<"Your average must be below 60"; }
	return 0;
	 }
