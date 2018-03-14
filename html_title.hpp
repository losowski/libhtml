#ifndef HTML_TITLE_HPP
#define HTML_TITLE_HPP

#include <string>

using namespace std;

namespace html {
class HTMLTitle {
	public:
		HTMLTitle(const string & title);
		~HTMLTitle(void);
	public:
		void create_title(void);
		string get_title(void);
		void set_title(const string & title);
	private:
		string		m_title;
		string		m_html_title;
};
}
#endif //HTML_TITLE_HPP
