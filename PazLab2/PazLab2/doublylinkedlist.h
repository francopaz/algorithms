#ifndef DOUBLYLINKEDLIST_H
#define DOUBLYLINKEDLIST_H
template<typename T>
class node {
public:
	T value;
	node<T> *next, *prev;
	node() {
		next = prev = nullptr;
	}
	node(T value, node *next = nullptr, node *prev = nullptr) {
		this->value = value;
		this->next = next;
		this->prev = prev;
	}
	~node() {}
	T getvalue() { return value; }
	void setvalue(T val) { value = val; }
	node<T>* getnext() { return next; }
	node<T>* getprev() { return prev; }
	void setnext(node<T>* nxt) { next = nxt; }
	void setprev(node<T>* prv) { prev = prv; }
};
template<typename T>
class doublylinkedlist
{
public:
	doublylinkedlist() {
		head = tail = new node<T>();
	}
	doublylinkedlist(const doublylinkedlist& other) {
		if (other.head == nullptr)
			head = tail = nullptr;
		else {
			head = new node<T>(other.head);
			node<T> *tempother = other.head->next;
			node<T> *temp = head;
			while (tempother != nullptr) {
				temp->next = new node<T>(tempother, nullptr, temp);
				temp = temp->next;
				tempother = tempother->next;
			}
			tail = temp;
		}
	}
	~doublylinkedlist() {
		while (head->next != nullptr) {
			node<T>* temp = head;
			head = head->next;
			delete temp;
		}
		delete head;
	}
	doublylinkedlist& operator=(const doublylinkedlist& other) {
		this->head = other.head;
		return *this;
	}

	bool isempty() {
		if (head == nullptr&&tail == nullptr)
			return true;
		else
			return false;
	}
	int getsize() {
		int count = 0;
		for (auto iter = begin(); iter != end(); iter++) {
			count++;
		}
		return count;
	}

	T removefromtail() {
		T temp = tail->value;
		if (head == tail) {
			delete tail;
			head = tail = nullptr;
		}
		else {
			tail = tail->prev;
			delete tail->next;
			tail->next = nullptr;
		}
		return temp;
	}
	T removefromhead() {
		T temp = head->value;
		if (head == tail) {
			delete head;
			head = tail = nullptr;
		}
		else {
			head = head->next;
			delete head->prev;
			head->prev = nullptr;
		}
		return temp;
	}
	T returnhead() {
		return head->value;
	}
	T returntail() {
		return tail->value;
	}
	//    T& operator[](const int i){
	//        iterator iter;
	//        return iter.nodeptr;
	//    }

	class iterator {
		friend class doublylinkedlist;
	private:
		node<T> *nodeptr;
		iterator(node<T> *newptr) :nodeptr(newptr) {}
	public:
		iterator() :nodeptr(nullptr) {}
		bool operator!=(const iterator& itr)const {
			return nodeptr != itr.nodeptr;
		}
		T& operator*()const {
			return nodeptr->next->value;
		}
		T& operator[](const int i) {
			return nodeptr;
		}

		iterator operator++(int) {
			iterator temp = *this;
			nodeptr = nodeptr->next;
			return temp;
		}
	};
	node<T>* getnewnode(T x) {
		node<T>* newnode = new node<T>;
		newnode->value = x;
		newnode->prev = nullptr;
		newnode->next = nullptr;
		return newnode;
	}
	void insertathead(T x) {
		node<T>* newnode = getnewnode(x);
		if (head == nullptr) {
			head = newnode;
			return;
		}
		head->prev = newnode;
		newnode->next = head;
		head = newnode;
	}
	void insertattail(T x) {
		node<T>* newnode = getnewnode(x);
		if (head == nullptr) {
			tail = newnode;
			return;
		}
		tail->next = newnode;
		newnode->prev = tail;
		tail = newnode;
	}
	void remove(T x) {
		if (head != nullptr) {
			if (head == tail) {
				delete head;
				head = tail = nullptr;
			}
			if (head->value == x) {
				removefromhead();
				return;
			}
			if (tail->value == x) {
				removefromtail();
				return;
			}
			node<T>* temp;
			temp = head;
			while (temp != nullptr) {
				if (temp->value != x) {
					temp = temp->next;
				}
				else {
					temp->prev->next = temp->next;
					temp->next->prev = temp->prev;
					delete temp;
					temp = nullptr;
				}
			}
		}
	}
	iterator begin()const {
		return iterator(head);
	}
	iterator end()const {
		return iterator(tail);
	}
	iterator insert(iterator pos, const T& val) {
		node<T>* newnode = new node<T>(val, pos.nodeptr->next);
		if (pos.nodeptr == tail)
			tail = newnode;
		pos.nodeptr->next = newnode;
		return pos;
	}
	iterator erase(iterator pos) {
		node<T>* toerase = pos.nodeptr->next;
		pos.nodeptr->next = pos.nodeptr->next->next;
		if (toerase == tail)
			tail = pos.nodeptr;
		delete toerase;
		return pos;
	}
private:
	node<T>* head;
	node<T>* tail;
	node<T>* curr;
};

#endif // DOUBLYLINKEDLIST_H