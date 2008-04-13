#ifndef __commentpage__
#define __commentpage__

/**
@file
Subclass of CommentPageBase, which is generated by wxFormBuilder.
*/

#include "commentpagebase.h"

/** Implementing CommentPageBase */
class CommentPage : public CommentPageBase
{
protected:
	// Handlers for CommentPageBase events.
	void Initialize();
	
public:
	/** Constructor */
	CommentPage( wxWindow* parent );
	
	void Save();
};

#endif // __commentpage__
