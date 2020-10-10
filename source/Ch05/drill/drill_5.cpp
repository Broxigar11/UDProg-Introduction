#include "../../std_lib_facilities.h"

int main(){
	int number;
	try {
		cout << "Enter the program number(1-25): ";
		cin >> number;

		if(number==1)
			cout << "Success!\n"; //Cout 
		else if(number==2)		
			cout << "Success!\n"; //"" nem volt lezarva
		else if(number==3)
			cout << "Success" << "!\n"; // "" nem volt megnyitva
		else if(number==4)
			cout << "success" << '\n'; // "" nem volt
		else if(number==5){
			int res = 7; //string volt
			vector<int> v(10); 
			v[5] = res; 
			cout << "Success!\n";
		}else if(number==6){
			vector<int> v(10); 
			v[5] = 7; // () [] operator helyett 
			if (v[5]==7) cout << "Success!\n"; //[] operator, !=; nem feltetlenul hiba
		}else if(number==7){
			bool cond=0; //nem deklaralt
			if (cond) cout << "Success!\n"; 
			else cout << "Fail!\n";
		}else if(number==8){
			bool c = false; 
			if (c) cout << "Success!\n"; 
			else cout << "Fail!\n"; 
			//nincs benne hiba
		}else if(number==9){
			string s = "ape"; //nem felhasznalt
			bool c = true; //bool erteke nem lehet string, <s-ertelmetlen 
			if (c) cout << "Success!\n";
		}else if(number==10){
			string s = "ape"; 
			if (s=="ape") cout << "Success!\n"; //atirtam a feltetelt
		}else if(number==11){
			string s = "fool"; //atirtam az erteket
			if (s=="fool") cout << "Success!\n"; // < operator
		}else if(number==12){
			string s = "fool"; //atritam az erteket 
			if (s=="fool") cout << "Success!\n"; //< operator, + == helyett
		}else if(number==13){
			vector<char> v(5); 
			for (int i=0; i<v.size(); ++i); // 0 i helyett, lefut, de nem csinal semmit 
			cout << "Success!\n";
		}else if(number==14){
			vector<char> v(5); 
			for (int i=0; i<=v.size(); ++i) ; //<= < helyett, de ez nem feltetlenul hiba; nem csinal semmit
			cout << "Success!\n";
		}else if(number==15){
			string s = "Success!\n";
			for (int i=0; i<s.length(); ++i) cout << s[i]; // 6 helyett s.length()
		}else if(number==16){
			if (true) // then nem kell, felesleges if, mindig belep
				cout << "Success!\n"; 
			else 
				cout << "Fail!\n";
		}else if(number==17){
			int x = 2000; 
			int c = x; //2000 erteku char-ra alakitja, utana nem lesznek egyenloek; atirtam int-re
			if (c==2000) cout << "Success!\n";
		}else if(number==18){
		string s = "Success!\n"; 
		for (int i=0; i<s.length(); ++i) cout << s[i]; //a 10 tul nagy index
		}else if(number==19){
			vector<int> v(5);//hianyzo vektortipus 
			for (int i=0; i<=v.size(); ++i) ; 
			cout << "Success!\n";
		}else if(number==20){
			int i=0; 
			int j = 9; 
			while (i<10) ++i; // j-t novelte, vegtelen ciklus 
			if (j<i) cout << "Success!\n";
		}else if(number==21){
			int x = 4; 
			double d = 5/(double(x)-2); //az x=2; 0-val valo osztas , kotojel - helyett, x-et at kell alakitani double-e
			if (d==2.5) cout << "Success!\n"; //atirtam a feltetelt
		}else if(number==22){
			string s = "Success!\n"; //string egy tipus; nem kell tipust megadni 
			for (int i=0; i<=s.length(); ++i) cout << s[i]; // tul nagy index
		}else if(number==23){
			int i=0;
			int j=9; //nem volt deklaralva
			while (i<10) ++i; //j-t novelte; vegtelen ciklus;
			if (j<i) cout << "Success!\n";
		}else if(number==24){
			int x = 4; 
			double d = 5/(double(x)-2); //kotojel - helyett 
			if (d==2.5) cout << "Success!\n"; // = == helyett; atirtam a feltetelt 
		}else if(number==25){
			cout << "Success!\n"; // cin cout helyett
		}	

		keep_window_open();
		return 0;
	}
	catch (exception& e) {
		cerr << "error: " << e.what() << '\n';
		keep_window_open();
		return 1;
	}
	catch (...) {
		cerr << "Oops: unknown exception!\n";
		keep_window_open();
		return 2;
	}
}