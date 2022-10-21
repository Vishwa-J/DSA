// Q5(B) turning a string into the hash function with the size of 37
#include <bits/stdc++.h>
using namespace std;

struct Hash {
	const int p = 37, m = 1e9 + 7;
	int hash1 = 0;

    void compute_hash(const string& s) {
		long pow = 1;
		for(char ch: s) {
			hash1 = (hash1 + (ch + 1 - 'a') * pow) % m;
			pow = (pow * p) % m;
		}
	}

	Hash(const string& s) {
		compute_hash(s);
	}
};

int main() {
	const char* s[6] = {"fist", "sift", "shift", "fast", "faster", "shaft"};
    for(int i=0; i<6; i++){
	Hash h(s[i]);
	cout << "Hash value of " << s[i] << " is: ";
	cout<< h.hash1 << '\n';
    }
	return 0;
}
/*
Output:
Hash value of fist is: 1039410
Hash value of sift is: 1021626
Hash value of shift is: 37799774
Hash value of fast is: 1039114
Hash value of faster is: 258601138
Hash value of shaft is: 37788822
*/
