#ifndef HTML_FORM_HPP
#define HTML_FORM_HPP

#include "html_body_element.hpp"
#include "form/html_form_input.hpp"
#include "form/html_form_input_menu.hpp"

#include <string>
#include <list>
#include <boost/shared_ptr.hpp>

using namespace std;

namespace html {


typedef string								HTMLFormInputMethod;
typedef boost::shared_ptr<form::HTMLFormInput> HTMLFormInputPtr;
typedef boost::shared_ptr<form::HTMLFormInputMenu> HTMLFormInputMenuPtr;


class HTMLForm : public html::HTMLBodyElement
{
	public:

	public:
		HTMLForm(const string & name, const string & action);
		~HTMLForm(void);
	public:
		static const HTMLFormInputMethod HTML_FORM_GET;
		static const HTMLFormInputMethod HTML_FORM_POST;
	public:
		void create_html(void);
		//Internal functions
		void set_method(const HTMLFormInputMethod & method);
		// Text Type Input
		HTMLFormInputPtr add_text_input(const string & field_name, const string & label, const string & value = "");
		HTMLFormInputPtr add_password_input(const string & field_name, const string & label);
		HTMLFormInputMenuPtr add_menu_input(const string & field_name, const string & label);
		// Tick Box Type input
		//void add_checkbox_input(const string & field_name, const string & label, const string & value);
		HTMLFormInputPtr add_radio_input(const string & field_name, const string & label, const string & value);
		//Button Type Input
		void set_submit_name(const string & button_name);
		//void add_button_input(const string & field_name, const string & label, const string & value);
		void add_reset_input(void);
		//void add_image_input(const string & field_name, const string & label);
		// File Locator input
		//void add_file_input(const string & field_name, const string & label, const string & value);

	private:
		string								m_submit_method;
		string								m_submit_button_name;
		bool								m_reset_button;
		string								m_html_name;
		string								m_html_action;
		list< HTMLFormInputPtr >			m_html_input;
};

//typedef
typedef boost::shared_ptr<HTMLForm> 		HTMLFormPtr;

}
#endif //HTML_FORM_HPP
