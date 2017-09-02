#include <iostream>			//including header files
#include <cstring>
#include<ctime>
#include<cstdlib>
using namespace std;

	int main(){

		int strlength,choose,random,pin;
		srand(time(0));			//seeding ramdom with computer's clock
		char text[100];
		cout <<"\n This Is A Coder Decoder Program \n";
		cout << "Enter Text Or Code :- \n";
		gets(text);				//geting string
		random = rand()%40;				//%40 to fix the value of ramd between 0 - 40
		cout <<"Press \t1.To Make A Code of The Following Text\n";
		cout <<"Press \t2.To Make A Decode of The Following Code\n";
		cin >> choose;
			if(choose == 1){
							strlength = strlen(text);			//calculating string length
							cout << "Code Made Frm The Following Text Is :- \n";
							for(int character = 0 ; character < strlength ; character++){			//incrementing character var until it is equal to string's length
								cout << char(text[character] + (random)) ;				//converting incremented ASCII value to character var
								
							}
							cout<<"\n Your Pin Is :- " << random << "\n";			//giving random pin from with ASCII value is incrementer
			
		}
			else if( choose == 2){
				strlength = strlen(text);
							cout << "Enter Your Pin \n";
							cin >> pin;
							cout << "Text Obtained From The Following Code Is :- \n ";
							for(int character = 0 ; character < strlength ; character++){
								cout << char(text[character] - (pin));			//decrementing ASCII value From which they were incremented
			}		
							
							}							
			else {
				cout << "Following Errors Can Occur :-\n";
				cout << "\t 1. You Choose Option Other Than 1 or 2 .\n";
				cout << "\t 2. Yor Typed An Character In Place of Number\n ";
				cout << "\t 3. Your Text Was Having More Than 100 Charactrs\n";
				
			}
				cout<< endl << endl;		
			
			system("pause");	
			
				
			}

