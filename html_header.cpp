#include "html_header.hpp"

using namespace std;

namespace html {
namespace header {

HTMLHeader::HTMLHeader(const string & url): m_resource_url(url)
{
}

HTMLHeader::~HTMLHeader(void)
{
}


string HTMLHeader::get_header(void)
{
	return m_html_header;
}

}
}

