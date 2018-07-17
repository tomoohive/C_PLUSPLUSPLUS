#include<vector>
#include<string>

using namespace std;

class PopulationP{
private:
	vector<string> labels;
	vector<int> values;
	vector<string> split(string& str, char delim);

public:
	void read(const char *fileName);
}