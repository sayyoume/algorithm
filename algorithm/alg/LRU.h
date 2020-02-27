#pragma once
#include <list>
#include <utility>
#include <unordered_map>
#include <string>

using namespace std;

class LRUCache {
public:
	LRUCache(int capacity) :_capacity(capacity) {}
	int get(int key) {
		auto it = cache.find(key);
		if (it == cache.end()) return -1;
		touch(it);
		return it->second.first;
	}
	void set(int key, int value) {
		auto it = cache.find(key);
		if (it != cache.end()) {
			touch(it);
		}else {
			if (cache.size() == _capacity)
			{
				cache.erase(used.back());
				used.pop_back();
			}
			used.push_front(key);
		}
		cache[key] = { value,used.begin() };
	}


private:

	typedef list<int> _list;
	typedef pair<int, _list::iterator> _pair;
	typedef unordered_map<int, _pair> _unmap;
	void touch(_unmap::iterator it) 
	{
		int key = it->first;
		used.erase(it->second.second);
		used.push_front(key);
		it->second.second = used.begin();
	}

	int _capacity;
	_list used;
	_unmap cache;
};
