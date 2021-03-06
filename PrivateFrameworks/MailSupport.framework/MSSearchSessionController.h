/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
 */

@interface MSSearchSessionController : NSObject {
    <MSSearchSessionControllerDataSource> * _dataSource;
    int  _emailProvider;
    NSMutableArray * _mutableSessionEngagements;
    unsigned long long  _numberOfMessagesLeftToIndex;
    unsigned long long  _percentOfMessagesIndexed;
}

@property (nonatomic, readonly) <MSSearchSessionControllerDataSource> *dataSource;
@property (nonatomic, readonly) int emailProvider;
@property (nonatomic, readonly) NSMutableArray *mutableSessionEngagements;
@property (nonatomic, readonly) unsigned long long numberOfMessagesLeftToIndex;
@property (nonatomic, readonly) unsigned long long percentOfMessagesIndexed;
@property (nonatomic, readonly, copy) NSArray *sessionEngagements;

- (void).cxx_destruct;
- (void)_addNewEngagementWithAWDAtoms:(id)arg1 searchScope:(bool)arg2 suggestionsEngagements:(id)arg3;
- (void)_addToLatestEngagementWithUserEngagement:(id)arg1;
- (void)_recordEngagement:(int)arg1 forMessage:(id)arg2 isTopHit:(bool)arg3 messageListIndex:(long long)arg4 spotlightListIndex:(long long)arg5;
- (void)_recordUserDidNotSelectAnyMessage;
- (void)addNewEngagementWithAtoms:(id)arg1 searchScope:(bool)arg2 suggestionsEngagement:(id)arg3;
- (id)dataSource;
- (int)emailProvider;
- (void)endSession;
- (id)init;
- (id)initWithDataSource:(id)arg1;
- (id)mutableSessionEngagements;
- (unsigned long long)numberOfMessagesLeftToIndex;
- (unsigned long long)percentOfMessagesIndexed;
- (void)recordUserDidOrbMessage:(id)arg1;
- (void)recordUserDidOrbMessage:(id)arg1 isTopHit:(bool)arg2 messageListIndex:(long long)arg3 spotlightListIndex:(long long)arg4;
- (void)recordUserDidRightClickMessage:(id)arg1;
- (void)recordUserDidRightClickMessage:(id)arg1 isTopHit:(bool)arg2 messageListIndex:(long long)arg3 spotlightListIndex:(long long)arg4;
- (void)recordUserDidSelectMessage:(id)arg1;
- (void)recordUserDidSelectMessage:(id)arg1 isTopHit:(bool)arg2 messageListIndex:(long long)arg3 spotlightListIndex:(long long)arg4;
- (void)recordUserDidSwipeMessage:(id)arg1;
- (void)recordUserDidSwipeMessage:(id)arg1 isTopHit:(bool)arg2 messageListIndex:(long long)arg3 spotlightListIndex:(long long)arg4;
- (id)sessionEngagements;
- (void)updateLastEngagementSearchResultCount:(unsigned long long)arg1;

@end
