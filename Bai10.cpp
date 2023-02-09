#include <iostream>
#include <cstring>
using namespace std;
void rFilter(char *s)
{
    char a[]="_",*pa;
    pa=a;
    if (!*s) 
    {
        return;
    }
    char* begin = s;
    char* end = begin + strlen(s) - 1;
    while (int(*end)<0||int(*end)>127)
    {
        *end=*pa;
        end--;
    }
}
int main()
{
    char *s;
    s = new char[50];
    cin >> s;
    rFilter(s);
    cout << s;
    return 0;
}