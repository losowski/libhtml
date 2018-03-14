#ifndef HTML_ELEMENT_FACTORY_HPP
#define HTML_ELEMENT_FACTORY_HPP

#include "html_element_factory_base.hpp"

#include "html_body_base.hpp"
#include "html_page.hpp"
#include "html_form.hpp"
#include "html_div.hpp"
#include "html_span.hpp"
#include "html_h1.hpp"
#include "html_img.hpp"
#include "html_link.hpp"
#include "html_text.hpp"

/*
	THIS CLASS HAS SOME DUPLICAION
	- It is designed to fill in additional formatting that the normal html_page cannot
	- This allows text formatting without infinite loop dependencies
*/
using namespace std;

namespace html {

class HTMLElementFactory : public html::HTMLElementFactoryBase
{
	public:
		HTMLElementFactory(void);
		~HTMLElementFactory(void);
	public:
		/* Page */
		static HTMLPagePtr create_page(const string & name);
		/* Form */
		static HTMLFormPtr add_form(HTMLBodyBasePtr element, const string & name, const string & action);
		/* generic Formatting */
		static HTMLBodyBasePtr add_div(HTMLBodyBasePtr element, const string & name, const string & text = "");
		static HTMLBodyBasePtr add_span(HTMLBodyBasePtr element, const string & name, const string & text = "");
		static HTMLBodyBasePtr add_h1(HTMLBodyBasePtr element, const string & name, const string & text = "");
		static HTMLBodyBasePtr add_image(HTMLBodyBasePtr element, const string & name, const string & image, const string & text = "");
		static HTMLBodyBasePtr add_link(HTMLBodyBasePtr element, const string & name, const string & link, const string & text = "");
		static HTMLBodyBasePtr add_text(HTMLBodyBasePtr element, const string & text = "");
};

}
#endif //HTML_ELEMENT_FACTORY_HPP
