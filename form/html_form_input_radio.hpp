#ifndef HTML_FORM_INPUT_RADIO_HPP
#define HTML_FORM_INPUT_RADIO_HPP

#include "html_form_input.hpp"

#include <string>
#include <list>

using namespace std;

namespace html {
namespace form {
class HTMLFormInputRadio: public html::form::HTMLFormInput {
	public:
		HTMLFormInputRadio(const string & field_name, const string & label, const string & value);
		~HTMLFormInputRadio();
	public:
		void create_form_input(void);
};
}
}
#endif //HTML_FORM_INPUT_RADIO_HPP
