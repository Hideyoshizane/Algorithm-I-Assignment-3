#include "functions.h"

using namespace std;

int main() {

	int Lines;
	int Columns;

	vector<vector<unsigned long long>> Matrix;
	vector<int> Path;
	
	StartVariable(Lines,Columns,Matrix);
	MaxPath(Matrix, Path, Lines, Columns);

	PrintPath(Path);

	return 0;
}

