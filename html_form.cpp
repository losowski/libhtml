#include "html_form.hpp"
#include "form/html_form_input_text.hpp"
#include "form/html_form_input_password.hpp"
#include "form/html_form_input_radio.hpp"
#include "form/html_form_input_menu.hpp"

#include <string>
#include <boost/foreach.hpp>

using namespace std;

namespace html {


const HTMLFormInputMethod HTMLForm::HTML_FORM_GET("GET");
const HTMLFormInputMethod HTMLForm::HTML_FORM_POST("POST");


HTMLForm::HTMLForm(const string & name, const string & action):
	HTMLBodyElement("Form", name),
	m_submit_method(HTMLForm::HTML_FORM_POST),
	m_submit_button_name("Submit"),
	m_reset_button(false),
	m_html_name(name),
	m_html_action(action)
{
}

HTMLForm::~HTMLForm(void)
{
}


void HTMLForm::create_html(void)
{
	//Call the create object function on each element - might need to be a static function
	//for_each (m_html_input.begin(), m_html_input;.end(), create_form_input);
	/* Create the form */
	m_html = "<form class=\"" + m_html_name +  "\"";
	if (!m_html_action.empty())
	{
		 m_html += " action=\"" + m_html_action + "\"";
	}
	m_html += " method=\"" +  m_submit_method +  "\">\n";
	/* Iterate over the form input objects */
	BOOST_FOREACH(HTMLFormInputPtr forminput, m_html_input)
	{
		forminput->create_form_input();
		m_html += forminput->get_form_input();
	}
	m_html += "<div class=\"submit\">";
	m_html += "<input class=\"submit\" type=\"submit\" value=\"" + m_submit_button_name + "\">";
	m_html += "</div>";
	if (m_reset_button == true)
	{
		m_html += "<input class=\"reset\" type=\"reset\">";
	}
	m_html += "</form>";
}

void HTMLForm::set_method(const HTMLFormInputMethod & method)
{
}

//Text Type Inputs
HTMLFormInputPtr HTMLForm::add_text_input(const string & field_name, const string & label, const string & value)
{
	HTMLFormInputPtr input_field ( new form::HTMLFormInputText(field_name, label, value));
	m_html_input.push_back(input_field);
	return input_field;
}

HTMLFormInputPtr HTMLForm::add_password_input(const string & field_name, const string & label)
{
	HTMLFormInputPtr input_field ( new form::HTMLFormInputPassword(field_name, label));
	m_html_input.push_back(input_field);
	return input_field;
}

HTMLFormInputMenuPtr HTMLForm::add_menu_input(const string & field_name, const string & label)
{
	HTMLFormInputMenuPtr input_field ( new form::HTMLFormInputMenu(field_name, label));
	m_html_input.push_back(input_field);
	return 	 input_field;
}

//Check Box Type Inputs
HTMLFormInputPtr HTMLForm::add_radio_input(const string & field_name, const string & label, const string & value)
{
	HTMLFormInputPtr input_field ( new form::HTMLFormInputRadio(field_name, label, value));
	m_html_input.push_back(input_field);
	return input_field;
}

//Button Type Inputs
void HTMLForm::set_submit_name(const string & button_name)
{
	m_submit_button_name = button_name;
}

void HTMLForm::add_reset_input(void)
{
	m_reset_button = true;
}

}

