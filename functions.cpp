#include "functions.h"

//Functions
    //Receive the parameters from the file and insert then on the variables
void StartVariable(int& lines, int& columns,vector<vector<unsigned long long>>& matrix){
	cin >> lines;
	cin >> columns;

	for(int i= 0; i < lines;++i){
		vector<unsigned long long> temp;
		for(int j = 0; j < columns;++j){
			int value;
			cin >> value;
			temp.push_back(value);
		}
		matrix.push_back(temp);
	}
}

//Find column index based on the value received
int FindIndex(vector<vector<unsigned long long>>& matrix, int line, int value){
	for(int j = 0; j < matrix[line].size(); ++j){
		if(value == matrix[line][j])
		return j;
	}

	return 0;
}

void MaxPath(vector<vector<unsigned long long>>& matrix, vector<int>& path, int lines, int columns){

	int pathAux[lines][columns];
	memset(pathAux, 0,sizeof(pathAux));

	int temp, index;
	unsigned long long BiggestValue = 0;

 for (int i = 1; i < lines; ++i) {
        for (int j = 0; j < columns; ++j) {
 
            // All paths are available
            if (j > 0 && j < columns - 1){
            	temp = max(matrix[i - 1][j], max(matrix[i - 1][j - 1],matrix[i - 1][j + 1]));
                index = FindIndex(matrix,i-1,temp);

                matrix[i][j] += temp;
                pathAux[i][j] = index;
            }
 
            // Right diagonal not available
            else if (j > 0){
            	temp = max(matrix[i - 1][j],matrix[i - 1][j - 1]);
                index = FindIndex(matrix,i-1,temp);

                matrix[i][j] += temp;
                pathAux[i][j] = index;

            }
 
            // Left diagonal not available
            else if (j < columns - 1){
            	temp = max(matrix[i - 1][j],matrix[i - 1][j + 1]);
                index = FindIndex(matrix,i-1, temp);

                matrix[i][j] += temp;
                pathAux[i][j] = index;
            }
 
        }
    }

    //Run the last line of the matrix to find the biggest value.
    for (int j = 0; j < columns; ++j)
       BiggestValue = max(matrix[lines-1][j], BiggestValue);

    cout << BiggestValue << endl;

   //Find index of the column with the biggest value and insert it on the vector path
   //After that, run the matrix from bottom up to find the path.
   index = FindIndex(matrix,lines-1,BiggestValue);
    path.push_back(index);

    for(int i = lines-1; i > 0; --i){
    	temp = pathAux[i][index];
    	path.push_back(temp);
    	index = temp;
    }
}

//Reverse the vector path and print
void PrintPath(vector<int>& path){
	reverse(path.begin(),path.end());
	
	for(int i = 0; i < path.size();++i){
		printf("%i ",path[i]);
	}
}