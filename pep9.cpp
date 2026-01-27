// // //to peint right angled triangle
// #include <iostream>
// using namespace std;    
// int main() {
//     int n, m;
//     cin >> n >> m;

//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= m; j++) {
//             if (i >= j && i + j <= n + 1)
//                 cout << "*";
//             else
//                 cout << " ";
//         }
//         cout << endl;
//     }
//     cin.get();
//     cin.get();
//     return 0;
// // }
// //print distance from origin manhattan distance like matrix full matrix should be printed
// #include <iostream>  
// #include <cmath>          
// using namespace std;     
// int main(){
//     int n;    
//     cin >> n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             int distance = abs(i) + abs(j);
//             cout << distance << " ";
//         }
//         cout << endl;
//     }
//     cin.get();
//     cin.get();
//     return 0;
// }    


//print distance from a random point and print like matrix
// #include <iostream>  
// #include <cmath>     
// using namespace std;     
// int main(){  
//     int n, x, y;    
//     cin >> n >> x >> y;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){    
//             int distance = abs(i - x) + abs(j - y);
//             cout << distance << " "; 
//         }
//         cout << endl;    
//     }
//     cin.get();
//     cin.get();   
//     return 0;
// }    


// //print a circle
// #include <iostream>
// using namespace std;    
// int main() {
//     int radius;
//     cin >> radius;

//     for (int i = -radius; i <= radius; i++) {
//         for (int j = -radius; j <= radius; j++) {
//             if ((i * i + j * j) <= radius*radius)
//                 cout << "* ";
//             else
//                 cout << "  ";
//         }
//         cout << endl;
//     }
//     cin.get();
//     cin.get();
//     return 0;
// }


// //print a spiral(leet code) 54qn
// #include <iostream>
// #include <vector>           
// using namespace std;
// vector<vector<int>> generateMatrix(int n) { 
//     vector<vector<int>> matrix(n, vector<int>(n, 0));
//     int left = 0, right = n - 1, top = 0, bottom = n - 1;
//     int num = 1;

//     while (left <= right && top <= bottom) {
//         for (int i = left; i <= right; i++)
//             matrix[top][i] = num++;
//         top++;

//         for (int i = top; i <= bottom; i++)
//             matrix[i][right] = num++;
//         right--;

//         if (top <= bottom) {
//             for (int i = right; i >= left; i--)
//                 matrix[bottom][i] = num++;
//             bottom--;
//         }

//         if (left <= right) {
//             for (int i = bottom; i >= top; i--)
//                 matrix[i][left] = num++;
//             left++;
//         }
//     }

//     return matrix;
// }
// int main() {
//     int n;
//     cin >> n;
//     vector<vector<int>> result = generateMatrix(n);

//     for (const auto& row : result) {
//         for (const auto& val : row) {
//             cout << val << " ";
//         }
//         cout << endl;
//     }

//     cin.get();
//     cin.get();
//     return 0;
// }

//print pascal triangle without vector simple
// #include <iostream>
// #include <vector>       
// using namespace std;
// int main() {
//     int n;
//     n=4;
//     int pascal[n+1][n+1];
//     for (int i = 0; i <= n; i++) {
//         for (int j = 0; j <= i; j++) {
//             if (j == 0 || j == i) {
//                 pascal[i][j] = 1;
//             } else {
//                 pascal[i][j] = pascal[i - 1][j] + pascal[i - 1][j-1];
//             }
//         }
//     }
//     //printing
//     for (int i = 0; i <= n; i++) {
//         for (int k = 0; k <= n - i; k++)
//             cout << " ";
//         for (int j = 0; j <= i; j++) {
//             cout << pascal[i][j] << " ";
//         }
//         cout << endl;
//     }
//     cin.get();
//     return 0;
// }


// xor pyramid
// #include <iostream>     
// #include <cmath>          
// using namespace std;    
// int main(){    
//     int n;
//     n = 4;
//     int arr[n][n];
//     arr[0][0] = 1;
//     arr[0][1] = 2;
//     arr[0][2] = 3;
//     arr[0][3] = 4;

//     for (int i = 1; i < n; i++)
//     {
//         for (int j = 0; j <= n - i - 1; j++)
//         {
//             arr[i][j] = arr[i - 1][j] ^ arr[i - 1][j + 1];
//         }
//     }

//     for (int i = n - 1; i >= 0; i--)
//     {
//         for (int k = 0; k <= i; k++)
//             cout << " ";
//         for (int j = 0; j <= n - i - 1; j++)
//             cout << arr[i][j] << " ";
//         cout << endl;
//     }
//     cin.get();
// }

