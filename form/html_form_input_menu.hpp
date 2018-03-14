#ifndef HTML_FORM_INPUT_MENU_HPP
#define HTML_FORM_INPUT_MENU_HPP

#include "html_form_input.hpp"
#include "html_form_input_menu_selection.hpp"

#include <string>
#include <list>
#include <boost/shared_ptr.hpp>

using namespace std;

namespace html {
namespace form {

typedef boost::shared_ptr<form::HTMLFormInputMenuSelection> HTMLFormInputMenuSelectionPtr;

class HTMLFormInputMenu: public html::form::HTMLFormInput {
	public:
		HTMLFormInputMenu(const string & field_name, const string & label);
		~HTMLFormInputMenu();
	public:
		void create_form_input(void);
		void add_menu_selection(const string & label, const string & value, bool selected = false);
	private:
		list< HTMLFormInputMenuSelectionPtr >			m_selections;
		int												m_size_to_display;
		bool											m_multiple_selections;
};
}
}
#endif //HTML_FORM_INPUT_MENU_HPP
