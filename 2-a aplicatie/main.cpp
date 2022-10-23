#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

void ecuatieGrad2() {
    int a,b,c;
    double x1,x2,delta;
    cout << " Ecuatia de gradul II:"<<endl<<endl;
    cout<< "Coeficietul lui x^2" << endl;
    cin>> a;
    cout<< "Coeficientul lui x^1"<<endl;
    cin>> b;
    cout<< "Coeficientul lui x^0"<<endl;
    cin>> c;



    if(a!=0)
    {
        cout<< "Ecuatia arata asa: "<<endl;
        cout<<(a<0?"-":"")<<((a==1||a==-1)?"":to_string(a))<<"x^2 ";
        if (b != 0)
            cout<<(b<0?"-":" + ")<<((b==1||b==-1)?"":to_string(b))<<"x ";
        if (c != 0)
            cout<<(c<0?"":" + ")<<c;
        cout<< " = 0"<<endl;
        delta=b*b-4*a*c;



        if(delta>=0)
        {
            x1=(-b+sqrt(delta))/(2*a);
            x2=(-b-sqrt(delta))/(2*a);
            cout<<"x1= "<<x1<<endl;
            cout<<"x2= "<<x2<<endl;
        }
        else
        if(delta<0)
        {
            cout<<"Nu exista solutii";
        }
    }
    else
        cout<< "Nu este ecuatie de gradul II."<<endl;
}


void reverseWord(string& word) {
    for (int i = 0; i < word.length() / 2; i++)
        swap(word[i], word[word.length() - i - 1]);
}

void checkPalindrom(string initialWord, string reversedWord) {
    cout<<reversedWord<<endl;
    if(initialWord == reversedWord) {
        cout<<"Cuvantul: " + initialWord<<" este palindrom"<<endl;
    } else {
        cout<<"Cuvantul: " + initialWord<<" nu este palindrom"<<endl;
    }
}

void citireDate() {
    string word;
    cout<<"Dati un cuvant pentru a verifica daca este palindrom: "<<endl;
    cin>>word;
    string initialWord = word;
    reverseWord(word);
    checkPalindrom(initialWord, word);
}


int main()
{
   // ecuatieGrad2();

/*  char x;

   do {
       cout<<"Scrieti o cifra:"<<endl;
       cin>>x;
       switch (x) {
           case '1': cout<<"Este cifra unu"<<endl; break;
           case '2': cout<<"Este cifra doi"<<endl; break;
           case '3': cout<<"Este cifra trei"<<endl; break;
           case '4': cout<<"Este cifra patru"<<endl; break;
           case '5': cout<<"Este cifra cinci"<<endl; break;
           case '6': cout<<"Este cifra sase"<<endl; break;
           case '7': cout<<"Este cifra sapte"<<endl; break;
           case '8': cout<<"Este cifra opt"<<endl; break;
           case '9': cout<<"Este cifra noua"<<endl; break;
           default: cout<<"Nu ati indrodus o cifra"<<endl; break;

       }
   } while (x != '0'); */

   citireDate();

    return 0;
}



