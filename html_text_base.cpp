#include "html_text_base.hpp"

#include <boost/foreach.hpp>

using namespace std;

namespace html {

HTMLTextBase::HTMLTextBase(const string & type, const string & name, const string & text):
	HTMLBodyElement(type, name),
	m_text(text)
	
{
}

HTMLTextBase::~HTMLTextBase(void)
{
}

void HTMLTextBase::create_html(void)
{
	m_html = "<" + m_type;
	if (m_name.empty() != true)
	{
		m_html += " class=\"" + m_name + "\"";
	}
	m_html += ">\n";
	create_child_html();
	m_html += "\n</" + m_type + ">\n";
}

void HTMLTextBase::create_child_html(void)
{
	if (m_text.empty() == true)
	{
		BOOST_FOREACH(HTMLBodyBasePtr bodyContent, m_html_body_content)
		{
			bodyContent->create_html();
			m_html += bodyContent->get_html();
		}
	}
	else
	{
		m_html += m_text;
	}
}

}
