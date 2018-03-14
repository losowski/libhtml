#ifndef HTML_DIV_HPP
#define HTML_DIV_HPP

#include "html_text_base.hpp"


using namespace std;

namespace html {

class HTMLDiv : public html::HTMLTextBase
{
	public:
		HTMLDiv(const string & name, const string & text = "");
		~HTMLDiv(void);
};
}
#endif //HTML_DIV_HPP
