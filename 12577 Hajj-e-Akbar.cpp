#include<bits/stdc++.h>
using namespace std;

int main() {
	string s;
	int k=1;
		while(cin>>s)
    {
        if(s=="*") return 0;
        cout<<"Case "<<k<<": ";
        if(s=="Hajj")
            cout<<"Hajj-e-Akbar"<<endl;
            else cout<<"Hajj-e-Asghar"<<endl;
            k++;
    }

	return 0;
}
