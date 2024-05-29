/*Writing the basic implementation of a stack using an array*/
/*Stack : Stack is a Linear dataStructure which operates in LIFO manner*/
/*OPERATIONS */
/*1.PUSH () = inserting an element in stack
  2.POP() = deleting an element from the stack 
  3.PEEK() = used to see top most element in the stack*/
/*the above stated operations will be performed with o(1) complexity*/

#include <iostream>
using namespace std;

#define MAX_SIZE 10

class ImpStack{
public:

/*the below intialized array consists of the data which is representing  a stack in this case*/
    int array[MAX_SIZE];
    signed int top;

public:
    int push(int);
    int pop();
    int peek() ; 

};

 int  ImpStack :: push (int data)
 {
    if(top >= MAX_SIZE)
    {
        cout << "stack will be overflowed if another element is inserted"<<endl;
        return 0;
    }
    array[++top] = data;
    
 }

int ImpStack :: pop()
{
    //an empty stack top will be pointing towards the  -1 hence checking if stack is empty comparing to -1
    if(top == -1)
    {
        cout <<"stack is empty"<<endl;
        return 0;
    }
    top--;
    return array[top];
}

int ImpStack :: peek()
{
    return array[top];
}

int main()
{
ImpStack st;
st.top = -1;
st.push(5);
st.push(6);
st.push(7);
st.pop();
st.peek();

/*for (int i =0 ;i <= st.top ;i++)
{
    cout << st.array[i] << endl;
}
*/

}