#include "html_header_style.hpp"

using namespace std;

namespace html {
namespace header {

HTMLHeaderStyle::HTMLHeaderStyle(const string & url):
	HTMLHeader(url)
{
}

HTMLHeaderStyle::~HTMLHeaderStyle(void)
{
}

void HTMLHeaderStyle::create_header(void)
{
	m_html_header = "<link rel=\"stylesheet\" type=\"text/css\" href=\"" + m_resource_url + ".css\"></style>\n";
}

}
}

