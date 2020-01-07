#include<iostream>
#include<string>
using namespace std;
string mixText(string x, string y)
{

	int L = x.size();
	int K = y.size();
	int i =0;
	string c = "";
	if(L==K)
	{
		while(i<L)
		{
		c = c+x[i]+y[i];
		i++;
	}
	return c;
}else{
	return "E";
}
}

int main(){	
	cout << mixText("AAA","BBB") << "\n";
	cout << mixText("Hello","World") << "\n";
	cout << mixText("SOTUS","CHEER") << "\n";
	cout << mixText("1234","5678") << "\n";
	cout << mixText("6","9") << "\n";
	cout << mixText("XXXXXXX","YYY") << "\n";	
	cout << mixText("Y","XX") << "\n";	
	
	return 0;	
}
