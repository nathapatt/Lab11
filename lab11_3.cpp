#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>

using namespace std;

int main(){
    int count = 0;
    float sum = 0,standardsum = 0,Mew;
    string textline;
    ifstream source;
    source.open("score.txt");
    while(getline(source,textline)){

        sum += atof(textline.c_str());
        standardsum += atof(textline.c_str())*atof(textline.c_str());
        count++;

    }
    
    Mew = (sum/count)*(sum/count);

    cout << "Number of data = " << count << "\n";
    cout << setprecision(3);
    cout << "Mean = " << sum/count <<"\n";
    cout << "Standard deviation = " << sqrt(standardsum/count-Mew);
}