#include "html_header_meta.hpp"

using namespace std;

namespace html {
namespace header {

const MetaType HTMLHeaderMeta::HTML_META_DESCRIPTION("description");
const MetaType HTMLHeaderMeta::HTML_META_KEYWORDS("keywords");
const MetaType HTMLHeaderMeta::HTML_META_AUTHOR("author");

HTMLHeaderMeta::HTMLHeaderMeta(const MetaType & tag, const string & content):
	HTMLHeader(tag),
	m_meta_content(content)
{
}

HTMLHeaderMeta::~HTMLHeaderMeta(void)
{
}

void HTMLHeaderMeta::create_header(void)
{
	m_html_header = "<meta class=\"" + m_resource_url + "\" content=\"" + m_meta_content + "\"></meta>\n";
}

}
}

