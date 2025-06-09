#include <memory>

#ifndef PBS_MODULE_INCLUDE

namespace PossumBuild
{
    template<typename T>
    using Scope<T> = unique_ptr<T>();

}

#endif
