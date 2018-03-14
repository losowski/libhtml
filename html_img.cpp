#include "html_img.hpp"

using namespace std;

namespace html {

HTMLImg::HTMLImg(const string & name, const string & image, const string & text):
	HTMLTextBase("img", name, text),
	m_image(image)
{
}

HTMLImg::~HTMLImg(void)
{
}

void HTMLImg::create_html(void)
{
	m_html = "<" + m_type + " class=\"" + m_name + "\"  src=\"" + m_image + "\" alt=\"" + m_name + "\">\n";
	create_child_html();
	m_html += "</" + m_type + ">\n";
}

}
