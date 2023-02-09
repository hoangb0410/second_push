#include <iostream>
#include <cstring>
using namespace std;
void reverse(char* str) 
{
    if (!*str) 
    {
        return;
    }
    char* begin = str;
    char* end = begin + strlen(str) - 1;
    while (begin < end) 
    {
        char temp = *begin;
        *begin = *end;
        *end = temp;
        begin++;
        end--;
    }
}
int main()
{
    char *s;
    s = new char[50];
    cin >> s;
    reverse(s);
    cout << s;
    return 0;
}