
class algorithm {
public:
	virtual void load() {};
	virtual void Display() {};
	virtual void Stats() {};
	virtual void Save() {};
	virtual void Select(int) = 0;
	virtual void Execute() = 0;
	virtual void Configure() {};
	virtual algorithm * Clone() = 0;
	algorithm(const algorithm & alg);
	algorithm() {};
	enum SortingAlgorithms {
		Bubble=0,
		Merge,
		Insertion,
	};
};