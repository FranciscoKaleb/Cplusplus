#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

using namespace std;
void MySolution();
void InstructorsSolution();

struct City
{
	string name;
	long population;
	double cost;
};

struct Country
{
	string name;
	vector<City> cities;
};

struct Tours
{
	string title;
	vector<Country> countries;
};


int main()
{
	InstructorsSolution();
}

void MySolution()
{
	Tours tours
	{
		"Tours ticket prices from miami",
		{
			{
				"Columbia",
				{
					{"Bogota", 8778000, 400.98},
					{"Cali", 2401000,424.12},
					{"Medellin", 2464000, 350.98},
					{"Cartagena", 972000, 345.34}
				}
			},
			{
				"Brazil",
				{
					{"Rio De Janeiro", 13500000, 567.45},
					{"Sao Paolo", 11310000, 975.45},
					{"Salvador", 18234000, 855.99}
				}
			},
			{
				"Chile",
				{
					{"Valdivia", 260000, 569.12},
					{"Santiago", 7040000, 520.00}
				}
			},
			{
				"Argentina",
				{
					{"Buenos Aires", 3010000, 723.77}
				}
			}
		}
	};
	cout << setprecision(2);
	cout << fixed;
	cout << tours.title << endl;
	cout << "______________________________________________________________________" << endl;
	cout << setfill(' ') << setw(15) << left << "Country"
	<< "\t" << setfill(' ') << setw(18) << left << "City"
	<< "\t" << setfill(' ') << setw(15) << left << "Population"
	<< "\t" << setfill(' ') << setw(15) << left << "Cost"
	<< endl;
	cout << "______________________________________________________________________" << endl;
	for(size_t j = 0; j < tours.countries.size() ; j++)
	{
		cout  << "[" << j << "]" << setw(7) << setfill('*')  << left << tours.countries[j].name;

		for(size_t i = 0 ; i < tours.countries[j].cities.size(); i++)
		{
			if(i == 0)
			{
				cout << "\t" << setfill(' ') << setw(18) << left << tours.countries[j].cities[i].name
				 << "\t" << setfill(' ') << setw(15) << left << tours.countries[j].cities[i].population
				 << "\t" << setfill(' ') << setw(15) << left << tours.countries[j].cities[i].cost
				//<<  "\t" << country.cities[i].population
				<< endl;
			}
			else
			{
				cout << "\t\t" << setfill(' ') << setw(18)<< left << tours.countries[j].cities[i].name
				 << "\t" << setfill(' ') << setw(15) << left << tours.countries[j].cities[i].population
				 << "\t" << setfill(' ') << setw(15) << left << tours.countries[j].cities[i].cost
				//<<  "\t" << country.cities[i].population
				<< endl;
			}

		}
		cout << "______________________________________________________________________" << endl;
	}
	cout << "______________________________________________________________________" << endl;

}

void InstructorsSolution()
{
	Tours tours
	{
		"Tours ticket prices from miami",
		{
			{
				"Columbia",
				{
					{"Bogota", 8778000, 400.98},
					{"Cali", 2401000,424.12},
					{"Medellin", 2464000, 350.98},
					{"Cartagena", 972000, 345.34}
				}
			},
			{
				"Brazil",
				{
					{"Rio De Janeiro", 13500000, 567.45},
					{"Sao Paolo", 11310000, 975.45},
					{"Salvador", 18234000, 855.99}
				}
			},
			{
				"Chile",
				{
					{"Valdivia", 260000, 569.12},
					{"Santiago", 7040000, 520.00}
				}
			},
			{
				"Argentina",
				{
					{"Buenos Aires", 3010000, 723.77}
				}
			}
		}
	};

	const int total_width {70};
	const int field1_width {20};
	const int field2_width {20};
	const int field3_width {15};
	const int field4_width {15};


	cout << "0123456789012345678901234567890123456789012345678901234567890123456789" << endl; //ruler 70 char

	int title_length = tours.title.length();
	cout << setw((total_width - title_length)/2) << setfill('*') << "" <<  tours.title << endl;
	cout << endl;
	cout << setw(field1_width) << left << "Country"
		 << setw(field2_width) << left << "City"
		 << setw(field3_width) << left << "Population"
		 << setw(field4_width) << left << "Price"
		 << endl;

	cout << setprecision(2) << fixed;

	for(Country country: tours.countries)
	{
		for(size_t i = 0; i < country.cities.size(); i++)
		{
			cout << setw(field1_width) << left << ((i==0) ? country.name: "") // i used two \t which is not efficient
				 << setw(field2_width) << left << country.cities.at(i).name
				 << setw(field3_width) << left << country.cities.at(i).population
				 << setw(field4_width) << left << country.cities.at(i).cost
				 << endl;
		}
	}
	cout << "\n\n";



}
