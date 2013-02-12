/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUUserNotificationInfo : NSObject {
    id _context;
    struct __CFDictionary { } *_noteDictionary;
    struct __CFUserNotification { } *_notification;
    NSUInteger _options;
}

+ (id)infoWithDictionary:(struct __CFDictionary { }*)arg1 options:(unsigned long)arg2 context:(id)arg3;

- (void)cancelNotification;
- (id)context;
- (void)dealloc;
- (struct __CFUserNotification { }*)notification;
- (void)postNotification;

@end