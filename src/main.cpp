#include <bn_backdrop.h>
#include <bn_color.h>
#include <bn_core.h>
#include <bn_keypad.h>
#include <bn_sprite_ptr.h>
#include <bn_sprite_items_dot.h>
int main() {
    // Your code here
    bn::core::init();
    bn::backdrop::set_color(bn::color(20, 31, 20));

    bn::sprite_ptr myCircle = bn::sprite_items::dot.create_sprite(30, 10);
     bn::sprite_ptr myCircle2 = bn::sprite_items::dot.create_sprite(50, 10);
      bn::sprite_ptr myCircle3 = bn::sprite_items::dot.create_sprite(70, 10);
       bn::sprite_ptr myCircle4 = bn::sprite_items::dot.create_sprite(70, 15);
        bn::sprite_ptr myCircle5 = bn::sprite_items::dot.create_sprite(80, 25);
         bn::sprite_ptr myCircle6 = bn::sprite_items::dot.create_sprite(90, 35);
          bn::sprite_ptr myCircle7 = bn::sprite_items::dot.create_sprite(100, 45);
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