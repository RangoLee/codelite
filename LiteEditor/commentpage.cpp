#include "editor_config.h"
#include "commentconfigdata.h"
#include "commentpage.h"

CommentPage::CommentPage( wxWindow* parent )
		:
		CommentPageBase( parent )
{
	Initialize();
}

void CommentPage::Save()
{
	CommentConfigData data;
	data.SetClassPattern( m_textCtrlClassPattern->GetValue() );
	data.SetFunctionPattern( m_textCtrlFunctionPattern->GetValue());
	data.SetAddStarOnCComment(m_checkBoxContCComment->IsChecked());
	data.SetContinueCppComment(m_checkBoxContinueCppComment->IsChecked());
	data.SetUseShtroodel(m_checkBoxUseShtroodel->IsChecked());
	data.SetUseSlash2Stars(m_checkBoxUseSlash2Starts->IsChecked());

	EditorConfigST::Get()->WriteObject(wxT("CommentConfigData"), &data);
}

void CommentPage::Initialize()
{
	CommentConfigData data;
	EditorConfigST::Get()->ReadObject(wxT("CommentConfigData"), &data);

	m_textCtrlClassPattern->SetValue( data.GetClassPattern() );
	m_textCtrlFunctionPattern->SetValue( data.GetFunctionPattern() );
	m_checkBoxContCComment->SetValue( data.GetAddStarOnCComment() );
	m_checkBoxContinueCppComment->SetValue( data.GetContinueCppComment() );
	m_checkBoxUseShtroodel->SetValue( data.GetUseShtroodel() );
	m_checkBoxUseSlash2Starts->SetValue( data.GetUseSlash2Stars() );
}
