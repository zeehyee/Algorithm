#include <string>
#include <vector>

using namespace std;

int solution(int n, string control) {
    for(int i =0; i< control.size(); i++){
        switch(control[i]){
            case 'w':
                n++;
                break;
            case 's':
                n--;
                break;
            case 'd':
                n=n+10;
                break;
            case 'a':
                n=n-10;
                break;
        }
    }
    
    return n;
}