#include <iostream>
#include <fstream>
#include <bits/stdc++.h>

using namespace std;

void read(){
    vector<string> content {};

    ifstream fin;
    string line;
    
    fin.open("input.txt");
    
    while (fin) {
        
        getline(fin, line);
        content.push_back(line);
    }
    
    for(int i=0; i<content.size()-1; i++)
    {
        cout<<content[i]<<endl;
    }
    fin.close();
}

int main()
{
    cout<<"After giving read() call, the content is read from input.txt file"<<endl<<endl;
    read();
    cout<<"\n\n\n";
}