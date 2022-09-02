// Game of life
#include <bits/stdc++.h>
using namespace std;

class LifeGrid{
    public:
    int rows;
    int cols;
    int value;
    map<pair<int,int>,int> m;

    LifeGrid(int nrows, int ncols)
    {
        rows = nrows;
        cols = ncols;
    }

    int numrows() { 
        return rows; 
    }

    int numcols() { 
        return cols; 
    }

    void configure(vector<pair<int,int>> v){
        for (int i = 0; i < v.size(); i++)
        {
            m[v[i]]=1;
        }        
    }

    void clearCell(int row, int col){
        if(row>=0 && col>=0 && row<rows && col<cols){
            m[{row,col}] = 0;
        }
    }

    void setCell(int row, int col){
        if(row>=0 && col>=0 && row<rows && col<cols){
            m[{row,col}] = 1;
        }
    }
    
    bool isLiveCell(int row, int col){
        if(row>=0 && col>=0 && row<rows && col<cols){
            if(m[{row,col}]){
                return true;
            }else{
                return false;
            }
        }
    }

    int numLiveNeighbors(int i, int j){
        if(i>=0 && j>=0 && i<rows && j<cols){
            int ct = 0;
            vector<pair<int,int>> n{{i+1, j}, {i+1,j+1}, {i+1, j-1},{i-1, j}, {i-1, j+1}, {i-1,j-1},{i,j+1},{i,j-1}};
            for(auto it : n){
                if(isLiveCell(it.first, it.second)) ct++; 
            }
            return ct;
        }      
    }

};

int main(){
    LifeGrid obj(5,5);
    obj.configure({{1,1},{3,2},{4,5}});
    obj.setCell(3,3);
    if(obj.isLiveCell(1,3)){
        cout<<"1,3 is alive."<<endl;
    }else{
        cout<<"1,3 is dead."<<endl;
    }
    cout<<"The number of alive neighbors of 3,4 is: "<<obj.numLiveNeighbors(3,4)<<endl;

    return 0;
}