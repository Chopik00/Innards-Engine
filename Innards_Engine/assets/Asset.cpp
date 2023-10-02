#include "Asset.hpp"

namespace innards {
    Asset::Asset(const string& path) 
        :_path(path)
    {

    };

    Asset::~Asset() = default;
};