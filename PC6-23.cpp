
#include <iostream>
#include <fstream>

using namespace std;

bool isPrime(int);

int main()
{
    string file;
    int range1, range2, start, stop;

    cout << "Enter a range in which all prime numbers will be listed.\n Enter a number: ";
    cin >> range1;
    cout << "Enter another number: ";
    cin >> range2;
    if (range2 < range1)
    {
        start = range2;
        stop = range1;
    }
    else
    {
        start = range1;
        stop = range2;
    }
    cout << "Enter the name of the output file: \n";
    cin >> file;
    ofstream list;
    list.open(file);

    
    if (list)
    {
        for (int i = start; i <= stop; i++)
        {
            if (isPrime(i))
                list << i << endl;
        }
                
        list.close();
        cout << "File created, open file for the list." << endl;
    }
    else
    {
        cout << "ERROR" << endl;
    }

    return 0;
}

bool isPrime(int input)
{
    int isPrime = 0;

    for (int i = 1; i <= input; i++)
    {
        if (input % i == 0)
            isPrime++;
    }

    return isPrime == 2 ? 1 : 0;

}