#include <iostream>
#include <string>

using namespace std;

int main() {
	string temp;
	string answer = "";
	int n;


	cin >> n; //작성할 문장수

	for (int i = 0; i < n; i++) {
		cin >> temp; //문장입력
		if (answer == "") {
			answer = temp;
		}
		
		for (int i = 0; i < temp.length(); i++) {
			if (answer[i] != temp[i])
				answer[i] = '?';
			}
	}
	cout << answer << endl;

	return 0;
}