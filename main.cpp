#include <iostream>
using namespace std;

void checkint(char ch){
    cout << "Enter a character: ";
    cin >> ch;

    int asc=ch;
    cout<<"Aschi value of the input:"<<asc<<endl;

    if (asc >= 48 && asc <= 57)
    {
        cout << "Number Constant" << endl;
    }
    else
    {
        cout << "Not Numeric." << endl;
    }
}

void chechoperator(string in){

int count=0;
     for (char ch : in)
    {
        if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '=')
        {
            count++;
            cout << ch << " is an operator "<< count<<endl;
        }
    }

}

void checkComment(string input)
{
    if (input[0] == '/' && input[1] == '/')
    {
        cout << "Single line comment" << endl;
    }
    else if (input[0] == '/' && input[1] == '*')
    {
        cout << "Multiple line comment" << endl;
    }
    else
    {
        cout << "Not a comment" << endl;
    }
}

bool isIdentifier(string input)
{
    if (!((input[0] >= 'A' && input[0] <= 'Z') ||
          (input[0] >= 'a' && input[0] <= 'z') ||
          input[0] == '_'))
    {
        return false;
    }

    for (int i = 1; i < input.length(); i++)
    {
        if (!((input[i] >= 'A' && input[i] <= 'Z') ||
              (input[i] >= 'a' && input[i] <= 'z') ||
              (input[i] >= '0' && input[i] <= '9') ||
              input[i] == '_'))
        {
            return false;
        }
    }

    return true;
}

int main()
{
    // check the number integer or not
    /*char ch;
    cout << "Enter a character: ";
    cin >> ch;
    checkint(ch);*/

    //check the operator is available or not
    /*string in;
    cout<<"Enter expression:";
    cin>>in;
    chechoperator(in);8*/

    //check comment line
    /*string input;
    cout << "Enter a Comment: ";
    getline(cin, input);
    checkComment(input);*/

    //check identifier
    string input;

    cout << "Enter input: ";
    cin >> input;

    if (isIdentifier(input))
    {
        cout << "It is an Identifier" << endl;
    }
    else
    {
        cout << "It is not an Identifier" << endl;
    }

    return 0;


}
