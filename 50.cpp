#include<iostream>
#include<algorithm>
#include<fstream>
#include<string>
#include<vector>
using namespace std;
//funkcija za sortiranje 
bool SortirajPom(int a, int b)
{
	if(a<b)
	return true;
	else
	return false;
}

int main()
{
	//deklaracija na vektor
	vector<int> vPesna(100);
	vector<int>::iterator iterator;
	int n,index,broj,cifra,maxCifra=0,niza[100],brojac=0;

	//definiranje na vrendosti

	string lice="Wiz Khalifa";
	string pesnaP="Its been a long day Without you, my friend And I ll tell you all about it when I see you again I ll see you again Weve come a long way (Yeah, we came a long way";
	string indeksIme="INKI1032.Borjan";
	cout<<"\n\t Index => ";
	cin>>broj;
	//dobivanje na najgolema cifra
	while(broj>0)
	{
		cifra=broj%10;
		broj=broj/10;
		if(cifra>maxCifra)
			maxCifra=cifra;
	}
	//dobivanje na niza
	for(int j=0;j<pesnaP.length();j++)
			{
				niza[brojac]=(int)(pesnaP[j]+maxCifra);
				brojac++;
			}
	cout<<endl;	
	cout<<endl;
	//polenje na vektorot so podatoci
	for(int i=0;i<brojac;i++)
		vPesna.push_back(niza[i]);	
	cout<<endl;
	//sortiranje
	sort(vPesna.begin(),vPesna.end(),SortirajPom);
	//upis vo dtaoteka preku iterator
	ofstream BPodDatoteka("1032.Proect03.txt");
	BPodDatoteka<<indeksIme<<endl<<endl;
	BPodDatoteka<<"\n Sortiran vektor so vrednosti : "<<endl;
	int br=0;
	BPodDatoteka<<"\t";
	for(iterator=vPesna.begin();iterator<vPesna.end();++iterator)
	{
	if((*iterator)!=0)
		{
			br++;
			BPodDatoteka<<(*iterator)<<" ";	
			if(br%10==0)
				BPodDatoteka<<endl<<"\t";
			else
				BPodDatoteka<<"\t";		
		}
	}
	//pecatenje napdoatoci preku iterator
	cout<<endl;
	cout<<"\t Studentot "<<indeksIme<<" ja izveduva pesnata od "<<lice<<endl<<endl;
	cout<<"\t SO TEXT :"<<pesnaP<<endl<<endl;
		cout<<"\t Vrednosti - Vektor : "<<endl<<endl;
	br=0;
	cout<<"\t";
	for(iterator=vPesna.begin();iterator<vPesna.end();++iterator)
	{
		
		if((*iterator)!=0)
		{
			br++;
			cout<<(*iterator)<<" ";	
			if(br%10==0)
				cout<<endl<<"\t";
			else
				cout<<"\t";		
		}
	
	}
	
}

