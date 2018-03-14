#ifndef HTML_FORM_INPUT_MENU_SELECTION_HPP
#define HTML_FORM_INPUT_MENU_SELECTION_HPP

#include "html_form_input.hpp"

#include <string>

using namespace std;

namespace html {
namespace form {

class HTMLFormInputMenuSelection:  public html::form::HTMLFormInput {
	public:
		HTMLFormInputMenuSelection(const string & label, const string & value, bool selected = false);
		~HTMLFormInputMenuSelection();
	public:
		void create_form_input(void);
		string get_form_input(void);
	private:
		bool					m_selected;
		
};
}
}
#endif //HTML_FORM_INPUT_MENU_SELECTION_HPP
