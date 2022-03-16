#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream input;
    string str;
    int count=0;
    int i;
    input.open("data.txt",ios::in);
    if(!input)
        cout<<"this file can't open"<<endl;
    else
        cout<<"File opened successfully!"<<endl;
        while(getline(input,str)){
            for(i=0;i<str.length();i++){
            if(str[i]==' ' || str[i]=='\t')
            //cout<<str<<" ";
            count++;
            }
        }
        cout<<"space: "<<count<<endl;

        input.close();
    return 0;
}
