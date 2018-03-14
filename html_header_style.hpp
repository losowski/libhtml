#ifndef HTML_HEADER_STYLE_HPP
#define HTML_HEADER_STYLE_HPP

#include "html_header.hpp"
#include <string>

using namespace std;

namespace html {
namespace header {

class HTMLHeaderStyle: public html::header::HTMLHeader {
	public:
		HTMLHeaderStyle(const string & url);
		~HTMLHeaderStyle(void);
	public:
		void create_header(void);
};
}
}
#endif //HTML_HEADER_STYLE_HPP
