#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main()
{
    // creation
    unordered_map<string, int> m; // data stores in key ->value form

    // insertion
    pair<string, int> p = make_pair("mera", 1);
    m.insert(p);

    // another way of insertion
    pair<string, int> p1("naam", 1);
    m.insert(p1);

    // another way of insertion
    m["hai"] = 1;

    // search
    cout << m["mera"] << "\n";

    m["sameer"] = 23;
    cout<<m["sameer"]<<"\n";

    // insertiong for the same key
    m["sameer"] = 28;
    
    //search
    cout<<m.at("sameer")<<"\n";

    //using at for searching the unpresented key gives error
    //using m["unpresented key"] results in the creation of the key with value 0

    //cout<<m.at("basha")<<"\n"; //gves error terminate called after throwing an instance of 'std::out_of_range'  what():  _Map_base::at

    cout<<m["basha"]<<"\n";
    cout<<m.at("basha")<<"\n";

    //size
    cout<<"size : "<<m.size()<<"\n";

    //to check presence of key
    cout<<"present or not : "<<m.count("sameer")<<"\n";
    cout<<"present or not : "<<m.count("sam")<<"\n";

    //erase
    m.erase("hai");

    cout<<"size : "<<m.size()<<"\n";

    //traversing the map
    for( auto i:m)
    {
        cout<<i.first<<" -> "<<i.second<<"\n";
    }

    //using iterator
    unordered_map<string,int> :: iterator it = m.begin();
    while(it != m.end())
    {
        cout<<it->first<<"->"<<it->second<<"\n";
        it++;
    }
  
}
