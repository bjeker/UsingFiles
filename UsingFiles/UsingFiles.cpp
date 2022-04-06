// title

#include <iostream>
#include <fstream>

using namespace std;

void selectionSort(string words[], int num);

int main()
{
    int num;
    string text;
    //name file but use assignment one
    ifstream names("names.txt");
    
    //number of words to read in
    cout << "Enter number of names to read: ";
    cin >> num;

    if (num > 20)
    {
        exit;
    }
    else
    {
        if(names.is_open())
        {
            string namesArray[20];

            for (int i = 0; i < num; i++)
            {
                names >> namesArray[i];
            }
            names.close();
        }
        else
        {
            cout << "Error opening names" << endl;
        }

        //call selection sort for file
        //selectionSort(
    }
}

void selectionSort(string words[], int num)
{
    int minIndex;
    string minValue;

    //selection sort algorithm
    for (int i = 0; i < (num - 1); i++)
    {
        minIndex = i;
        minValue = words[i];
        
        for (int j = i + 1; j < num; j++)
        {
            if (words[i] < minValue)
            {
                minValue = words[i];
                minIndex = j;
            }
        }

        //swap values

    }
}