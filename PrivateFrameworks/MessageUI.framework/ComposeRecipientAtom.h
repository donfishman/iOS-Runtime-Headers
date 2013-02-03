/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MessageUI.framework/MessageUI
 */

@class UITextInputTraits, ComposeRecipient;

@interface ComposeRecipientAtom : AtomView {
    ComposeRecipient *_recipient;
    UITextInputTraits *_traits;
}

- (BOOL)becomeFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canResignFirstResponder;
- (void)dealloc;
- (void)deleteBackward;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 recipient:(id)arg2;
- (void)mouseUp:(struct __GSEvent { }*)arg1;
- (BOOL)resignFirstResponder;
- (void)setDelegate:(id)arg1;
- (void)setMarkedText:(id)arg1;
- (id)textInputTraits;
- (id)title;

@end