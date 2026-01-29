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
    bn::vector<bn::sprite_ptr, 35> circles = {};
    bn::vector<bn::sprite_ptr, 20> circles2 = {};
    bn::vector<bn::sprite_ptr, 20> circles3 = {};
   


    for(int y = -40; y <= 40; y += 10)
    {
        bn::sprite_ptr myCircle1 = bn::sprite_items::dot.create_sprite(-40, y);
        circles2.push_back(myCircle1);

        for (int i = 0; i < circles2.size(); i++) {
            circles2[i].set_horizontal_scale(0.5f + (i * 0.1f));
            circles2[i].set_vertical_scale(1.0f + (i * 0.1f));
        }
    }
//  for(int x = -200; x <= 10; x += 10)
//     {
//         BN_LOG("x value", x);
//          bn::sprite_ptr myCircle = bn::sprite_items::dot.create_sprite(x, 40);
//          circles.push_back(myCircle);

//  }
//  for (int y= -40; y <= 40; y += 10)
//  {
//         bn::sprite_ptr myCircle1 = bn::sprite_items::dot.create_sprite(40, y);
        
//         for (int i = 0; i < circles3.size(); i++) {
//             circles3[i].set_horizontal_scale(0.5f + (i * 0.1f));
//             circles3[i].set_vertical_scale(1.0f + (i * 0.1f));
//         }

//         circles.push_back(myCircle1);
 //}

//  circles2[0].set_scale(1.5);
//  circles[0].set_scale(1.8);
//  circles2[8].set_scale(2.0);
//  circles2[8].set_vertical_scale(1.5);


 


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