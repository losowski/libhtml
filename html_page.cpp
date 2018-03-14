#include "html_page.hpp"

#include <iostream>
#include <string>
#include <boost/foreach.hpp>

#include "html_div.hpp"
#include "html_span.hpp"
#include "html_h1.hpp"
#include "html_img.hpp"
#include "html_link.hpp"
#include "html_text.hpp"



using namespace std;

namespace html {

HTMLPage::HTMLPage(const string & title):
	HTMLBodyBase("body"),
	m_html_title(title)
{
}

HTMLPage::~HTMLPage(void)
{
}

void HTMLPage::create_html(void)
{
	/* Run the creation algorithms */
	m_html_title.create_title();
	/* Generate the actual page */
	m_html.clear();
	m_html += "Content-type: text/html\n\n";
	m_html += "<html>\n";
	/* Header */
	m_html += "<head>\n";
	/* title */
	m_html += m_html_title.get_title();
	/* script */
	/* style */
	/* meta */
	BOOST_FOREACH(HTMLHeaderPtr headerinput, m_html_header_content)
	{
		headerinput->create_header();
		m_html += headerinput->get_header();
	}
	m_html += "</head>\n";
	/* body */
	m_html += "<body>\n";
	/* ALL body components are to be made using the same base class:
	 -	div
	 -	form
	 -	text
	 -	hyperlink
	 -	image 
	*/
	BOOST_FOREACH(HTMLBodyBasePtr htmlcontent, m_html_body_content)
	{
		htmlcontent->create_html();
		m_html += htmlcontent->get_html();
	}
	m_html += "</body>\n";
	/* End of HTML */
	m_html += "</html>\n";
}

string HTMLPage::get_page(void)
{
	return m_html;
}

void HTMLPage::clear_page(void)
{
	std::cerr << "Clearing page!" << std::endl;
	//Destroy header objects
	m_html_header_content.clear();
	//Destroy body objects
	m_html_body_content.clear();
	//Clear the buffer
	m_html.clear();
	std::cerr << "Page cleared!" << std::endl;
}



void HTMLPage::add_title(const string & title)
{
	m_html_title.set_title(title);
}

void HTMLPage::add_script(const string & url)
{
	HTMLHeaderPtr script ( new header::HTMLHeaderScript(url));
	m_html_header_content.push_back(script);
}

void HTMLPage::add_style(const string & url)
{
	HTMLHeaderPtr style ( new header::HTMLHeaderStyle(url));
	m_html_header_content.push_back(style);
}

/* Only allowed once */
void HTMLPage::add_meta_data(const header::MetaType & type, const string & content)
{
	HTMLHeaderPtr meta ( new header::HTMLHeaderMeta(type, content));
	m_html_header_content.push_back(meta);
}

/* Form */
HTMLFormPtr HTMLPage::add_form(const string & name, const string & action)
{
	HTMLFormPtr content_item (new HTMLForm(name, action));
	this->add_element(content_item);
	return content_item;
}

/* generic Formatting */
HTMLBodyBasePtr HTMLPage::add_div(const string & name, const string & text)
{
	HTMLBodyElementPtr content_item (new HTMLDiv(name, text));
	this->add_element(content_item);
	return content_item;
}

HTMLBodyBasePtr HTMLPage::add_span(const string & name, const string & text)
{
	HTMLBodyElementPtr content_item (new HTMLSpan(name, text));
	this->add_element(content_item);
	return content_item;
}

HTMLBodyBasePtr HTMLPage::add_h1(const string & name, const string & text)
{
	HTMLBodyElementPtr content_item (new HTMLH1(name, text));
	this->add_element(content_item);
	return content_item;
}

HTMLBodyBasePtr HTMLPage::add_image(const string & name, const string & image, const string & text)
{
	HTMLBodyElementPtr content_item (new HTMLImg(name, image, text));
	this->add_element(content_item);
	return content_item;
}

HTMLBodyBasePtr HTMLPage::add_link(const string & name, const string & link, const string & text)
{
	HTMLBodyElementPtr content_item (new HTMLLink(name, link, text));
	this->add_element(content_item);
	return content_item;
}

HTMLBodyBasePtr HTMLPage::add_text(const string & text)
{
	HTMLBodyElementPtr content_item (new HTMLText(text));
	this->add_element(content_item);
	return content_item;
}

}
