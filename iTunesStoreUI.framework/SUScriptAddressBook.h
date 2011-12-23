/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSArray, NSString, NSNumber, SUScriptABRecord;

@interface SUScriptAddressBook : SUScriptObject  {
    BOOL _databaseAccess;
    void *_observedAddressBook;
}

@property(readonly) int defaultSortOrder;
@property(readonly) SUScriptABRecord * defaultSource;
@property(readonly) NSArray * groups;
@property(readonly) NSNumber * numberOfGroupsInAddressBook;
@property(readonly) NSNumber * numberOfPeopleInAddressBook;
@property(readonly) NSArray * people;
@property(readonly) NSArray * sources;
@property(readonly) NSString * addressKeyCity;
@property(readonly) NSString * addressKeyCountry;
@property(readonly) NSString * addressKeyCountryCode;
@property(readonly) NSString * addressKeyState;
@property(readonly) NSString * addressKeyStreet;
@property(readonly) NSString * addressKeyZipCode;
@property(readonly) int imageFormatOriginal;
@property(readonly) int imageFormatThumbnail;
@property(readonly) NSString * instantMessageKeyService;
@property(readonly) NSString * instantMessageKeyUsername;
@property(readonly) NSString * instantMessageServiceAIM;
@property(readonly) NSString * instantMessageServiceICQ;
@property(readonly) NSString * instantMessageServiceJabber;
@property(readonly) NSString * instantMessageServiceMSN;
@property(readonly) NSString * instantMessageServiceYahoo;
@property(readonly) NSString * kindOrganization;
@property(readonly) NSString * kindPerson;
@property(readonly) NSString * labelAssistant;
@property(readonly) NSString * labelBrother;
@property(readonly) NSString * labelChild;
@property(readonly) NSString * labelFather;
@property(readonly) NSString * labelFriend;
@property(readonly) NSString * labelHome;
@property(readonly) NSString * labelHomePage;
@property(readonly) NSString * labelManager;
@property(readonly) NSString * labelMother;
@property(readonly) NSString * labelParent;
@property(readonly) NSString * labelPhoneHomeFAX;
@property(readonly) NSString * labelPhoneIPhone;
@property(readonly) NSString * labelPhoneMain;
@property(readonly) NSString * labelPhoneMobile;
@property(readonly) NSString * labelPhonePager;
@property(readonly) NSString * labelPhoneWorkFAX;
@property(readonly) NSString * labelOther;
@property(readonly) NSString * labelPartner;
@property(readonly) NSString * labelSister;
@property(readonly) NSString * labelSpouse;
@property(readonly) NSString * labelWork;
@property(readonly) int propertyAddress;
@property(readonly) int propertyBirthday;
@property(readonly) int propertyDepartment;
@property(readonly) int propertyEmail;
@property(readonly) int propertyFirstName;
@property(readonly) int propertyInstantMessage;
@property(readonly) int propertyJobTitle;
@property(readonly) int propertyKind;
@property(readonly) int propertyLastName;
@property(readonly) int propertyMiddleName;
@property(readonly) int propertyNickname;
@property(readonly) int propertyOrganization;
@property(readonly) int propertyPrefix;
@property(readonly) int propertyPhoneNumber;
@property(readonly) int propertyRelatedNames;
@property(readonly) int propertySuffix;
@property(readonly) int propertyURL;
@property(readonly) int propertyGroupName;
@property(readonly) int propertySourceName;
@property(readonly) int propertySourceType;
@property(readonly) unsigned int propertyTypeDateTime;
@property(readonly) unsigned int propertyTypeDictionary;
@property(readonly) unsigned int propertyTypeInteger;
@property(readonly) unsigned int propertyTypeInvalid;
@property(readonly) unsigned int propertyTypeMultiDateTime;
@property(readonly) unsigned int propertyTypeMultiDictionary;
@property(readonly) unsigned int propertyTypeMultiInteger;
@property(readonly) unsigned int propertyTypeMultiReal;
@property(readonly) unsigned int propertyTypeMultiString;
@property(readonly) unsigned int propertyTypeReal;
@property(readonly) unsigned int propertyTypeString;
@property(readonly) int recordTypeGroup;
@property(readonly) int recordTypePerson;
@property(readonly) int recordTypeSource;
@property(readonly) int searchScopeLocal;
@property(readonly) int searchScopeRecent;
@property(readonly) int searchScopeRemote;
@property(readonly) int sortOrderByFirstName;
@property(readonly) int sortOrderByLastName;
@property(readonly) int sourceTypeCardDAV;
@property(readonly) int sourceTypeCardDAVSearch;
@property(readonly) int sourceTypeExchange;
@property(readonly) int sourceTypeExchangeGAL;
@property(readonly) int sourceTypeLDAP;
@property(readonly) int sourceTypeLocal;
@property(readonly) int sourceTypeMobileMe;

