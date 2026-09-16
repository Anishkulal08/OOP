#include <iostream>
using namespace std;
class Matrix
{
private:
    int a[10][10];
    int rows, cols;

public:
    Matrix()
    {
        rows = 0;
        cols = 0;
    }
    Matrix(int r, int c)
    {
        rows = r;
        cols = c;
    }
    void input()
    {
        cout << "Enter elements of matrix:\n";

        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                cin >> a[i][j];
            }
        }
    }
    void display()
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                cout << a[i][j] << "\t";
            }
            cout<<endl;
        }
    }
    bool operator==(Matrix m)
    {
        return (rows == m.rows && cols == m.cols);
    }
    Matrix operator+(Matrix m)
    {
        Matrix temp(rows, cols);
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                temp.a[i][j] = a[i][j] + m.a[i][j];
            }
        }
        return temp;
    }
    Matrix operator-(Matrix m)
    {
        Matrix temp(rows, cols);
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                temp.a[i][j] = a[i][j] - m.a[i][j];
            }
        }
        return temp;
    }
};
int main()
{
    int r1, c1, r2, c2;
    cout << "Enter rows and columns of Matrix 1: ";
    cin >> r1 >> c1;
    Matrix m1(r1, c1);
    cout << "Enter elements of Matrix 1:\n";
    m1.input();
    cout << "\nEnter rows and columns of Matrix 2: ";
    cin >> r2 >> c2;
    Matrix m2(r2, c2);
    cout << "Enter elements of Matrix 2:\n";
    m2.input();
    Matrix m3, m4;
    if (m1 == m2)
    {
        m3 = m1 + m2;
        m4 = m1 - m2;

        cout << "\nMatrix Addition :\n";
        m3.display();

        cout << "\nMatrix Subtraction :\n";
        m4.display();
    }
    else
    {
        cout << "\nError: Matrices are not compatible for addition and subtraction.\n";
    }
    return 0;
}

