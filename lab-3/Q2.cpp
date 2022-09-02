// To create a sparse matrix
#include <bits/stdc++.h>
using namespace std;
class Array2D
{
public:
    int rows, cols;
    int **p;
  
    Array2D(int nrows, int ncols)
    {
        this->rows = nrows;
        this->cols = ncols;
        p = new int *[rows];
        for (int i = 0; i < nrows; i++)
        {
            p[i] = new int[ncols];
        }
        for (int i = 0; i < nrows; i++)
        {
            for (int j = 0; j < ncols; j++)
            {
                p[i][j] = 0;
            }
        }
    }

    int numRows()
    {
        return this -> rows;
    }

    int numCols()
    {
        return this -> cols;
    }    
    // To clear Sparse matrix by given value
    void clear(int value)
    {
        for (int i = 0; i < rows; i++)
        {
           for (int j = 0; j < cols; j++)
            {
                p[i][j] = value;
            }
        }
    }
    // TO get element at given index from sparse matrix
    int getitem(int i1, int i2)
    {
        return p[i1][i2];
    }
// TO set element at given index from sparse matrix
    void setitem(int i1, int i2, int value)
    {
        p[i1 - 1][i2 - 1] = value;
    }
    void display()
    {
         for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                cout << p[i][j] << " ";
            }
            cout << endl;
        }
    }  
};
int main()
{
    Array2D obj1(5, 5);
    obj1.clear(0);
    obj1.setitem(3, 4, 4);
    obj1.setitem(2, 2, 9);
    obj1.setitem(1, 4, 54);
    obj1.setitem(5, 4, 39);
    cout << endl;
    cout << "Sparse matrix of A" << endl;
    obj1.display();
    cout << endl;
    cout<< "item at entered index:"<<obj1.getitem(1, 2);
    cout << endl;
    cout << "Rows of sparse matrix: " << obj1.numRows() << endl;
    cout << "Column of sparse matrix: " << obj1.numCols() << endl;
    cout << endl;
    cout << "Cleared sparse matrix by givan value" << endl;
    obj1.clear(5);
    obj1.display();
    return 0;
}