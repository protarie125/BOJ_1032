#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	auto n = int{};
	cin >> n;

	auto ans = string{};
	cin >> ans;

	const auto& l = ans.length();

	for (auto i = 1; i < n; ++i) {
		auto x = string{};
		cin >> x;

		for (auto j = 0; j < l; ++j) {
			if (ans[j] != x[j]) {
				ans[j] = '?';
			}
		}
	}

	cout << ans;

	return 0;
}