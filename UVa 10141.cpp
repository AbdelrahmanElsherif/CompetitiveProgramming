#include <iostream>
#include<string>
using namespace std;
int main() {
	int n, p; int cnt = 0;
	while (std::cin >> n>>p,n>0)
	{
		cnt++;
		string input,out, name; int r;double price, fin_price = 1e20; int max = -1;
		for (int i = 0; i < n; i++) {
			cin.ignore();
			getline(cin, input);
		}

		while(p--) {
			getline(cin,name);
			cin >> price >> r;
			if (r > max) {
				max = r ;
				out = name;
				fin_price= price;
			}
			else if (r  == max && price <fin_price ) {
				max = r ;
				out = name;
				fin_price = price;
			}
			cin.ignore();
			for (int j = 0; j < r; j++){
				getline(cin, input);
			}

		}

		if (cnt > 1) cout<<"\n";
		cout<<"RFP #"<<cnt<<"\n";
		cout << out << "\n";
	}
	return 0;
}

/*using namespace std;

int main() {
	int r, n;
	string x;
	int count = 0;

	while (cin >> r >> n, r || n) {
		count++;

		double price = 2000000000, p;
		int reqMet = -1, rm;
		string name, nam;

		for (int i = 0; i < r; i++) {
			cin.ignore();
			getline(cin, x);
		}

		while (n--) {
			getline(cin, nam);
			scanf("%lf %d\n", &p, &rm);
			if (rm > reqMet) {
				reqMet = rm;
				name = nam;
				price = p;
			}
			else if (rm == reqMet && p < price) {
				reqMet = rm;
				name = nam;
				price = p;
			}

			for (int i = 0; i < rm; i++) {
				getline(cin, x);
			}
		}

		if (count > 1)
			cout << endl;
		cout << "RFP #" << count << endl;
		cout << name << endl;
	}

	return 0;
}*/