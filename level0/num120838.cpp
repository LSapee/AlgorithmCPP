#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    string letter = ".... . .-.. .-.. ---";
    vector<string> morse = {
            ".-","-...","-.-.","-..",".","..-.",
            "--.","....","..",".---","-.-",".-..",
            "--","-.","---",".--.","--.-",".-.",
            "...","-","..-","...-",".--","-..-",
            "-.--","--.."
    };
    vector<string> apb = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"};
    vector<string> aa;
    string s = "";
    string s2 = "";
    string answer = "";
    for(int i=0; i<letter.size(); i++){
        s2 = letter[i];
        if(s2.compare(" ") != 0){
            s = s+letter[i];
        }else{
            aa.push_back(s);
            s = "";
        }
        if(i==letter.size()-1){
            aa.push_back(s);
        }
    }
    for(int i=0; i<aa.size(); i++){
        for(int j=0; j<apb.size(); j++){
            if(aa[i].compare(morse[j])==0){
                answer = answer + apb[j];
                break;
            }
        }
    }
    cout<<answer;

    return 0;
}