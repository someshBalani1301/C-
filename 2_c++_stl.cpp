#include <bits/stdc++.h>
#include <map>
#include <iostream>
#include <string>
using namespace std;

void listenPairs() {
	pair<int, int> p = {1,3};
	cout << p.first << " " << p.second << endl;
}

void listenVectors() {
	vector<int> a;
	a.push_back(1);
	a.emplace_back(2);

	cout << a[1] << endl;

	for(int i = 0; i < a.size(); i++) {
		cout << a[i] << endl;
	}

	vector<int>::iterator it = a.end() - 1;

	cout << "The value of iterator is " << *(it) << endl;

	//foreach
	/* here auto means automatically assign 
	data type to temp var*/
	for(auto it : a) {
		cout << it << endl;
	}

	// erase
	vector<int> myvector;
	myvector.push_back(1);
    myvector.push_back(2);
    myvector.push_back(3);
    myvector.push_back(4);
    myvector.push_back(5);
	myvector.erase(myvector.begin() + 2, myvector.end() - 1);
	cout << "erase\n";
	for(auto it: myvector) {
		cout << it << endl;
	}

	//insert
	vector<int> myv(2,100);
	myv.insert(myv.begin()+1, 5);
	cout << "inseted value " << myv[1] << endl;

	//size
	cout << "size of myv "<< myv.size() << endl;

	//pop_back
	myv.pop_back();

	for(auto it: myv)
		cout << it << endl;

}

void listenList() {
	list<int> ls;
	ls.push_back(1);
	ls.emplace_back(2);

	ls.push_front(3);
	ls.emplace_front(4);
}

void listenDeque() {
	deque<int> dq;
	dq.push_back(1);
	dq.emplace_back(2);
	dq.push_front(3);
	dq.emplace_front(4);

	dq.pop_back();
	dq.pop_front();

	dq.back();
	dq.front();
}

void listenStack() {
	// Last In First Out
	stack<int> st;
	st.push(1);
	st.push(2);
	st.push(3);
	st.push(4);
	st.push(5);

	cout << st.top();

	st.pop();

	cout << st.top();

	cout << st.size();

	cout << st.empty();

	stack<int> st1, st2;
	st1.swap(st2);

}

void listenQueue() {
	// First in First out
	queue<int> q;
	q.push(1);
	q.push(2);
	q.emplace(4);

	cout << q.back() << endl;

	q.back() += 5;

	cout << q.back() << endl;

	q.pop();

	cout << q.front() << endl;
}

void listendPriorityQueue() {
	// Maximum Heap
	priority_queue<int> pq;
	pq.push(1);
	pq.push(2);
	pq.emplace(4);

	// stores largest value at top here it is 4

	cout << pq.top() << endl;

	pq.pop();

	cout << pq.top() << endl;


	// Minimmum heap

	// size swap empty func same as others

	priority_queue<int, vector<int>, greater<int>> pq1;

	pq1.push(2);
	pq1.push(3);

	pq1.emplace(4);

	cout << pq1.top() << endl;

}

void listenSet() {
	// stores everything in a sorted order 
	//and in a unique order

	set<int> s;
	s.insert(1);
	s.emplace(2);
	s.insert(2);
	s.insert(3);
	s.insert(4); // {1,2,3,4}

	// auto it = s.find(3);

	auto it = s.find(6);

	s.erase(5);

	// int cnt = s.cout(1);

	// auto it = s.find(3);
	s.erase(it);
}

void listenMultiSet() {
	// Everything is same as set
	// only stores duplicate elements also

	multiset<int> ms;
	ms.insert(1);
	ms.insert(2);
	ms.insert(3);

	ms.erase(1);

	int cnt = ms.count(1);

	ms.erase(ms.find(1));

	// ms.erase(ms.find(1), ms.find(1)+2);
}

void listenUnorderedSet() {
	unordered_set<int> st;
	// same as multiset and set
	// only diff is it stores value unorderly
	// it has a better complexity than most sets
}

void listenMap() {
	// Create a map of strings to integers
    map<string, int> mp;
 
    // Insert some values into the map
    mp["one"] = 1;
    mp["two"] = 2;
    mp["three"] = 3;
 
    // Get an iterator pointing to the first element in the
    // map
    map<string, int>::iterator it = mp.begin();
 
    // Iterate through the map and print the elements
    while (it != mp.end()) {
        cout << "Key: " << it->first
             << ", Value: " << it->second << endl;
        ++it;
    }
}


int main() {
	// pairs
	// listenPairs();

	// vectors
	// listenVectors();

	//list
	// listenList();

	//deque
	// listenDeque();

	//stack
	// listenStack();

	//queue
	// listenQueue();

	//priority_queue
	// listendPriorityQueue();

	//sets
	// listenSet();

	//multisets
	// listenMultiSet();

	//unordered set
	// listenUnorderedSet();

	//maps
	listenMap();



	return 0;
}