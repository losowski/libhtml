#ifndef HTML_HEADER_HPP
#define HTML_HEADER_HPP

#include <string>

using namespace std;

namespace html {
namespace header {

class HTMLHeader {
	public:
		HTMLHeader(const string & url);
		virtual ~HTMLHeader(void);
	public:
		virtual void create_header(void) =0;
		string get_header(void);
	protected:
		string								m_resource_url;
		string								m_html_header;
};
}
}
#endif //HTML_HEADER_HPP
