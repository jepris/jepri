    #include <iostream>

    using namespace std;

    int main() {
        int a[3][3] = {
            {1,2,3},
            {1,2,3},
            {1,2,3}

        };
        
        for(int i =0; i<3; i++){
          for (int j=0; j<3; j++)
            {
                cout<<"element ke - ["<<i<<"] ["<<j<<"] "<<"Nilainya : ";
                cout<<a[i][j]<<endl;
            }  
        }

        return 0;
    }