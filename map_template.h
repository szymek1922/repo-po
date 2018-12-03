#include <vector>
#include <iostream>

using namespace std;

template<typename Key, typename Value>
class map_template
{
	struct Pair{
		Key key;
		Value value;
	};
	
	vector<Pair> data;
public:
	void Add(Key key, Value value){
		data.push_back({key, value});
	}
	
	Value* Find(Key key){
		for (Pair& p : data){
			if (p.key == key)
				return &p.value;
		}
		return nullptr;
	}
	
	friend ostream& operator<<(ostream& os, map_template<Key,Value> const& m){
		for (Pair const& p : m.data){
			os << p.key << " -> " << p.value << endl;
		}
		return os;
	}
};
