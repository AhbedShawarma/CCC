#include <iostream>
#include <vector>
#include <string>

using namespace std;


int main()
{
    vector<int> top;
    top.push_back(1);
    top.push_back(2);
    vector<int> bottom;
    bottom.push_back(3);
    bottom.push_back(4);
    vector<int> nTop;
    vector<int> nBottom;


    string input;
    cin >> input;



    for (int i = 0; i < input.size(); i++) {
        if (input[i] == 'H') {

            nTop.push_back(bottom.at(0));
            nTop.push_back(bottom.at(1));
            nBottom.push_back(top.at(0));
            nBottom.push_back(top.at(1));



            top.clear();
            bottom.clear();
            top.push_back(nTop.at(0));
            top.push_back(nTop.at(1));
            bottom.push_back(nBottom.at(0));
            bottom.push_back(nBottom.at(1));
            nTop.clear();
            nBottom.clear();
        }
        if (input[i] == 'V') {
            nTop.push_back(top.at(1));
            nTop.push_back(top.at(0));
            nBottom.push_back(bottom.at(1));
            nBottom.push_back(bottom.at(0));



            top.clear();
            bottom.clear();
            top.push_back(nTop.at(0));
            top.push_back(nTop.at(1));
            bottom.push_back(nBottom.at(0));
            bottom.push_back(nBottom.at(1));
            nTop.clear();
            nBottom.clear();
        }

    }
    cout << top.at(0) << " " << top.at(1) << endl;
    cout << bottom.at(0) << " " << bottom.at(1) << endl;




    return 0;
}