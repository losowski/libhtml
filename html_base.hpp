#ifndef HTML_BASE_HPP
#define HTML_BASE_HPP

#include <string>

using namespace std;

namespace html {

class HTMLBase
{
	public:
		HTMLBase(void);
		~HTMLBase(void);
	public:
		/* Create body must be virtual */
		virtual void create_html(void) = 0;
		string get_html(void);
	protected:
		string									m_html;

};
}
#endif //HTML_BASE_HPP
