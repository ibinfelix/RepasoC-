#include<string>
int contarPalabras2(const std::string& s){
    int c=1, lo_pos=0, size=s.size();
    std::string sub = s;
    while(lo_pos<size){
        if(sub.find(' ')==std::string::npos) break;
        else {lo_pos += sub.find(' ')+1; c++;};
        sub = s.substr(lo_pos,size-lo_pos);
    }
    return c;
}

int contarPalabras(const std::string& s){
    int n=0; bool dentro=false;
    for(char c : s){
        if(c==' ') dentro=false;
        else if(!dentro) {dentro=true; n++;}
    }
    return n;
}

std::string invertir(const std::string& s){
    std::string inverted = "";
    for(int i = s.size(); i>0; i--) inverted += s[i-1];
    return inverted;
}

int main(){
    const std::string s = "uno dos tres cuatro cinco seis siete ocho nueve diez once doce trece";
    contarPalabras(s);
}