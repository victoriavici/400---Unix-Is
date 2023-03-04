#include <iostream>
#include <vector>
#include <algorithm>  
#include <cmath>
using namespace std;
int main() {
	int number;
	while (cin >> number)
	{
		string max = "";
		string nacitaj;
		vector<string> vektor;
		for (int i = 0; i < number; i++)
		{
			cin >> nacitaj;
			nacitaj = nacitaj + "  ";
			vektor.push_back(nacitaj);
			if (max.size() < nacitaj.size())
			{
				max = nacitaj;
			}
		}
		for (int i = 0; i < number; i++)
		{
			nacitaj = vektor.at(i);
			int size = nacitaj.size();
			for  (int j = size ;  j < max.size();  j++)
			{
				nacitaj = nacitaj + " ";
			}
			vektor.at(i) = nacitaj;
		}
		cout << "------------------------------------------------------------" << endl;
		sort(vektor.begin(), vektor.end());
		int stlpce = 62 / max.size();
		int riadky = ceil(static_cast<double>(number) / static_cast<double>(stlpce));
		for (int i = 0; i < riadky; i++) {
			for (int j = 0; j < number - i; j+= riadky)
			{
				cout << vektor.at(i + j);
			}
			cout << endl;
		}

	}


	return 0;
}