#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
int main()
{
    int n; // the number of temperatures to analyse
    int min_dist=99999;
    int current_dist=0;
    int result=0;
    cin >> n; cin.ignore();
    for (int i = 0; i < n; i++) {
        int t; // a temperature expressed as an integer ranging from -273 to 5526
        cin >> t; cin.ignore();

        if(t<0) current_dist = -1*t;
        else current_dist = t;

        if(current_dist < min_dist){
            min_dist = current_dist;
            result = t;
        }
        else if(current_dist == min_dist){
            if(t > 0)
                result = t;
        }

    }

    // Write an action using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    cout << result << endl;
}

