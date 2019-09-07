/* code : InYourG00D
  Github: https://github.com/InYourG00D1
  */
#include <iostream>
#include <cstdlib> //fungsi srand
#include <ctime> //fungsi waktu
using namespace std;

int main()
{
	int user, bot;
	int win=0;
	int draw=0;
	int lose=0;
	char retry;
	
	{
		cout << "+==============================+" <<endl;
		cout << "+                              +" <<endl;
		cout << "+       Game Sederhana         +" <<endl;
		cout << "+      Gajah,Orang,Semut       +" <<endl;
		cout << "+                              +" <<endl;
		cout << "+====================InYourG00D+" <<endl;
		cout <<endl;
		
		cout << "Pilih!" <<endl;
		cout << "1.Gajah" <<endl;
		cout << "2.orang" <<endl;
		cout << "3.semut" <<endl;
		cout << "Pilihanmu: " <<endl;
		cin >> user;
		
		srand (time(NULL));//merandom nilai Yang dikeluarkan bot
		bot = rand () % 3; // Mereset Batas Angka Yang Dikeluarkan Bot
		
		if ( user == 1 )
		{
		if ( bot == 1 && user == 1 )
			{
			cout << "Pilihan bot: " << "1" <<endl;
			cout << "seri" <<endl;
			draw++;
		}
		else if ( bot == 2 && user == 1 )
		{
			cout << "Pilihan Bot: " << "2" <<endl;
			cout << "menang" <<endl;
			win++;
		}
		else if ( bot == 3 && user == 1 )
		{
			cout << "Pilihan Bot: " << "3" <<endl;
			cout << "kalah" <<endl;
			lose++;
		}
		cout <<endl;
		cout << "==========" <<endl;
		cout << "menang: " << win <<endl;
		cout << "kalah: " << lose <<endl;
		cout << "seri: " << draw <<endl;
		cout << "==========" <<endl;
	}if ( user == 2 )
	{
		if ( bot == 3 && user == 2 ){
		cout << "Pilihan Bot: " << "3" <<endl;
		cout << "menang" <<endl;
		win++;
	}else if ( bot == 2 && user == 2){
		cout << "Pilihan bot: " << "2" <<endl;
		cout << "seri" << endl;
		draw++;
	}else if ( bot == 1 && user == 2 ){
		cout << "Pilihan bot: " << "1" <<endl;
		cout << "kalah" <<endl;
		lose++;
	}
	cout <<endl;
	cout << "==========" <<endl;
	cout << "menang: " << win <<endl;
	cout << "seri: " << draw <<endl;
	cout << "kalah: " << lose <<endl;
	cout << "==========" <<endl;
}if ( user == 3 )
{
	if ( bot == 1 && user == 3 )
	cout << "Pilihan bot: " << "1" <<endl;
	cout << "menang" <<endl;
	win++;
}else if( bot == 2 && user == 3 ){
	cout << "Pilihan bot: " << "2" <<endl;
	cout << "kalah" <<endl;
	lose++;
}else if ( bot == 3 && user == 3 ){
	cout << "Pilihan bot: " << "3" <<endl;
	cout << "seri" <<endl;
	draw++;
}else {
	cout << "Pilihan Tidak Ada" <<endl;
}	
 cout <<endl;
	cout << "==========" <<endl;
	cout << "menang: " << win <<endl;
	cout << "seri: " << draw <<endl;
	cout << "kalah: " << lose <<endl;
	cout << "==========" <<endl;
}
}