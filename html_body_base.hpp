#ifndef HTML_BODY_BASE_HPP
#define HTML_BODY_BASE_HPP

#include "html_base.hpp"

#include <list>
#include <boost/shared_ptr.hpp>

using namespace std;

namespace html {


class HTMLBodyBase : public html::HTMLBase
{
	public:
		typedef boost::shared_ptr<HTMLBodyBase> HTMLBodyBasePtr;
	public:
		HTMLBodyBase(const string & type, const string & name = "");
		~HTMLBodyBase(void);
	public:
		/* Create body must be virtual */
		virtual void create_html(void) = 0;
		void add_element(HTMLBodyBasePtr element);
	protected:
		string							m_type;
		string							m_name;
		list< HTMLBodyBasePtr >			m_html_body_content;

};

typedef boost::shared_ptr< HTMLBodyBase > HTMLBodyBasePtr;


}
#endif //HTML_BODY_BASE_HPP
