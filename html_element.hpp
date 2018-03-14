#ifndef HTML_ELEMENT_HPP
#define HTML_ELEMENT_HPP

#include "html_element_base.hpp"

#include <list>
#include <boost/shared_ptr.hpp>

using namespace std;

namespace html {

typedef boost::shared_ptr<HTMLElementBase> HTMLElementBasePtr;

class HTMLElement : public html::HTMLElementBase
{
	public:
		HTMLElement(void);
		~HTMLElement(void);
	protected:
		//helper functions - Calls create_element on the sub elements
		void create_sub_elements(void);
	protected:
		list< HTMLElementBasePtr >					m_html_element_list;
};

}
#endif //HTML_ELEMENT_HPP
