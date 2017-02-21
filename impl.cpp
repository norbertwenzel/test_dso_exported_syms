#include "impl.hpp"

#include <memory>

const int IS_THIS_GLOBAL = 42;

void linux::dso::impl::impl_func()
{
    const auto ptr = std::make_unique<int>(IS_THIS_GLOBAL);
}
