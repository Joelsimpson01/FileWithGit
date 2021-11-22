#include <iostream>
#include <cstring>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;


struct shoes {
    string brand;
    string material;
    string colour;
    int size;
    float price;
};


int main()
{
    struct shoes count[5];
    int i;
    string data, line, field, input;
    bool found = false;
    vector <vector<string> > array;
    vector<string> v;
        for (int i = 0; i < 1; i++) {
            cout << "Shoe Number " << i << "Detials:\n\n";
            cout << "Enter Brand : ";
            cin >> count[i].brand;
            cout << "\nEnter Material : ";
            cin >> count[i].material;
            cout << "\nEnter Colour : ";
            cin >> count[i].colour;
            cout << "\nEnter Size : ";
            cin >> count[i].size;
            cout << "\nEnter Price : ";
            cin >> count[i].price;
        }

        ofstream myfile;
        myfile.open("shoes.txt", ios::app);
        for (int i = 0; i < 1; i++) {
            myfile << count[i].brand << "," << count[i].material << "," << count[i].colour << "," << count[i].size << "," << count[i].price << "\n";
        }
        myfile.close();

        ifstream myread;
        myread.open("shoes.txt");
        while (getline(myread, line)) {
            v.clear();
            stringstream ss(line);
            while (getline(ss, field, ',')) {
                v.push_back(field);
            }
            array.push_back(v);
        }
        cout << "\nLook for size: ";
        cin >> input;
        cout << "\nShoes Found: \n";
        
        for (int i = 0; i < array.size(); i++) {
            
            if (array[i][3] == input) {
                cout << "Brand: " << array[i][0];
                cout << "\nMaterial: " << array[i][1];
                cout << "\nColour: " << array[i][2];
                cout << "\nSize: " << array[i][3];
                cout << "\nPrice: " << array[i][4] << "\n\n";
                found = true;
            }
        }
        if (!found) {
            cout << "No Shoes Found";
        }

        myread.close();
}

