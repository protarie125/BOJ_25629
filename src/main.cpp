#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;

	auto co = int{ 0 };
	auto ce = int{ 0 };
	for (auto i = 0; i < n; ++i) {
		int x;
		cin >> x;

		if (0 == x % 2) {
			++ce;
		}
		else {
			++co;
		}
	}

	if (n / 2 == ce) {
		cout << 1;
	}
	else {
		cout << 0;
	}

	return 0;
}