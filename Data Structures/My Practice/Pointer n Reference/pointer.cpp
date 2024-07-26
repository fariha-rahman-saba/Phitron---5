#include <bits/stdc++.h>
using namespace std;


int main() {
    int number = 567;
    cout<<"value of number: "<< number<<endl;
    cout<<"address of where number is stored: "<<&number<<endl;

    int* number_address = &number;

    int** number_address_er_address = &number_address;
    cout<<"address of number_address: "<<number_address_er_address<<endl;

    return 0;
}