#include <iostream>
using namespace std;

void simple_num(int);

int main()
{
    setlocale(LC_ALL, "");
    int n;
    
    cout << "Введите заключающее число диапозона: ";
    cin >> n;
    
    
    
    simple_num(n);
    
    return 0;
}

void simple_num(int n){
    
    const int N = n+1;
    int arr_smpl_nmbrs[N]{};
    
    for(int i = 1; i <= N; i++){
        arr_smpl_nmbrs[i] = i;
        cout << arr_smpl_nmbrs[i] << endl;
    }
    
    //int new_arr_smpl_nmbrs[N]{};
    
    for(int i = 1; i <= N; i++){
        
        for(int j = i-1; j <= N; j++){
            if(arr_smpl_nmbrs[j] == 0){
                continue;
            }
                else if(arr_smpl_nmbrs[j] % arr_smpl_nmbrs[i] == 0){
                    arr_smpl_nmbrs[j] = 0;
                }
        }
    }
    for(int i = 0; i < N; i++){
        cout << arr_smpl_nmbrs[i] << endl;
    }
}