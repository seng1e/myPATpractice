#include <iostream>
#include <queue>
using namespace std;
int main() {
	queue<int> q;
	for (int i = 0; i< 6; i++) {
		q.push(i);
	}
	cout << q.front() << " " << q.back() << endl;
	cout << q.size() << endl;
	q.pop();
	cout << q.front() << endl;
	cout << q.size() << endl;
	return 0;
}

