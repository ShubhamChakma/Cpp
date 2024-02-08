#include <iostream>
using namespace std;

const int sizing = 5;
int Arr[sizing];
int top=0;


int overflow(){
    if(top==sizing){
        return 1;
    }else{
        return 0;
    }
}

void push(int x){
    if(top>=sizing){
        cout << "Overflow" << endl;
        overflow();
    }else{
        Arr[top]=x;
        top++;
    }
}

int pop(){
    if(top==0){
        cout << "Underflow" << endl;
        return underflow();
    }else{
        int temp = Arr[top-1];
        Arr[top-1]=-10000;
        top--;
        return temp;
    }
}
void print() {
    if(top<0){
        cout << "Underflow" << endl;
        underflow();
    }else{
        for (int i=0;i <= top-1;i++){
            cout << Arr[i] << " ";
    }
}
}
int main() {
    push(7);
    push(8);
    push(8);
    print();

    cout << pop() << endl;
    cout << pop() << endl;
    cout << pop() << endl;

    print();
    
    return 0;

}
