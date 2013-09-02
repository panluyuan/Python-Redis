#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<string> s;
    s.insert("asdscd");
    s.insert("qqwss");
    cout<<"set 的 size 值为 ："<<s.size()<<endl;
 //   cout<<"set 的 maxsize的值为 ："<<s.max_size()<<endl;
    cout<<"set 中的第一个元素是 ："<<*s.begin()<<endl;
 //   cout<<"set 中的最后一个元素是:"<<*s.end()<<endl;
    s.clear();
    if(s.empty())
    {
        cout<<"set 为空 ！！！"<<endl;
    }
    cout<<"set 的 size 值为 ："<<s.size()<<endl;
 //   cout<<"set 的 maxsize的值为 ："<<s.max_size()<<endl;
    return 0;
}


/*
begin()     　　 ,返回set容器的第一个元素

end() 　　　　 ,返回set容器的最后一个元素

clear()   　　     ,删除set容器中的所有的元素

empty() 　　　,判断set容器是否为空

max_size() 　 ,返回set容器可能包含的元素最大个数

size() 　　　　 ,返回当前set容器中的元素个数

rbegin　　　　 ,返回的值和end()相同

rend()　　　　 ,返回的值和rbegin()相同
*/
