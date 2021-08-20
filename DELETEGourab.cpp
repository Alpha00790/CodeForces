#include <bits/stdc++.h>
using namespace std;

int precedence(char op)
{
    if (op == '+' || op == '-')
        return 1;
    if (op == '*' || op == '/')
        return 2;
    return 0;
}

int applyOp(int a, int b, char op)
{
    switch (op)
    {
    case '+':
        return a + b;
    case '-':
        return a - b;
    case '*':
        return a * b;
    case '/':
        return a / b;
    }
    return 0;
}
int evaluate(string tokens)
{
    int i;

    stack<int> values;

    stack<char> ops;

    for (i = 0; i < tokens.length(); i++)
    {
        if (tokens[i] == ' ')
            continue;

        else if (tokens[i] == '(')
        {
            ops.push(tokens[i]);
        }

        else if (isdigit(tokens[i]))
        {
            int val = 0;

            while (i < tokens.length() &&
                   isdigit(tokens[i]))
            {
                val = (val * 10) + (tokens[i] - '0');
                i++;
            }

            values.push(val);

            i--;
        }
        else if (tokens[i] == ')')
        {
            while (!ops.empty() && ops.top() != '(')
            {
                int val2 = values.top();
                values.pop();

                int val1 = values.top();
                values.pop();

                char op = ops.top();
                ops.pop();

                values.push(applyOp(val1, val2, op));
            }

            if (!ops.empty())
                ops.pop();
        }

        else
        {
            while (!ops.empty() && precedence(ops.top()) >= precedence(tokens[i]))
            {
                int val2 = values.top();
                values.pop();

                int val1 = values.top();
                values.pop();

                char op = ops.top();
                ops.pop();

                values.push(applyOp(val1, val2, op));
            }

            ops.push(tokens[i]);
        }
    }

    while (!ops.empty())
    {
        int val2 = values.top();
        values.pop();

        int val1 = values.top();
        values.pop();

        char op = ops.top();
        ops.pop();

        values.push(applyOp(val1, val2, op));
    }

    return values.top();
}

int Priority(char ch)
{

    int priority = -999;
    if (ch == '$')
    {
        priority = 0;
    }
    else if (ch == '+' || ch == '-')
    {
        priority = 1;
    }

    else if (ch == '*' || ch == '/')
    {
        priority = 2;
    }

    return priority;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    vector<char> vec;
    vector<char> vec1;
    string s, expression;
    cin >> s;
    expression = s;
    vec1.push_back('$');
    vec.push_back('$');
    for (int i = 0; i < s.length() - 1; i++)
    {
        if (i % 2 == 1)
            vec.push_back(s[i]);
    }
    vec.push_back('$');
    int c = 0;
    vector<char>::iterator it;
    for (auto it = vec.begin(); it != vec.end(); ++it)
    {
        cout << *it;
        if (c <= s.length() - 1)
            cout << "<" << s[c] << ">";
        c += 2;
    }

    cout << endl;

    int k = 1;
    for (int it = 0; it <= vec.size() - 2; ++it)
    {
        int p1 = Priority(vec[it]);

        ++it;

        int p2 = Priority(vec[it]);

        if (p1 < p2)
        {
            vec1.push_back('<');
            vec1.push_back(vec[k]);
            k++;
        }
        else
        {
            vec1.push_back('>');
            vec1.push_back(vec[k]);
            k++;
        }
        it--;
    }
    for (auto it = vec1.begin(); it != vec1.end(); ++it)
        cout << *it;
    cout << endl;

    for (int it = 0; it < vec1.size() - 1;)
    {
        if (vec1[it] == '>')
        {

            int first = it - 1;
            int p1 = Priority(vec1[first]);
            int sec = it + 1;
            int p2 = Priority(vec1[sec]);
            if (vec1[sec] == '$')
            {
                vec1.erase(vec1.begin() + (first - 1), vec1.begin() + (first + 1));
            }
            else
                vec1.erase(vec1.begin() + (first), vec1.begin() + (first + 2));

            for (auto rn = vec1.begin(); rn != vec1.end(); ++rn)
                cout << *rn;
            it = 3;
            cout << endl;
            if (vec1.size() == 5)
                break;
        }
        else
            it++;
    }

    cout << "Value is: " << evaluate(expression) << endl;
    return 0;
}
