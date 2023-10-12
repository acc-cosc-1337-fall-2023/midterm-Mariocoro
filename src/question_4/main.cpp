#include <iostream>

using namespace std;
string transcribe_dna_into_rna_ma(string & str){
    
    str[2]=str[8]=str[9]=str[13]=str[17]=str[21]=str[22]='U';
    
    return str;
    
}
int main(){
    string str = "GATGGAACTTGACTACGTAAATT";
    cout<<transcribe_dna_into_rna_ma(str); 
    return 0;
}