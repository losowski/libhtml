#include "html_element.hpp"

using namespace std;

namespace html {


HTMLElement::HTMLElement(void)
{
}

HTMLElement::~HTMLElement(void)
{
}


void HTMLElement::create_sub_elements(void)
{
	/* Iterate over the form input objects */
	BOOST_FOREACH(HTMLElementInputPtr forminput, m_html_element_list)
	{
		forminput->create_form_input();
		m_html_element += forminput->get_form_input();
	}
}

}

