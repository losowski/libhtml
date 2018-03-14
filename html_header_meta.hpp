#ifndef HTML_HEADER_META_HPP
#define HTML_HEADER_META_HPP

#include "html_header.hpp"
#include <string>

using namespace std;

namespace html {
namespace header {

typedef string			MetaType;

class HTMLHeaderMeta: public html::header::HTMLHeader {
	public:
		HTMLHeaderMeta(const MetaType & tag, const string & content);
		~HTMLHeaderMeta(void);
	public:
		static const MetaType HTML_META_DESCRIPTION;
		static const MetaType HTML_META_KEYWORDS;
		static const MetaType HTML_META_AUTHOR;
	public:
		void create_header(void);
	private:
		string				m_meta_content;
};
}
}
#endif //HTML_HEADER_META_HPP
