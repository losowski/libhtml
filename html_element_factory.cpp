#include "html_element_factory.hpp"


using namespace std;

namespace html {

HTMLElementFactory::HTMLElementFactory(void)
{
}

HTMLElementFactory::~HTMLElementFactory(void)
{
}
/* Page */
HTMLPagePtr HTMLElementFactory::create_page(const string & name)
{
	HTMLPagePtr page (new HTMLPage(name));
	return page;
}

/* Form */
HTMLFormPtr HTMLElementFactory::add_form(HTMLBodyBasePtr element, const string & name, const string & action)
{
	HTMLFormPtr content_item (new HTMLForm(name, action));
	element->add_element(content_item);
	return content_item;
}

/* generic Formatting */
HTMLBodyBasePtr HTMLElementFactory::add_div(HTMLBodyBasePtr element, const string & name, const string & text)
{
	HTMLBodyElementPtr content_item (new HTMLDiv(name, text));
	element->add_element(content_item);
	return content_item;
}

HTMLBodyBasePtr HTMLElementFactory::add_span(HTMLBodyBasePtr element, const string & name, const string & text)
{
	HTMLBodyElementPtr content_item (new HTMLSpan(name, text));
	element->add_element(content_item);
	return content_item;
}

HTMLBodyBasePtr HTMLElementFactory::add_h1(HTMLBodyBasePtr element, const string & name, const string & text)
{
	HTMLBodyElementPtr content_item (new HTMLH1(name, text));
	element->add_element(content_item);
	return content_item;
}

HTMLBodyBasePtr HTMLElementFactory::add_image(HTMLBodyBasePtr element, const string & name, const string & image, const string & text)
{
	HTMLBodyElementPtr content_item (new HTMLImg(name, image, text));
	element->add_element(content_item);
	return content_item;
}

HTMLBodyBasePtr HTMLElementFactory::add_link(HTMLBodyBasePtr element, const string & name, const string & link, const string & text)
{
	HTMLBodyElementPtr content_item (new HTMLLink(name, link, text));
	element->add_element(content_item);
	return content_item;
}

HTMLBodyBasePtr HTMLElementFactory::add_text(HTMLBodyBasePtr element, const string & text)
{
	HTMLBodyElementPtr content_item (new HTMLText(text));
	element->add_element(content_item);
	return content_item;
}


}
