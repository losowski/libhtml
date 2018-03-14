#ifndef HTML_FORM_INPUT_TEXT_HPP
#define HTML_FORM_INPUT_TEXT_HPP

#include "html_form_input.hpp"

#include <string>
#include <list>

using namespace std;

namespace html {
namespace form {
class HTMLFormInputText: public html::form::HTMLFormInput {
	public:
		HTMLFormInputText(const string & field_name, const string & label, const string & value);
		~HTMLFormInputText();
	public:
		void create_form_input(void);
};
}
}
#endif //HTML_FORM_INPUT_TEXT_HPP
