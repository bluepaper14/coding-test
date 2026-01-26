#include <iostream>
#include <string>

using namespace std;

int main() {
	int T; //test case
	int R;
	string name;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> R >> name;
			for (size_t j = 0; j < name.length(); j++) {
				for (int x = 0; x < R; x++) 
					cout << name[j];
			}
			cout << endl;
	}
	return 0;
}