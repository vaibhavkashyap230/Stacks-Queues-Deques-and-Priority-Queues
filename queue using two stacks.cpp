/* The method push to push element into the queue */
void StackQueue :: push(int x)
 {
     s1.push(x);
 }
/*The method pop which return the element poped out of the queue*/
int StackQueue :: pop()
{
    if(s1.empty() & s2.empty())
    return -1;
    
    while(!s1.empty())
    {
        s2.push(s1.top());
        s1.pop();
    }
    int tbr=s2.top();
    s2.pop();
    while(!s2.empty())
    {
        s1.push(s2.top());
        s2.pop();
    }
    return tbr;
}
