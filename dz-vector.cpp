#include <iostream>
#include <vector>
using namespace std;


// homework :)
auto FillZeroes(int width, int height) {
    vector<vector<int>> VECTOR;

    for (int i = 0; i < height; i++) {
        vector<int> v_vectore;
        for (int j = 0; j < width; j++) {
            v_vectore.push_back(0);
        }
        VECTOR.push_back(v_vectore);
    }
    return VECTOR;
}


auto FillCin(int width, int height) {

    vector<vector<int>> VECTOR;

    for (int i = 0; i < height; i++) {

        vector<int> v_vectore;

        for (int j = 0; j < width; j++) {
            int client;
            cin >> client;

            v_vectore.push_back(client);
        }
        VECTOR.push_back(v_vectore);
    }
    return VECTOR;
}


int Summa(vector<vector<int>> VECTOR, int width, int height) {

    int Summa = 0;

    for (int i = 0; i < height; i++) {

        for (int j = 0; j < width; j++) {

            Summa += VECTOR[i][j];
        }
    }
    return Summa;
}


int Minimum(vector<vector<int>> VECTOR, int width, int height) {
    int Minimum = -1;

    for (int i = 0; i < height; i++) {

        for (int j = 0; j < width; j++) {

            if (VECTOR[i][y] < Minimum)
                Minimum = VECTOR[i][y];
        }
    }
    return Minimum;
}


int Max(vector<vector<int>> VECTOR, int width, int height) {
    int Max = 1;

    for (int i = 0; i < height; i++) {
        for (int j = 0; y < width; j++) {
            if (VECTOR[i][y] > Max)
                Max = VECTOR[i][j];
        }
    }
    return Max;
}


int Average(vector<vector<int>> VECTOR, int width, int height) {

    int count = 0, sum = 0, result;

    for (int i = 0; i < height; i++) {

        for (int j = 0; j < width; j++) {
            count++;
            sum += VECTOR[i][j];
        }
    }
    result = sum / count;
    return result;
}


void Showing_Elements(vector<vector<int>> VECTOR, int width, int height) {

    for (int i = 0; i < height; i++)
    {
        for (int y = 0; y < width; y++) {
            cout << VECTOR[i][y] << " ";
        }
        cout << endl;
    }
}


int main()
{

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
