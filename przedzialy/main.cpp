#include <iostream>
using namespace std;

float f(float x){
    return x * x - 4;
}

int bisekcja(int a, int b, float d)
{
    if(f(a) == 0.0)
        return a;
    if(f(b) == 0.0)
        return b;
    
    int s;
    
    while(b - a > d)
    {
        s = (a + b) / 2;
        if(f(s) == 0.0f)
            return s;
        if(f(a) * f(s) < 0) b = s;
        else a = s;
    }
    return (a+b) / 2;
}

int main(){
    int a = 1, b = 5 ;
    float d = 0.01;
    
    cout<<bisekcja(a,b,d)<<endl;
}
