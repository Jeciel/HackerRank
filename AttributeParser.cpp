#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>

using namespace std;


int main() {
    int N=4, Q= 3;
    //cin>>N>>Q;
    
    vector<vector<string>> tags; 

    string texto[7] = {"<tag1 value = \"HelloWorld\">", "<tag2 name = \"Name1\">","</tag2>", "</tag1>","tag1.tag2~name","tag1~name", "tag1~value"};
    
    string linea;
    for(int i = 0; i<N; i++){
        stringstream lin(texto[i]); 
        string word;
        
        while(lin>>word){
           
            
            if(word.find('<') == 0) //tag
                cout<<"tag"<<endl;
            
            if(word.find('>') == )
                cout<<"closing tag"<<endl;
            
        }
        
        //The following  lines consist of either an opening tag with zero or more attributes or a closing tag.
        //There is a space after the tag-name, attribute-name, '=' and value.There is no space after the last value. 
        //If there are no attributes there is no space after tag name.
    }
    
    return 0;
}
