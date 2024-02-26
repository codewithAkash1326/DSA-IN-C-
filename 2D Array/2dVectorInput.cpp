#include<bits/stdc++.h>
using namespace std;
int main(){
 
 int rows, cols;
    
    // Get the number of rows and columns from the user
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;
    
    // Declare a 2D vector of size rows x cols
    vector<vector<int>> vec(rows, vector<int>(cols));
    
    // Take input for the elements of the 2D vector
    cout << "Enter the elements of the 2D vector:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> vec[i][j];
        }
    }
    
    // Print the 2D vector
    cout << "The 2D vector you entered is:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }
 
return 0;
}