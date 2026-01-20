#include <bn_backdrop.h>
#include <bn_color.h>
#include <bn_core.h>
#include <bn_keypad.h>
#include <bn_sprite_ptr.h>
#include <bn_sprite_items_dot.h>
#include <bn_log.h>
#include <bn_vector.h>
int main() {
    // Your code here
    bn::core::init();
    bn::backdrop::set_color(bn::color(20, 31, 20));
    bn::vector<bn::sprite_ptr, 10> circles = {};
    bn::vector<bn::sprite_ptr, 20> circles2 = {};
    for(int y = -40; y <= 40; y += 10)
    {
        bn::sprite_ptr myCircle2 = bn::sprite_items::dot.create_sprite(-40, y);
        circles2.push_back(myCircle2);
    }
 for(int x = -40; x <= 90; x += 10)
    {
        BN_LOG("x value", x);
         bn::sprite_ptr myCircle = bn::sprite_items::dot.create_sprite(x, 40);
         circles.push_back(myCircle);

 }
   
    
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