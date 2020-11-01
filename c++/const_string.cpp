#include <string>
#include <iostream>
using namespace std;

// what's the difference between compose1 and compose2?
string compose1(const string& name, const string& domain) {
        return name + '@' + domain;
}

string compose2(const string name, const string domain) {
        return name + '@' + domain;
}

string compose3(string& name, const string& domain) {
        name = name + "_com" ;
        return name + '@' + domain;
}

string compose4(string& name, string domain) {
        name = name + "_com" ;
        domain = domain + "_comcom" ;
        return name + '@' + domain;
}

int main() {

        string f = "dmr";
        string g = "bell-labs.com";
        auto addr1 = compose1(f,g);
        cout << addr1 << ':' << f << ',' << g << endl;

        string h = "dmr";
        string i = "bell-labs.com";
        string addr2 = compose2(h,i);
        cout << addr1 << ':' << h << ',' << i << endl; // Outputs were same...

        string j = "dmr";
        string k = "bell-labs.com";
        auto addr3 = compose3(h,i);
        cout << addr3 << ':' << h << ',' << i << endl; 
 
        string l = "dmr";
        string m = "bell-labs.com";
        auto addr4 = compose4(l,m);
        cout << addr4 << ':' << l << ',' << m << endl; 

        return 0 ;
}