#include <iostream>
#include <vector>
using namespace std;


// homework :)
auto FillZeroes(int column, int row) {
    vector<vector<int>> VECTOR;

    for (int i = 0; i < row; i++) {
        vector<int> v_vectore;
        for (int j = 0; j < column; j++) {
            v_vectore.push_back(0);
        }
        VECTOR.push_back(v_vectore);
    }
    return VECTOR;
}


auto FillCin(int column, int row) {
    
    vector<vector<int>> VECTOR;

    for (int i = 0; i < row; i++) {
        
        vector<int> v_vectore;
        
        for (int j = 0; j < column; j++) {
            int client;
            cin >> client;
            
            v_vectore.push_back(client);
        }
        VECTOR.push_back(v_vectore);
    }
    return VECTOR;
}


int Summa(vector<vector<int>> VECTOR, int column, int row) {
    
    int Summa = 0;

    for (int i = 0; i < row; i++) {
        
        for (int j = 0; j < column; j++) {
            
            Summa += VECTOR[i][j];
        }
    }
    return Summa;
}


int Minimum(vector<vector<int>> VECTOR, int column, int row) {
    int Minimum = -1;

    for (int i = 0; i < row; i++) {
        
        for (int j = 0; j < column; j++) {
            
            if (VECTOR[i][j] < Minimum)
                Minimum = VECTOR[i][j];
        }
    }
    return Minimum;
}


int Max(vector<vector<int>> VECTOR, int column, int row) {
    
    int Max = 1;

    for (int i = 0; i < row; i++) {
        for (int j = 0; y < column; j++) {
            
            if (VECTOR[i][y] > Max) {
                
              Max = VECTOR[i][j];
                
            }
        }
    }
    return Max;
}


int Average(vector<vector<int>> VECTOR, int column, int row) {
    
    int count = 0; 
    sum = 0;

    for (int i = 0; i < row; i++) {
        
        for (int j = 0; j < column; j++) {
            
            count++;
            sum += VECTOR[i][j];
        }
    }
    int result = sum / count;
    return result;
}


void Showing_Elements(vector<vector<int>> VECTOR, int column, int row) {
    
    for (int i = 0; i < row; i++) {
        for (int y = 0; y < column; y++) {
            cout << VECTOR[i][y] << " ";
        }
        cout << endl;
    }
}


int main() {
  
    // Task 1
    vector<vector<int>> VECTOR;
    VECTOR = FillZeroes(20, 15);

    // task 2
    vector<vector<int>> VECTOR;
    VECTOR = FillCin(3, 7);

    // task 3
    int Summa = Summa(VECTOR, 8, 2);

    // task 4
    int Minimum = Minimum(VECTOR, 1, 15);

    // task 5
    int Maximum = Maximum(VECTOR, 5, 9);

    // task 6
    int Average = Average(VECTOR, 6, 11);

}
