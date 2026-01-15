#include <bn_backdrop.h>
#include <bn_color.h>
#include <bn_core.h>
#include <bn_keypad.h>
int main() {
    // Your code here
    bn::core::init();
    bn::backdrop::set_color(bn::color(20, 31, 20));


 while(true) 
    {
   
        if (bn::keypad::a_held() && bn::keypad::b_held()) 
                {bn::backdrop::set_color(bn::color(20, 0, 20));} 
            
        else if (bn::keypad::b_held())
            {bn::backdrop::set_color(bn::color(21, 11, 31));}
        else if (bn::keypad::a_held())
            {bn::backdrop::set_color(bn::color(31, 21, 22));} 
        else {
        bn::backdrop::set_color(bn::color(20, 31, 20));
    }

            bn::core::update();
    }
       
    
}