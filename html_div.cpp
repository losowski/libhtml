#include "html_div.hpp"

using namespace std;

namespace html {

HTMLDiv::HTMLDiv(const string & name, const string & text):
	HTMLTextBase("div", name, text)
{
}

HTMLDiv::~HTMLDiv(void)
{
}

}
