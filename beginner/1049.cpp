/*
In this problem, the point is read three Portuguese words. 
These words define an animal according to the table below, from left to right. 
After, print the chosen animal defined by these three words.

i used the function tolower to turned any letters in my string in lowercase
and i used the RANGE-BASED FOR LOOP C++ to implement the lowercase idea

the comlexity is O(1) → constant time, independent of input size (since you always get exactly 3 small words).
Memory: O(1) → only three short strings and some references.
*/


#include <bits/stdc++.h>

using namespace std;
 
int main() {
 
    string a, b, c;
    
    cin >> a >> b >> c;
    
    for (char &ch : a) ch = tolower(ch);
    for (char &ch : b) ch = tolower(ch);
    for (char &ch : c) ch = tolower(ch);
    
    if(a == "vertebrado" && b == "ave" && c == "carnivoro")             cout << "aguia" << endl;
    else if(a == "vertebrado" && b == "ave" && c == "onivoro")          cout << "pomba" << endl;
    else if(a == "vertebrado" && b == "mamifero" && c == "onivoro")     cout << "homem" << endl;
    else if(a == "vertebrado" && b == "mamifero" && c == "herbivoro")   cout << "vaca" << endl;
    
    else if(a == "invertebrado" && b == "inseto" && c == "hematofago")  cout << "pulga" << endl;
    else if(a == "invertebrado" && b == "inseto" && c == "herbivoro")   cout << "lagarta" << endl;
    else if(a == "invertebrado" && b == "anelideo" && c == "hematofago")cout << "sanguessuga" << endl;
    else if(a == "invertebrado" && b == "anelideo" && c == "onivoro")  cout << "minhoca" << endl; 
    
    return 0;
}

/*
there is a optimize form to solve the problema

#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, b, c;
    cin >> a >> b >> c;

    for (char &ch : a) ch = tolower(ch);
    for (char &ch : b) ch = tolower(ch);
    for (char &ch : c) ch = tolower(ch);

    if (a == "vertebrado") {
        if (b == "ave") {
            if (c == "carnivoro") cout << "aguia\n";
            else cout << "pomba\n";
        } else { // mamífero
            if (c == "onivoro") cout << "homem\n";
            else cout << "vaca\n";
        }
    } else { // invertebrado
        if (b == "inseto") {
            if (c == "hematofago") cout << "pulga\n";
            else cout << "lagarta\n";
        } else { // anelídeo
            if (c == "hematofago") cout << "sanguessuga\n";
            else cout << "minhoca\n";
        }
    }

    return 0;
}

*/
