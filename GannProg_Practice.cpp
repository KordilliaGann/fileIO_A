// File I/O practice
#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

void uppercase();
void countword();
void capital();
int main()
{
    countword();
    capital();
    uppercase();

    return 0;
}


void uppercase()
{
    string word;
    string dog;
    int i = 0;

    ifstream fin;
    ofstream fout;

    fin.open("gba.txt");
    fout.open("uppercase.txt");
    
   
    
    while (fin >> word) 
    {
        dog = word + " ";
    
       if (dog[i] > 90)//sees if first letter is capital
        {
            dog[i] = int(dog[i]) - 32; //since it's not makes it capital
        }
       
        fout << (dog[i]) + dog.substr((i+1), dog.length()); //adds the capitalized word one word and space at a time
    }
    
    fin.close(); //SUPER IMPORTANT!!!!!
    fout.close();
}

void countword()
{
    ifstream fin;
    ofstream fout;
    fin.open("gba.txt");
    fout.open("result.txt");
        
        int one = 0;
        int two = 0;
        int three = 0;
        int four = 0;
        int five = 0;
        int six = 0;
        int seven = 0;
        int eight = 0;
        int nine = 0;
        int sum = 0;
        int ten = 0;
        int elevenplus = 0;
        int count = 0;
        string word;

    while(!fin.eof())
    {
        fin >> word;
         count++; 
        sum = sum + word.length(); 

        int lenword = word.length();

        switch(lenword)
        {
            case 1: one++;
                break;
            case 2: two++;
             break;
            case 3:three++;
             break;
            case 4:four++; 
             break;
            case 5:five++;
                 break;
            case 6: six++;
                 break;
            case 7: seven++;
             break;
            case 8: eight++;
             break;
            case 9: nine++;
             break;
            case 10: ten++;
                 break;
            default: elevenplus++;
             break;
         }
    }
        fout << one << " words of length " << 1 << endl;
        fout << two << " words of length " << 2 << endl;
        fout << three << " words of length " << 3 << endl;
        fout << four << " words of length " << 4 << endl;
        fout << five << " words of length " << 5 << endl;
        fout << six << " words of length " << 6 << endl;
        fout << seven << " words of length " << 7 << endl;
        fout << eight << " words of length " << 8 << endl;
        fout << nine << " words of length " << 9 << endl;
        fout << ten << " words of length " << 10 << endl;
        fout << elevenplus << " words of length 11 or longer" << endl;
        fout << count << " words in the document. "<< endl;
        fout << "Average characters per word: " << (sum / count) << endl;
}    

void capital()
{
    string word;
    int i = 0;

    ifstream fin;
    ofstream fout;

    fin.open("gba.txt");
    fout.open("capitalize.txt");
    
   
    
    while (fin >> word) 
    {
        word = word + " ";
        for( i =0; i < word.length(); i++)
        {
            if (word[i] > 90)//sees if first letter is capital
            {
                word[i] = int(word[i]) - 32; //since it's not makes it capital
            }
       
        fout << word[i]; //adds the capitalized word one word and space at a time
        }
    }
    
    fin.close(); //SUPER IMPORTANT!!!!!
    fout.close();
}












      










