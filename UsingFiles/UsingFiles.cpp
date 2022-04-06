// Ryan Bieker, CS 3060 001, Chapter 8 Programming Challenges, due 4/5/2022, 
//Reads in a file of names, then sorts the names
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
    string namesArray[20];
    
    //number of words to read in
    cout << "Enter number of names to read: ";
    cin >> num;

    if (num > 20)
    {
        exit;
    }
    else
    {
        //only put names into names array if file can be opened
        if(names.is_open())
        {
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
        selectionSort(namesArray, num);
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
        string temp = words[minIndex];
        words[minIndex] = words[i];
        words[i] = temp;

    }
}