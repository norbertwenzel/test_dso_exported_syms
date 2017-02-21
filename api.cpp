#include "api.h"

#include <utility>

#include "impl.hpp"

namespace //anonymous
{

template<typename Fun, typename... Args>
void api_guard(Fun&& f, Args&&... args) noexcept
{
    try
    {
        f(std::forward<Args>(args)...);
    }
    catch(...)
    {
    }
}

} //anonymous namespace

void api_func()
{
    linux::dso::impl::impl_func();
}
