#include <bits/stdc++.h>
using namespace std;

class HashTable_2D
{
public:
    int row, col;
    int one, two, three, four;
    vector<vector<int>> hashtable_2d;

    HashTable_2D(int numRows, int numCols)
    {
        this->row = numRows;
        this->col = numCols;
        hashtable_2d = vector<vector<int>>(row, vector<int>(col, 0));
    }

    void Hashing_default_server()
    {
        cout << "default entries of the student's roll nos. when the servers were not crashed " << endl<<endl;
        int element = 1;
        for (int i = 1; i < 127; i++)
        {
            int j;
            for (int j = 0; j < row; j++)
            {
                int inserted_row = (element + j) % row;
                for (int k = 0; k <= col; k++)
                {

                    if (hashtable_2d[inserted_row][k] == 0)
                    {
                        hashtable_2d[inserted_row][k] = element;
                        break;
                    }
                }
                break;
            }
            if (j == row)
                cout << "Array is full! " << endl;

            element++;
        }
    };

    void crashed_server(int one, int two, int three, int four)
    {
        this->one = one;
        this->two = two;
        this->three = three;
        this->four = four;
    };

    void Hashing_new_server()
    {
        cout << "Entries after the 4 servers getting crashed " << endl<<endl;
        int element = 1;
        int index;
        for (int i = 1; i < 127; i++)
        {
            index = element % 17;

            if (index == one || index == two || index == three || index == four)
            {
                for (int j = 0; j < 13; j++)
                {
                    int rows = (element + j) % 13;

                    if (rows == one || rows == two || rows == three || rows == four)
                        continue;
                    else
                    {
                        hashtable_2d[rows].push_back(element);

                        break;
                    }
                }

              }
            element++;
        }
    };
     void Hash2D_print_Default()
    {
        for (int i = 0; i < row; i++)
        {

            cout << "Server " << i << "->  ";

            for (auto vec : hashtable_2d[i])
            {
               
            
                    if (vec == 0)
                    {
                        cout << " ";
                    }
                    else
                    {
                        cout << vec << " ";
                    }
                
            }
            cout << endl;
        }
        cout << endl;
    };

    void Hash2D_print()
    {
        for (int i = 0; i < row; i++)
        {
            cout << "Server " << i << "->  ";

            for (auto vec : hashtable_2d[i])
            {
                if (i == one || i == two || i == three || i == four)
                {
                    cout << "defected ";
                    break;
                }
                else
                {
                    if (vec == 0)
                    {
                        cout << " ";
                    }
                    else
                    {
                        cout << vec << " ";
                    }
                }
            }
            cout << endl;
        }
        cout << endl;
    };
};

int main()
{
    cout<<endl;
    HashTable_2D default_server1(17, 8);
    default_server1.Hashing_default_server();
    default_server1.Hash2D_print_Default();
    default_server1.crashed_server(5, 10, 15, 3);
    default_server1.Hashing_new_server();
    default_server1.Hash2D_print();

    return 0;
}
/*
Output:
Server 0->  17 34 51 68 85 102 119
Server 1->  1 18 35 52 69 86 103 120
Server 2->  2 19 36 53 70 87 104 121
Server 3->  3 20 37 54 71 88 105 122
Server 4->  4 21 38 55 72 89 106 123 
Server 5->  5 22 39 56 73 90 107 124
Server 6->  6 23 40 57 74 91 108 125
Server 7->  7 24 41 58 75 92 109 126 
Server 8->  8 25 42 59 76 93 110
Server 9->  9 26 43 60 77 94 111
Server 10->  10 27 44 61 78 95 112  
Server 11->  11 28 45 62 79 96 113
Server 12->  12 29 46 63 80 97 114
Server 13->  13 30 47 64 81 98 115
Server 14->  14 31 48 65 82 99 116  
Server 15->  15 32 49 66 83 100 117
Server 16->  16 33 50 67 84 101 118

Entries after the 4 servers getting crashed

Server 0->  17 34 51 68 85 102 119  39 78 117 
Server 1->  1 18 35 52 69 86 103 120 27 66 105
Server 2->  2 19 36 53 70 87 104 121 15 54
Server 3->  defected
Server 4->  4 21 38 55 72 89 106 123 3 56 95 107 
Server 5->  defected
Server 6->  6 23 40 57 74 91 108 125 5 32 44 71 83 122
Server 7->  7 24 41 58 75 92 109 126 20 124 
Server 8->  8 25 42 59 76 93 110  73 112
Server 9->  9 26 43 60 77 94 111  22 61 100
Server 10->  defected
Server 11->  11 28 45 62 79 96 113  10 37 49 88 
Server 12->  12 29 46 63 80 97 114  90
Server 13->  13 30 47 64 81 98 115
Server 14->  14 31 48 65 82 99 116
Server 15->  defected 
Server 16->  16 33 50 67 84 101 118
*/