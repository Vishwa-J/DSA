// Different operations on sparse matrix
#include <bits/stdc++.h>
using namespace std;
class array2D{
public:
    int rows;
    int cols;
    int value;
    map<pair<int, int>, int> m;

    array2D(int nrows, int ncols)
    {
        rows = nrows;
        cols = ncols;
        value = 0;
    }

    int nrowsows() { 
        return rows; 
    }

    int ncolsols() { 
        return cols; 
    }

    int getItem(int i1, int i2)
    {
        if (i1 >= 0 && i2 >= 0 && i1 < rows && i2 < cols)
        {
            int val = m[{i1, i2}];
            if (val == 0 && value != val)
            {
                return value;
            }
            else
            {
                return val;
            }
        }
    }

    void setItem(int i1, int i2, int value)
    {
        if (i1 >= 0 && i2 >= 0 && i1 < rows && i2 < cols)
        {
            m[{i1, i2}] = value;
        }
    }

    void scaleBy(int scaler)
    {
        for (auto it : m)
        {
            m[{it.first.first,it.first.second}] *= scaler;
        }
    }

    void transpose()
    {
        int transposeMat[cols][rows];
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                transposeMat[j][i] = m[{i, j}];
            }
        }
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                cout << transposeMat[i][j] << " ";
            }
            cout << endl;
        }
    }

    void add(int arr[3][3])
    {
        int addMat[rows][cols];
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                addMat[i][j] = m[{i,j}] + arr[i][j];
            }
        }
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                cout<<addMat[i][j]<<" ";
            }
            cout<<endl;
        }
        }
    

    void subtract(int arr[3][3])
    {
        int subMat[rows][cols];
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                subMat[i][j] = m[{i,j}] - arr[i][j];
            }
        }
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                cout<<subMat[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    void multiply(int arr[3][3])
    {
        int newMat[rows][sizeof(arr[0])/sizeof(arr[0][0])] = {0};
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                for (int k = 0; k < cols; k++)
                {
                    newMat[i][j]+=m[{i,k}] * arr[k][j];
                    
                }
                cout<<newMat[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    void printSpMat()
    {
        cout << "Sparse Matrix: \n";
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                int val = m[{i, j}];
                if (val == 0 && value != val)
                {
                    cout << value << " ";
                }
                else
                {
                    cout << val << " ";
                }
            }
            cout << "\n";
        }
    }
    void printIndexs()
    {
        cout << "Coordinates -> value\n"; 
        for (auto i : m)
        {
            cout << (i.first.first) << ", " << (i.first.second) << " -> " << i.second << endl;
        }
    }
};

int main()
{
    array2D obj(3, 3);
    obj.setItem(0, 0, 5);
    obj.setItem(0, 2, 7);
    obj.setItem(2, 1, 1);
    int arrtemp[3][3] = {{5,6,8},{3,2,1},{36,52,45}};
    cout<<"The transpose of the array: "<<endl;
    obj.transpose();
    cout<<endl;
    cout<<"The addition of 2 arrays: "<<endl;
    obj.add(arrtemp);  
    cout<<endl;
    cout<<"The subtraction of 2 arrays: "<<endl;
    obj.subtract(arrtemp);
    cout<<endl;
    cout<<"The Multiplication of 2 arrays: "<<endl;
    obj.multiply(arrtemp);
    return 0;
}