#ifndef HTML_IMG_HPP
#define HTML_IMG_HPP

#include "html_text_base.hpp"


using namespace std;

namespace html {

class HTMLImg : public html::HTMLTextBase
{
	public:
		HTMLImg(const string & name, const string & image, const string & text = "");
		~HTMLImg(void);
	public:
		 void create_html(void);
	private:
		string			m_image;
};
}
#endif //HTML_IMG_HPP
