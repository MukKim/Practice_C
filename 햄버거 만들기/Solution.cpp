#include <string>
#include <vector>

using namespace std;

int solution(vector<int> ingredient)
{
    int answer=0;

    vector<int> v={0};
    for(int e : ingredient)
    {
        if((v.back()==0 && e==1) || (v.back()==1 && e==1) || (v.back()==2 && e==1)) v.push_back(1);
        else if((v.back()==1 && e==2) || (v.back()==2 && e==3)) v.back()++;
        else if((v.back()==1 && e==3) || (v.back()==2 && e==2) || (v.back()==3 && e==2) || v.back()==3 && e==3) { v.clear(); v.push_back(0); }
        else if(v.back()==3 && e==1) { answer++; v.pop_back(); }
    }

    return answer;
}
