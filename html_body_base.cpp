#include "html_body_base.hpp"

#include <boost/foreach.hpp>

using namespace std;

namespace html {

HTMLBodyBase::HTMLBodyBase(const string & type, const string & name) :
	m_type(type), m_name(name)
{
}

HTMLBodyBase::~HTMLBodyBase(void)
{
}

void HTMLBodyBase::create_html(void)
{
	m_html = "<" + m_type + " class=\"" + m_name + "\">\n";
	BOOST_FOREACH(HTMLBodyBasePtr bodyContent, m_html_body_content)
	{
		bodyContent->create_html();
		m_html += bodyContent->get_html();
	}
	m_html += "\n</" + m_type + ">\n";
}

void HTMLBodyBase::add_element(HTMLBodyBasePtr element)
{
		m_html_body_content.push_back(element);
}


}
