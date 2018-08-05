#include<vector>
#include<string>

using namespace std;

class Population{
private:
	vector<string> labels;
	vector<int> values;
	vector<string> split(string& str, char delim);

public:
	void read(const char *fileName);
	vector<string> get_labels();
	vector<int> get_values();
	vector<int> operator % (Population& p);
	int operator ! ();
	std::string operator ^ (int n);
};
