#include "html_span.hpp"

using namespace std;

namespace html {

HTMLSpan::HTMLSpan(const string & name, const string & text):
	HTMLTextBase("span", name, text)
{
}

HTMLSpan::~HTMLSpan(void)
{
}

}
