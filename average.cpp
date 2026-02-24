#include <iostream>
using namespace std;
int main(int argc, char* argv[]){
    double sum = 0;
    if(argc <= 1){
        cout << "Please input numbers to find average.";
        return 1;
    }
    for(int i=1;i<argc;i++){
        sum += atof(argv[i]);
    }
    cout << "---------------------------------\n";
    cout << "Average of "<<argc-1 <<" numbers = " << sum/(argc-1) <<"\n";
    cout << "---------------------------------";
    return 0;
}
