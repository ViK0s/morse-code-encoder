#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char tababc[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
	string tabmorse[] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};
	string x;
	string koniec;
	cout<<"Wpisz tekst do zaszyfrowania:"<<endl;
	cin>>x;
	for(int a = 0; a<x.length(); a++){
		char tmpstr = x[a]; 
		for(int c = 0; c<26; c++){
			if(tmpstr == tababc[c]){
				koniec = tabmorse[c];
				cout<<koniec<<"|";
			}
		}
	}

	
	
	
	return 0;
}
