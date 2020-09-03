
/* The structure of the class is
class StackQueue{
private:   
    // These are STL stacks ( http://goo.gl/LxlRZQ )
    stack<int> s1;
    stack<int> s2;
public:
    void push(int);
    int pop();
}; */

/* The method push to push element into the queue */
void StackQueue :: push(int x)
 {
        s1.push(x);
        // Your Code
 }

/*The method pop which return the element poped out of the queue*/
int StackQueue :: pop()
{
        if(s1.size()==0)
        return -1;
        while(s1.size()!=1){
            s2.push(s1.top());
            s1.pop();
        }
        int a=s1.top();
        s1.pop();
        while(s2.size()!=0){
            s1.push(s2.top());
            s2.pop();
        }
        return a;
        // Your Code       
}