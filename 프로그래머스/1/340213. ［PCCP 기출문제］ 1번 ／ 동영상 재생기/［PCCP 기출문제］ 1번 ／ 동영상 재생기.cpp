#include <string>
#include <vector>

using namespace std;

int len;
int pos;
int start;
int endd;

int getinttime(string data)
{
    const char * cs = data.c_str();
    string m = "";
    m = m + cs[0];
    m = m + cs[1];
    int mm = stoi(m);

    string s = "";
    s = s + cs[3];
    s = s + cs[4];
    int ss = stoi(s);
 
    return mm * 60 + ss;
}

string getstringtime(int data)
{
    int s = data % 60;
    int m = data / 60;

    string mm = "";
    string ss = "";

    if (s / 10 == 0) ss = ss + "0";
    ss += to_string(s);

    if (m / 10 == 0) mm = mm + "0";
    mm += to_string(m);

    return mm + ':' + ss;
}

void skip()
{
    if (pos >= start && pos <= endd)
        pos = endd; 
}


void prev()
{
    if (pos - 10 <= 0)
        pos = 0;
    else
        pos -= 10;
}

void next()
{
    if (pos + 10 >= len)
        pos = len;
    else
        pos += 10;
}

string solution(string video_len, string pos, string op_start, string op_end, vector<string> commands) {
    ::len = getinttime(video_len);
    ::pos = getinttime(pos);
    ::start = getinttime(op_start);
    ::endd = getinttime(op_end);

    for (auto c : commands)
    {
        skip();
        if (c == "prev") prev();
        if (c == "next") next();
        skip();
    }

    return getstringtime(::pos);
}