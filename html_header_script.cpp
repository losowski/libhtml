#include "html_header_script.hpp"

using namespace std;

namespace html {
namespace header {

HTMLHeaderScript::HTMLHeaderScript(const string & url):
	HTMLHeader(url)
{
}

HTMLHeaderScript::~HTMLHeaderScript(void)
{
}

void HTMLHeaderScript::create_header(void)
{
	m_html_header = "<script src=\"" + m_resource_url + ".js\" type=\"text/javascript\"></script>\n";
}

}
}

