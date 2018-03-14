#ifndef HTML_FORM_INPUT_PASSWORD_HPP
#define HTML_FORM_INPUT_PASSWORD_HPP

#include "html_form_input.hpp"

#include <string>
#include <list>

using namespace std;

namespace html {
namespace form {
class HTMLFormInputPassword: public html::form::HTMLFormInput {
	public:
		HTMLFormInputPassword(const string & field_name, const string & label);
		~HTMLFormInputPassword();
	public:
		void create_form_input(void);
};
}
}
#endif //HTML_FORM_INPUT_PASSWORD_HPP
