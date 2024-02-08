#include <iostream>
using namespace std;

const int sizing = 5;
int A[sizing];
int top=0;


int underflow(){
    if (top==0){
        return 1;
    }
    else{
        return 0;
    }
}

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
        A[top]=x;
        top++;
    }
}

int pop(){
    if(top==0){
        cout << "Underflow" << endl;
        return underflow();
    }else{
        int temp = A[top-1];
        A[top-1]=-10000;
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
            cout << A[i] << " ";
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
