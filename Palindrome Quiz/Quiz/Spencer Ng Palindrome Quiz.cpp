//Spencer Ng
//Palindrome Quiz

#include <iostream>
#include<string>
using namespace std;

unsigned long long reverse(unsigned long long n) {
	unsigned long long result = 0;
	while (n != 0) {
		result *= 10;
		result += n % 10;
		n /= 10;
	}
	return result;

}

bool isPalindrome(unsigned long long n) {
	return reverse(n) == n;
}

int main() {

	unsigned long long lines, n;
	cin >> lines;

	for (unsigned long long i = 0; i < lines; i++) {
		cin >> n;
		unsigned long long initN = n;
		for (unsigned long long j = 0; j < 50 && !isPalindrome(n); j++) {
			n += reverse(n);
		}
		cout << initN << " " << (isPalindrome(n) ? to_string(n) : "TOO MANY ITERATIONS") << endl;
	}
	

	return 0;
}