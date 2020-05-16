#include <iostream>
#include <vector>
#include <string>
#include <thread>

using namespace std;

int main()
{
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};
    
    string x;

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;

    cin >> x;
    #include <thread>

    //may return 0 when not able to detect
    const auto processor_count = thread::hardware_concurrency();

    cout << "Processor Count = " << processor_count;
    cin >> x;
}