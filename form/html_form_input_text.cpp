#include "html_form_input_text.hpp"

#include <string>

using namespace std;

namespace html {
namespace form {

HTMLFormInputText::HTMLFormInputText(const string & field_name, const string & label, const string & value):
	HTMLFormInput ("text",field_name, label, value)
{
}

HTMLFormInputText::~HTMLFormInputText()
{
}

void HTMLFormInputText::create_form_input(void)
{
	create_label();
	m_html_form_input += "<input class=\"" + m_field_name + "\" type=\"" + m_type + "\" name=\"" + m_field_name + "\" value=\"" + m_value + "\"" + getAttributes() + ">\n";
	m_html_form_input += "</input>\n";
}

}
}

