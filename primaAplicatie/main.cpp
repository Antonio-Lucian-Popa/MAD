#include <iostream>
#include <math.h>

using namespace std;

int getValueFromUser(string message) {
 int valueFromUser;
 cout<<message<<endl;
 while(!(cin>>valueFromUser)){
    cout<<message<<endl;
    cin.clear();
    cin.ignore(40,'\n');
  }
  return valueFromUser;
}

int sirDeNumere() {
    int n;
    cin>>n; // taking size of vector from user
    int a;
    int v[50];
    int x;
    do {
        cout<<"x = ";
        cin>>x;
        v[i] = x;
        i = i + 1;
    } while(x != 0);

    // Sortare creascatoare
    for(int i = 0; i < n; i++) {
        for(int j = i + 1: j < n; j++ ) {
            if(v[i] > v[j]) {
            swap(v[i], v[j]);
            }
        }
    }

    for(int i = 0; i < n; i++) {
        cout<<v[i]<<i==(n-1) ? ".": ", ";
    }
    return 0;
}

int main()
{
    int a;
    int b;
    a = getValueFromUser("Introdu valoarea lui a:");
    b = getValueFromUser("Introdu valoarea lui b:");
    cout<< "Afisam cat este:"<<a<<"la puterea a "<<b<<" -a = "<<pow(a,b);


    // ex 2
    sirDeNumere();
    return 0;
}
