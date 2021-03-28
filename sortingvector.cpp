#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int nilai;
    vector<int> vec;
    cout << "Banyak data yang ingin dimasukkan : " ;
    cin >> n;

    cout << "Masukkan nilai : ";
    for(int i=0 ;i<n ; i++)
    {

        cin >> nilai ;
        vec.push_back(nilai);
    }
    cout << "Isi vector sebelum disorting : " << endl;
    for(int i=0 ; i<n ; i++){
        cout << vec[i] << " ";
    }

    sort(vec.begin(),vec.end());
    cout << endl << endl;


    cout << "Isi vector setelah disorting : " << endl;
    for(int i=0 ; i<n ; i++){
        cout << vec[i] << " ";
    }

    return 0;
}
