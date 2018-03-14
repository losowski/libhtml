#include "html_link.hpp"

using namespace std;

namespace html {

HTMLLink::HTMLLink(const string & name, const string & link, const string & text):
	HTMLTextBase("a", name, text),
	m_link(link)
{
}

HTMLLink::~HTMLLink(void)
{
}

void HTMLLink::create_html(void)
{
	m_html = "<" + m_type + " class=\"" + m_name + "\"  href=\"" + m_link + "\">\n";
	create_child_html();
	m_html += "</" + m_type + ">\n";
}


}
