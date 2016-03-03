#include <nana/gui/wvl.hpp> 
int main() 
{ 
    using namespace nana; 
    form fm(API::make_center(240, 160),  appear::decorate<appear::minimize, appear::maximize>()); 
    fm.show(); 
    exec(1, [](){},1,&fm);
} 
