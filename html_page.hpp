#ifndef HTML_PAGE_HPP
#define HTML_PAGE_HPP

#include "html_body_base.hpp"

#include "html_title.hpp"
#include "html_form.hpp"
#include "html_header_script.hpp"
#include "html_header_style.hpp"
#include "html_header_meta.hpp"

#include <string>
#include <list>
#include <boost/shared_ptr.hpp>

using namespace std;

namespace html {


typedef boost::shared_ptr<header::HTMLHeader> HTMLHeaderPtr;

class HTMLPage : public html::HTMLBodyBase
{
	public:
		HTMLPage(const string & title);
		~HTMLPage(void);
	public:
		void create_html(void);
		void clear_page(void);
		string get_page(void);
	public:
		/* Title */
		void add_title(const string & title);
		/* Header */
		void add_script(const string & url);
		void add_style(const string & url);
		/* Only allowed once */
		void add_meta_data(const header::MetaType & type, const string & content);

		/* Form */
		HTMLFormPtr add_form(const string & name, const string & action);
		/* generic Formatting */
		HTMLBodyBasePtr add_div(const string & name, const string & text = "");
		HTMLBodyBasePtr add_span(const string & name, const string & text = "");
		HTMLBodyBasePtr add_h1(const string & name, const string & text = "");
		HTMLBodyBasePtr add_image(const string & name, const string & image, const string & text = "");
		HTMLBodyBasePtr add_link(const string & name, const string & link, const string & text = "");
		HTMLBodyBasePtr add_text(const string & text = "");
	private:
		HTMLTitle								m_html_title;
		list< HTMLHeaderPtr >					m_html_header_content;
};

typedef boost::shared_ptr< HTMLPage > HTMLPagePtr;

}
#endif //HTML_PAGE_HPP
