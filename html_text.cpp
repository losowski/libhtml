#include "html_text.hpp"

using namespace std;

namespace html {

HTMLText::HTMLText(const string & text):
	HTMLTextBase("p", "", text)
{
}

HTMLText::~HTMLText(void)
{
}

}
