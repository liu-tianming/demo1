#include <iostream>
using namespace std;
#include<vector>

int main() {
    double l = 10;//设橡皮筋原本为10米
    //vector<double> v;//用一个动态数组记录第n天的时候蚂蚁没走长度

    double cover = 0;//蚂蚁走过的橡皮筋长度
    int n = 0;

    while (l>0)
    {
        n++;
        cover += 1;
        l = l - 1;
        cover = cover + cover / n;
        l = l + l / n;
    }
    cout << "n=" << n << endl;


    

}