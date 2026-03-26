#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string line;
    cin >> line;

    vector<string> croatian = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};

    for (const string& target : croatian) {
        size_t pos = line.find(target);
        
        while (pos != string::npos) {
            line.replace(pos, target.length(), "#");
            pos = line.find(target);
        }
    }
    cout << line.length() << endl;

    return 0;
}