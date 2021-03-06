/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUJSSchemaObject : NUJSModelObject

@property (nonatomic, readonly) <NUIdentifiable> *item;
@property (nonatomic, readonly) NUSchema *schema;

+ (id)JSValueWithSchema:(id)arg1 identifiableItem:(id)arg2 context:(id)arg3;

- (bool)hasProperty:(id)arg1;
- (id)initWithModel:(id)arg1 representedObject:(id)arg2 context:(id)arg3;
- (id)initWithWithSchema:(id)arg1 identifiableItem:(id)arg2 context:(id)arg3;
- (id)item;
- (id)schema;
- (id)valueForProperty:(id)arg1 context:(id)arg2 error:(out id*)arg3;

@end
