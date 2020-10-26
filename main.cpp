#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int main() {
    int N;
    cout << "Введите n элементов массива = ";
    cin >> N;
    int a[N];
    int i;
    srand(time(0));
    for (i = 0; i < N; i++)
    {
        a[i] = rand() % 41 - 20;
        cout << setw(5) <<  a[i];
    }
    cout << " \n новый массив"<< endl;
    for(i=0;i<N;i++)
    {
        if(a[i]<0)
            a[i] = a[i]*pow(i,2);
        cout <<setw(5)<< a[i];
    }
        return 0;
}
