//Evaluating postfix exression using stack 
#include <iostream>
#define size 10
using namespace std;
class postfix
{
public:
    float stack[size];
    char postf[size];
    int top;
    postfix()
    {
        top = -1;
    }
    void push(float a)
    {
        stack[++top] = a;
    }
    float pop()
    {
        float a;
        a = stack[top];
        top--;
        return a;
    }
};

int main()
{
    float a, b, c;
    postfix p;
    int i = 0;
    cout << "ENTER THE postfix exp: ";
    cin >> p.postf;
    while (p.postf[i] != '\0')
    {
        switch (p.postf[i])
        {
        case '+':
            a = p.pop();
            b = p.pop();
            c = a + b;
            p.push(c);
            break;
        case '-':
            a = p.pop();
            b = p.pop();
            c = b - a;
            p.push(c);
            break;

        case '*':
            a = p.pop();
            b = p.pop();
            c = b * a;
            p.push(c);
            break;

        case '/':
            a = p.pop();
            b = p.pop();
            c = b / a;
            p.push(c);
            break;
        default:
            p.push(p.postf[i] - 48);
            break;
        }
        i++;
    }
    cout << "Value in the stack is " << p.stack[p.top] << endl;
    return 0;
}