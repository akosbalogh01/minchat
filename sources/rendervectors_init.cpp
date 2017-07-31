#include "../headers/graphics.hpp"
#include "../headers/rendervector.hpp"
#include "../headers/textbox.hpp"
//include all graphical units...

void chat::graphics::core::init_render_vectors() {
	chat::graphics::rendervector main_menu(var_rendertarget);
	std::unique_ptr <interfaces::renderable> main_menu_textbox = std::make_unique(chat::graphics::textbox);
	main_menu.add(main_menu_textbox);
	var_renderlist.push_back(main_menu);

	//init render vectors
	//create renderable objects, etc etc
	//this is going to be a big ass function i guess
}