+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKey:(const char *)arg1;
+ (void)initialize;
+ (id)newScriptValueForNativeValue:(void*)arg1 propertyType:(unsigned int)arg2;
+ (id)newScriptRecordsForNativeRecords:(struct __CFArray { }*)arg1;
+ (void*)threadAddressBook;

- (id)sources;
- (id)attributeKeys;
- (id)init;
- (void)dealloc;
- (int)sourceTypeMobileMe;
- (int)sourceTypeLocal;
- (int)sourceTypeLDAP;
- (int)sourceTypeExchangeGAL;
- (int)sourceTypeExchange;
- (int)sourceTypeCardDAVSearch;
- (int)sourceTypeCardDAV;
- (int)sortOrderByLastName;
- (int)sortOrderByFirstName;
- (int)searchScopeRemote;
- (int)searchScopeRecent;
- (int)searchScopeLocal;
- (int)recordTypeSource;
- (int)recordTypePerson;
- (int)recordTypeGroup;
- (int)propertyURL;
- (unsigned int)propertyTypeString;
- (unsigned int)propertyTypeReal;
- (unsigned int)propertyTypeMultiString;
- (unsigned int)propertyTypeMultiReal;
- (unsigned int)propertyTypeMultiInteger;
- (unsigned int)propertyTypeMultiDictionary;
- (unsigned int)propertyTypeMultiDateTime;
- (unsigned int)propertyTypeInvalid;
- (unsigned int)propertyTypeInteger;
- (unsigned int)propertyTypeDictionary;
- (unsigned int)propertyTypeDateTime;
- (int)propertySuffix;
- (int)propertySourceType;
- (int)propertySourceName;
- (int)propertyRelatedNames;
- (int)propertyPrefix;
- (int)propertyPhoneNumber;
- (int)propertyOrganization;
- (int)propertyNickname;
- (int)propertyMiddleName;
- (int)propertyLastName;
- (int)propertyJobTitle;
- (int)propertyKind;
- (int)propertyInstantMessage;
- (int)propertyGroupName;
- (int)propertyFirstName;
- (int)propertyEmail;
- (int)propertyDepartment;
- (int)propertyBirthday;
- (int)propertyAddress;
- (id)labelWork;
- (id)labelSpouse;
- (id)labelSister;
- (id)labelPartner;
- (id)labelOther;
- (id)labelPhoneWorkFAX;
- (id)labelPhonePager;
- (id)labelPhoneMobile;
- (id)labelPhoneMain;
- (id)labelPhoneIPhone;
- (id)labelPhoneHomeFAX;
- (id)labelParent;
- (id)labelMother;
- (id)labelManager;
- (id)labelHomePage;
- (id)labelHome;
- (id)labelFriend;
- (id)labelFather;
- (id)labelChild;
- (id)labelBrother;
- (id)labelAssistant;
- (id)kindPerson;
- (id)kindOrganization;
- (id)instantMessageServiceYahoo;
- (id)instantMessageServiceMSN;
- (id)instantMessageServiceJabber;
- (id)instantMessageServiceICQ;
- (id)instantMessageServiceAIM;
- (id)instantMessageKeyUsername;
- (id)instantMessageKeyService;
- (int)imageFormatThumbnail;
- (int)imageFormatOriginal;
- (id)addressKeyZipCode;
- (id)addressKeyStreet;
- (id)addressKeyState;
- (id)addressKeyCountryCode;
- (id)addressKeyCountry;
- (id)addressKeyCity;
- (id)people;
- (id)numberOfPeopleInAddressBook;
- (id)numberOfGroupsInAddressBook;
- (id)groups;
- (id)defaultSource;
- (int)defaultSortOrder;
- (id)sourceWithRecordID:(id)arg1;
- (id)searchResultsViewControllerWithOptions:(id)arg1;
- (id)personWithRecordID:(id)arg1;
- (id)peopleWithName:(id)arg1;
- (id)peopleInSource:(id)arg1 withSortOrder:(id)arg2;
- (id)peoplePickerWithOptions:(id)arg1;
- (id)localizedLabelForLabel:(id)arg1;
- (id)groupWithRecordID:(id)arg1;
- (id)groupsInSource:(id)arg1;
- (id)initWithDatabaseAccess:(BOOL)arg1;
- (id)_className;
- (id)scriptAttributeKeys;

@end