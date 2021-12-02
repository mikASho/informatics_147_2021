#include <iostream>

using namespace std;

int main()
{
   int const N = 3, M = 4;
   int arr_matrix[N][M]{4, 3, 5, 1,
                        0, 7, 2, 9,
                        2, 6, 3, 8};
                        
    int const N_2 = 3, M_2 = 3;
    int arr_matrix_2[N_2][M_2]{13, 97, 56,
                               17, 23, 85,
                               22, 45, 66};
    //Первая матрица                           
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M / 2; j++){
            int swap;
            swap = arr_matrix[i][j];
            arr_matrix[i][j] = arr_matrix[i][M-j-1];
            arr_matrix[i][M-j-1] = swap;
        }
    }
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cout << arr_matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    //Вторая матрица
    for(int i = 0; i < N_2; i++){
        for(int j = 0; j < M_2 / 2; j++){
            int swap;
            swap = arr_matrix_2[i][j];
            arr_matrix_2[i][j] = arr_matrix_2[i][M_2-j-1];
            arr_matrix_2[i][M_2-j-1] = swap;
        }
    }
    
    for(int i = 0; i < N_2; i++){
        for(int j = 0; j < M_2; j++){
            cout << arr_matrix_2[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
