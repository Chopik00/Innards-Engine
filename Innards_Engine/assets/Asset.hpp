#pragma once 
#include <string>
namespace innards{
    class Asset {
    public:
        ~Asset();
        const string _path;
    protected:
        explicit Asset(const string &path);

    };


}
