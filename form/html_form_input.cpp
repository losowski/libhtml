#include "html_form_input.hpp"

#include <boost/foreach.hpp>

using namespace std;

namespace html {
namespace form {

const string HTMLFormInput::ATTRIBUTE_HIDDEN ("hidden");
const string HTMLFormInput::ATTRIBUTE_DISABLED ("disabled");

HTMLFormInput::HTMLFormInput()
{
}

HTMLFormInput::HTMLFormInput(const string type, const string & field_name, const string & label, const string & value):
	m_type(type),
	m_field_name(field_name),
	m_label(label),
	m_value(value)
{
}

HTMLFormInput::~HTMLFormInput()
{
}

//Create Label
void HTMLFormInput::create_label(void)
{
	tattributeit hidden = m_attribute_set.find(ATTRIBUTE_HIDDEN);
	if (hidden == m_attribute_set.end())
	{
		m_html_form_input = "<div class=\"" + m_field_name+ "\">" + m_label + "</div>\n";
	}
}

// Set Attributes
void HTMLFormInput::setHidden(void)
{
	m_attribute_set.insert(ATTRIBUTE_HIDDEN);
}

void HTMLFormInput::setDisabled(void)
{
	m_attribute_set.insert(ATTRIBUTE_DISABLED);
}

// Get Attributes
string HTMLFormInput::getAttributes(void)
{
	BOOST_FOREACH(string attr, m_attribute_set)
	{
		m_input_attribute += " " + attr;
	}

	return m_input_attribute;
}

//Get the form input
string HTMLFormInput::get_form_input(void)
{
	return m_html_form_input;
}




}
}

