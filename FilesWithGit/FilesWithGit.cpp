#include <iostream>
#include <cstring>
#include <fstream>
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
        for (int i = 0; i < 5; i++) {
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
        myfile.open("shoes.txt");
        for (int i = 0; i < 5; i++) {
            myfile << count[i].brand << "," << count[i].material << "," << count[i].colour << "," << count[i].size << "," << count[i].price << "\n";
        }
        myfile.close();
}

