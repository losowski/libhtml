#include "html_element_base.hpp"

using namespace std;

namespace html {


HTMLElementBase::HTMLElementBase(void)
{
}

HTMLElementBase::~HTMLElementBase(void)
{
}

string HTMLElementBase::get_element(void)
{
	return m_html_element;
}


}

