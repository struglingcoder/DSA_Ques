#include<iostream>
using namespace std;

#define n 10000

class stack{
    //data Members
    private:
    
    int* ar;  // Dynamic array
    int top;  // top element of array 
    public:
    //making a constructor
    stack(){
        ar=new int[n];
    //allocating memory in array
         top = -1;
    }
    int Top(){
        if(top==-1){
            cout<<"stack is empty"<<endl;
            return -1 ;
        }
        return ar[top];
    }

    void push(int a){
        if(top == n-1){
            cout<<"Stack Overflow"<<endl;
            return;
        }
        top++;
        ar[top]=a;
    }

    void pop(){
        if(top==-1){
            cout<<"stack is empty"<<endl;
            return;
        }
        top--;
    }
    
    bool empty(){
        if(top==-1){
            return 1;
        }
        return 0;
    }

}; 


int main()
{
    stack st;
    st.push(10 );
    st.push(20);
    st.push(30);
    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.empty()<<endl;
    st.pop();
    cout<<st.empty()<<endl;
    st.pop();
    return 0;
}
