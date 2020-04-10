#include <bits/stdc++.h> 
using namespace std; 
int ways = 0; 
void printMatrix(vector<string>& matrix, int n) 
{ 
    for (int i = 0; i < n; i++) 
        cout << matrix[i] << endl; 
} 
vector<string> checkHorizontal(int x, int y, 
                               vector<string> matrix, 
                               string currentWord) 
{ 
    int n = currentWord.length(); 
  
    for (int i = 0; i < n; i++) { 
        if (matrix[x][y + i] == '#' ||  
            matrix[x][y + i] == currentWord[i]) { 
            matrix[x][y + i] = currentWord[i]; 
        } 
        else { 
            matrix[0][0] = '@'; 
            return matrix; 
        } 
    } 
  
    return matrix; 
} 
vector<string> checkVertical(int x, int y, 
                             vector<string> matrix, 
                             string currentWord) 
{ 
    int n = currentWord.length(); 
  
    for (int i = 0; i < n; i++) { 
        if (matrix[x + i][y] == '#' ||  
            matrix[x + i][y] == currentWord[i]) { 
            matrix[x + i][y] = currentWord[i]; 
        } 
        else { 
            matrix[0][0] = '@'; 
            return matrix; 
        } 
    } 
    return matrix; 
} 
void solvePuzzle(vector<string>& words, 
                 vector<string> matrix, 
                 int index, int n) 
{ 
    if (index < words.size()) { 
        string currentWord = words[index]; 
        int maxLen = n - currentWord.length(); 
        for (int i = 0; i < n; i++) { 
            for (int j = 0; j <= maxLen; j++) { 
                vector<string> temp = checkVertical(j, i, 
                                        matrix, currentWord); 
  
                if (temp[0][0] != '@') { 
                    solvePuzzle(words, temp, index + 1, n); 
                } 
            } 
        } 
        for (int i = 0; i < n; i++) { 
            for (int j = 0; j <= maxLen; j++) { 
                vector<string> temp = checkHorizontal(i, j, 
                                      matrix, currentWord); 
  
                if (temp[0][0] != '@') { 
                    solvePuzzle(words, temp, index + 1, n); 
                } 
            } 
        } 
    } 
    else { 
        printMatrix(matrix, n); 
        cout << endl;
        ways++; 
        return; 
    } 
} 