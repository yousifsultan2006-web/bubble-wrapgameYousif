#include <bn_backdrop.h>
#include <bn_color.h>
#include <bn_core.h>
int main() {
    // Your code here
    bn::core::init();
    bn::backdrop::set_color(bn::color(10, 31, 10));
 while(true) {
    bn::core::update();
 }
}