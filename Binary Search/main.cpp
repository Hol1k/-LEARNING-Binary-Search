#include <iostream>
#include <vector>

using namespace std;

int binary_search(const vector<int> list, const int item)
{
	int low = 0;
	int high = list.size() - 1;
	int mid, guess;

	while (low <= high)
	{
		mid = (low + high) / 2;
		guess = list[mid];
		if (guess == item) return mid;
		if (guess > item) high = mid - 1;
		else low = mid + 1;
	}
	return -1;
}

int main()
{
	setlocale(LC_ALL, "ru");
	vector<int> my_list = { 1, 3, 5, 7, 9 };
	cout << binary_search(my_list, 7);
	return 0;
}