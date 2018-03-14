#include "html_h1.hpp"

using namespace std;

namespace html {

HTMLH1::HTMLH1(const string & name, const string & text):
	HTMLTextBase("h1", name, text)
{
}

HTMLH1::~HTMLH1(void)
{
}

}
