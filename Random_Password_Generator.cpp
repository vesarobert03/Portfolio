#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(){
    char characters[] = "qwertyuiopasdfghjklzxcvbnm1234567890QWERTYUIOPASDFGHJKLZXCVBNM ";
    string password;
    int lenght, randomNumber;

    ofstream out_file;

    out_file.open("Password.txt");

    cout << "Enter the number of digits for your password: " << endl;
    cin >> lenght;

    //The index starts at 0 that's why we need to add 1 there ( all 63 characters )

    srand(time(0));

    for(int i = 0; i < lenght; i++){
        randomNumber = rand() % 63 + 1;

        out_file << characters[randomNumber];
    }

    cout << "Done\n";
}
