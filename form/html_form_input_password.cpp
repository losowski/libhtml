#include "html_form_input_password.hpp"

#include <string>

using namespace std;

namespace html {
namespace form {

HTMLFormInputPassword::HTMLFormInputPassword(const string & field_name, const string & label):
	HTMLFormInput ("password",field_name, label, label)
{
}

HTMLFormInputPassword::~HTMLFormInputPassword()
{
}

void HTMLFormInputPassword::create_form_input(void)
{
	create_label();
	m_html_form_input += "<input type=\"" + m_type + "\" name=\"" + m_field_name + "\">\n";
	m_html_form_input += "</input>\n";
}

}
}

