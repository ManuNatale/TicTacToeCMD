#include <iostream>
using namespace std;

	string a = "\0";
	string b = "\0";
	string c = "\0";
	string d = "\0";
	string e = "\0";
	string f = "\0";
	string g = "\0";
	string h = "\0";
	string i = "\0";
	string playAgain = "\0";
	int WIN = 0;
	int again = 1;
	int nbTours = 0;
	int matchNull = 0;

int table(){
	
	cout << "\n" << endl;
	cout << "a		|b		|c		" << endl;
	cout << "	"<<a<<"	|	"<<b<<"	|	"<<c<<"	" << endl;
	cout << "---------------------------------------------" << endl;
	cout << "d		|e		|f		" << endl;
	cout << "	"<<d<<"	|	"<<e<<"	|	"<<f<<"	" << endl;
	cout << "---------------------------------------------" << endl;
	cout << "g		|h		|i		" << endl;
	cout << "	"<<g<<"	|	"<<h<<"	|	"<<i<<"	" << endl;
	cout << "\n" << endl;
	
	return 0;
}

int checkWin(){
	if((a == "X" && b == "X" && c == "X") || (a == "O" && b == "O" && c == "O")){
		WIN = 1;
	}else if((d == "X" && e == "X" && f == "X") || (d == "O" && e == "O" && f == "O")){
		WIN = 1;
	}else if((g == "X" && h == "X" && i == "X") || (g == "O" && h == "O" && i == "O")){
		WIN = 1;
	}else if((a == "X" && d == "X" && g == "X") || (a == "O" && d == "O" && g == "O")){
		WIN = 1;
	}else if((b == "X" && e == "X" && h == "X") || (b == "O" && e == "O" && h == "O")){
		WIN = 1;
	}else if((c == "X" && f == "X" && i == "X") || (c == "O" && f == "O" && i == "O")){
		WIN = 1;
	}else if((a == "X" && e == "X" && i == "X") || (a == "O" && e == "O" && i == "O")){
		WIN = 1;
	}else if((c == "X" && e == "X" && g == "X") || (c == "O" && e == "O" && g == "O")){
		WIN = 1;
	}else{
		WIN = 0;
	}
	
	return 0;
}

int main()
{	
	cout << "Tic Tac Toe\n\n" << endl;
		
	cout << "Player X Begin" << endl;
	cout << "\n\n\n\n\n\n\n" << endl;
	
	while(true){
		while(true){
			while(true){	
				table();
				string xPlay = "\0";
				cout << "Player X placement : ";
				cin >> xPlay;
				cout << "\n\n\n\n\n\n\n\n\n\n\n" << endl;
				
				if(xPlay == "a" && a == "\0"){
					a = "X";
					break;
				}else if(xPlay == "a" && a != "\0"){
					cout << "Impossible\n" << endl;
					continue;
				}
				if(xPlay == "b" && b == "\0"){
					b = "X";
					break;
				}else if(xPlay == "b" && b != "\0"){
					cout << "Impossible\n" << endl;
					continue;
				}
				if(xPlay == "c" && c == "\0"){
					c = "X";
					break;
				}else if(xPlay == "c" && c != "\0"){
					cout << "Impossible\n" << endl;
					continue;
				}
				if(xPlay == "d" && d == "\0"){
					d = "X";
					break;
				}else if(xPlay == "d" && d != "\0"){
					cout << "Impossible\n" << endl;
					continue;
				}
				if(xPlay == "e" && e == "\0"){
					e = "X";
					break;
				}else if(xPlay == "e" && e != "\0"){
					cout << "Impossible\n" << endl;
					continue;
				}
				if(xPlay == "f" && f == "\0"){
					f = "X";
					break;
				}else if(xPlay == "f" && f != "\0"){
					cout << "Impossible\n" << endl;
					continue;
				}
				if(xPlay == "g" && g == "\0"){
					g = "X";
					break;
				}else if(xPlay == "g" && g != "\0"){
					cout << "Impossible\n" << endl;
					continue;
				}
				if(xPlay == "h" && h == "\0"){
					h = "X";
					break;
				}else if(xPlay == "h" && h != "\0"){
					cout << "Impossible\n" << endl;
					continue;
				}
				if(xPlay == "i" && i == "\0"){
					i = "X";
					break;
				}else{
					cout << "Impossible\n" << endl;
					continue;
				}				
			}
			checkWin();
			if(WIN == 1){
				table();
				cout << "\nPlayer X WIN !!" << endl;
				break;
			}
			nbTours += 1;
			if(nbTours == 9){
				//matchNull = 1;
				cout << "It's a draw" << endl;
				break;
			}
			
		//**********************************************************************
			while(true){
				table();
				string oPlay = "\0";
				cout << "player O placement : ";
				cin >> oPlay;
				cout << "\n\n\n\n\n\n\n\n\n\n\n" << endl;
				
				if(oPlay == "a" && a == "\0"){
					a = "O";
					break;
				}else if(oPlay == "a" && a != "\0"){
					cout << "Impossible\n" << endl;
					continue;
				}
				if(oPlay == "b" && b == "\0"){
					b = "O";
					break;
				}else if(oPlay == "b" && b != "\0"){
					cout << "Impossible\n" << endl;
					continue;
				}
				if(oPlay == "c" && c == "\0"){
					c = "O";
					break;
				}else if(oPlay == "c" && c != "\0"){
					cout << "Impossible\n" << endl;
					continue;
				}
				if(oPlay == "d" && d == "\0"){
					d = "O";
					break;
				}else if(oPlay == "d" && d != "\0"){
					cout << "Impossible\n" << endl;
					continue;
				}
				if(oPlay == "e" && e == "\0"){
					e = "O";
					break;
				}else if(oPlay == "e" && e != "\0"){
					cout << "Impossible\n" << endl;
					continue;
				}
				if(oPlay == "f" && f == "\0"){
					f = "O";
					break;
				}else if(oPlay == "f" && f != "\0"){
					cout << "Impossible\n" << endl;
					continue;
				}
				if(oPlay == "g" && g == "\0"){
					g = "O";
					break;
				}else if(oPlay == "g" && g != "\0"){
					cout << "Impossible\n" << endl;
					continue;
				}
				if(oPlay == "h" && h == "\0"){
					h = "O";
					break;
				}else if(oPlay == "h" && h != "\0"){
					cout << "Impossible\n" << endl;
					continue;
				}
				if(oPlay == "i" && i == "\0"){
					i = "O";
					break;
				}else{
					cout << "Impossible\n" << endl;
					continue;
				}				
			}
			checkWin();
			if(WIN == 1){
				table();
				cout << "\nPlayer O WIN !!" << endl;
				break;
			}
			nbTours += 1;
			if(nbTours == 9){
				//matchNull = 1;
				cout << "It's a draw" << endl;
				break;
			}
		}
		while(true){
			cout << "\nPlay again ? [y/n] : ";
			cin >> playAgain;
			if(playAgain == "y"){
				nbTours = 0;
				a = "\0";
				b = "\0";
				c = "\0";
				d = "\0";
				e = "\0";
				f = "\0";
				g = "\0";
				h = "\0";
				i = "\0";
				cout << "\n\n\n\n\n\n\n\n\n\n\n" << endl;
				break;
			}else if(playAgain == "n"){
				again = 0;
				break;
			}else if(playAgain != "y" || playAgain != "n"){
				continue;
			}
		}
		if(again == 0){
			break;
		}
	}
}
