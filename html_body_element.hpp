#ifndef HTML_BODY_ELEMENT_HPP
#define HTML_BODY_ELEMENT_HPP

#include "html_body_base.hpp"


using namespace std;

namespace html {

class HTMLBodyElement : public html::HTMLBodyBase
{
	public:
		HTMLBodyElement(const string & type, const string & name = "");
		~HTMLBodyElement(void);
	public:
		virtual void create_html(void) = 0; // Override
};

typedef boost::shared_ptr< HTMLBodyElement > HTMLBodyElementPtr;

}
#endif //HTML_BODY_ELEMENT_HPP
