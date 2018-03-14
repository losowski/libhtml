#ifndef HTML_H1_HPP
#define HTML_H1_HPP

#include "html_text_base.hpp"


using namespace std;

namespace html {

class HTMLH1 : public html::HTMLTextBase
{
	public:
		HTMLH1(const string & name, const string & text = "");
		~HTMLH1(void);
};
}
#endif //HTML_H1_HPP
