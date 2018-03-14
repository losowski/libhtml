#ifndef HTML_FORM_INPUT_HPP
#define HTML_FORM_INPUT_HPP

#include <string>
#include <set>

using namespace std;

namespace html {
namespace form {

typedef set < string > tattribute;
typedef set < string >::iterator tattributeit;

class HTMLFormInput {
	private:
		static const string ATTRIBUTE_HIDDEN;
		static const string ATTRIBUTE_DISABLED;
	public:
		/* Constuctor must be virtual if a function is virtual */
		HTMLFormInput();
		HTMLFormInput(const string type, const string & field_name, const string & label, const string & value);
		virtual ~HTMLFormInput();
	public:
		virtual void create_form_input(void) =0;
		//Create Label
		void create_label(void);
		// Set Attributes
		void setHidden(void);
		void setDisabled(void);
		// Get Attributes
		string getAttributes(void);
		//Get the form input
		string get_form_input(void);
	public:
		const string			m_type;
	protected:
		string					m_field_name;
		string					m_label;
		string					m_value;
		string					m_html_form_input;
		tattribute				m_attribute_set;
		string					m_input_attribute;
};
}
}
#endif //HTML_FORM_INPUT_HPP
