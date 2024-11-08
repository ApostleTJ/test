#include <iostream>
using namespace std;

void fun() {
	cout << "this is a fun calling!" << endl;
}

int get_max(int a, int b) {
	return max(a, b);
}

int get_min(int a, int b) {
	return min(a, b);
}

int main() {
	cout << "Hello, World!" << endl;
	int a, b; cin >> a >> b;
	cout << get_max(a, b) << "  "  << get_min(a, b) << '\n';
	fun();
    return 0;
}
