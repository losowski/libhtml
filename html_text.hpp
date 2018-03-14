#ifndef HTML_TEXT_HPP
#define HTML_TEXT_HPP

#include "html_text_base.hpp"


using namespace std;

namespace html {

class HTMLText : public html::HTMLTextBase
{
	public:
		HTMLText(const string & text = "");
		~HTMLText(void);
};
}
#endif //HTML_TEXT_HPP
