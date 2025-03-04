#include <iostream>
#include <string>

using namespace std;

int main() {
    int n, x, combined_size;

    // Input number of domestic animals
    cout << "Enter the number of domestic animals: ";
    cin >> n;
    string domesticAnimals[n]; // Array to store domestic animal names

    // Input domestic animals
    cout << "Enter the names of domestic animals:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Domestic Animal " << (i + 1) << ": ";
        cin >> domesticAnimals[i];
    }

    // Print domestic animals
    cout << "\nDomestic Animals Entered:" << endl;
    for (int i = 0; i < n; i++) {
        cout << domesticAnimals[i] << endl;
    }

    // Input number of wild animals
    cout << "\nEnter the number of wild animals: ";
    cin >> x;
    string wildAnimals[x]; // Array to store wild animal names

    // Input wild animals
    cout << "Enter the names of wild animals:" << endl;
    for (int i = 0; i < x; i++) {
        cout << "Wild Animal " << (i + 1) << ": ";
        cin >> wildAnimals[i];
    }

    // Print wild animals
    cout << "\nWild Animals Entered:" << endl;
    for (int i = 0; i < x; i++) {
        cout << wildAnimals[i] << endl;
    }


//COMBINED ARRAY
combined_size = (n+x);
string combinedAnimals[combined_size]; //array for both domestic and wild animals

//copy element from donestic and wild animals to combined array
for (int i = 0; i < n; i++){
	combinedAnimals[i] = domesticAnimals[i];  //copying from domestic animals array
}
for (int i = 0; i < x; i++){
	combinedAnimals[x + i] = wildAnimals[i];  //copying from wild animals array
}



//print the combined array
cout << "\nAll Animals Entered:" << endl;
for (int i = 0; i < combined_size; i++){
	cout << combinedAnimals[i] <<" ";
}

    return 0;
}