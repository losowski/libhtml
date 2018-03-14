#ifndef HTML_SPAN_HPP
#define HTML_SPAN_HPP

#include "html_text_base.hpp"


using namespace std;

namespace html {

class HTMLSpan : public html::HTMLTextBase
{
	public:
		HTMLSpan(const string & name, const string & text = "");
		~HTMLSpan(void);
};
}
#endif //HTML_SPAN_HPP
