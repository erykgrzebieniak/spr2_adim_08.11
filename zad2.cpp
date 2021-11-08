#include <iostream>

using namespace std;

class Uczen
{
	public:
		string imie,nazwisko,klasa;
		int rok,grupa;
		
		void wczytaj()
		{
			cout<<"\nPodaj imie: ";
			cin>>imie;
			cout<<"\nPodaj nazwisko: ";
			cin>>nazwisko;
			cout<<"\nPodaj rok urodzenia: ";
			cin>>rok;
			cout<<"\nPodaj klase: ";
			cin>>klasa;
			cout<<"\nPodaj grupe:  ";
			cin>>grupa;
		}
		void wypisz_wymaluj()
		{
			cout<<"\nImie:\t"<<imie;
			cout<<"\nNazwisko:\t"<<nazwisko;
			cout<<"\nRok urodzenia:\t"<<rok;
			cout<<"\nKlasa:\t"<<klasa;
			cout<<"\nGrupa:\t"<<grupa;
		}
		
		void metryczka()
		{
			cout<<"Autor: "<<endl;
			cout<<"\t Eryk Grzebieniak"<<endl;
			cout<<"\t 3cg"<<endl;
		}
};

int main()
{
	Uczen *uczen;
	uczen = new Uczen;
	
	uczen->metryczka();
	uczen->wczytaj();
	uczen->wypisz_wymaluj();
	
	delete uczen;
	return 0;
}
