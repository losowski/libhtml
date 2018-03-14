#ifndef HTML_LINK_HPP
#define HTML_LINK_HPP

#include "html_text_base.hpp"


using namespace std;

namespace html {

class HTMLLink : public html::HTMLTextBase
{
	public:
		HTMLLink(const string & name, const string & link, const string & text = "");
		~HTMLLink(void);
	public:
		 void create_html(void);
	private:
		string			m_link;
};
}
#endif //HTML_LINK_HPP
