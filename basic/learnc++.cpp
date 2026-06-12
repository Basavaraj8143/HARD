#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int n;

    cout << "Enter number of logins: ";
    cin >> n;

    unordered_map<string, int> freq;

    string name;

    cout << "Enter employee names:\n";

    for (int i = 0; i < n; i++)
    {
        cin >> name;
        freq[name]++;
    }

    string answer = "";
    int maximum = 0;

    for (auto x : freq)
    {
        string employee = x.first;
        int count = x.second;

        if (count > maximum)
        {
            maximum = count;
            answer = employee;
        }
        else if (count == maximum)
        {
            if (employee < answer)
            {
                answer = employee;
            }
        }
    }

    cout << "Most frequent employee: ";
    cout << answer << " " << maximum;

    return 0;
}
