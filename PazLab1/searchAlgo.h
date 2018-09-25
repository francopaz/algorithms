#ifndef searchAlgo_h
#define searchAlgo_h
#include <vector>
template<typename T>
class searchAlgo {
public:
	virtual void sort(std::vector<T>&) = 0;
	virtual void swap(T*, T*) = 0;
	virtual void print(std::vector<T>&) = 0;
};
#endif // !searchAlgo_h

