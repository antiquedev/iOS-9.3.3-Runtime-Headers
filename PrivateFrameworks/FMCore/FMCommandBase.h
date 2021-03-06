/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:39 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSError, NSString, NSNumber, NSURLRequest, NSHTTPURLResponse, NSData, FMServerInteractionController, NSURLSessionDataTask, NSDictionary, NSURLConnection;

@interface FMCommandBase : NSOperation {

	BOOL _commandTaskComplete;
	NSError* _error;
	NSString* _scheme;
	NSString* _username;
	NSString* _password;
	NSString* _host;
	NSNumber* _port;
	double _timeout;
	NSURLRequest* _request;
	NSHTTPURLResponse* _response;
	NSData* _responseData;
	FMServerInteractionController* _serverInteractionController;
	NSURLSessionDataTask* _task;
	unsigned long long _redirectCount;
	NSString* _originalHostname;
	NSString* _redirectedHostname;
	NSDictionary* _caseInsensitiveHeaders;
	NSURLConnection* _connection;

}

@property (copy) NSError * error;                                                                             //@synthesize error=_error - In the implementation block
@property (nonatomic,copy) NSString * scheme;                                                                 //@synthesize scheme=_scheme - In the implementation block
@property (nonatomic,copy) NSString * username;                                                               //@synthesize username=_username - In the implementation block
@property (nonatomic,copy) NSString * password;                                                               //@synthesize password=_password - In the implementation block
@property (nonatomic,copy) NSString * host;                                                                   //@synthesize host=_host - In the implementation block
@property (nonatomic,copy) NSNumber * port;                                                                   //@synthesize port=_port - In the implementation block
@property (assign,nonatomic) double timeout;                                                                  //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,retain) NSURLRequest * request;                                                          //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) NSHTTPURLResponse * response;                                                    //@synthesize response=_response - In the implementation block
@property (nonatomic,retain) NSData * responseData;                                                           //@synthesize responseData=_responseData - In the implementation block
@property (assign,nonatomic,__weak) FMServerInteractionController * serverInteractionController;              //@synthesize serverInteractionController=_serverInteractionController - In the implementation block
@property (nonatomic,retain) NSURLSessionDataTask * task;                                                     //@synthesize task=_task - In the implementation block
@property (assign,nonatomic) unsigned long long redirectCount;                                                //@synthesize redirectCount=_redirectCount - In the implementation block
@property (nonatomic,copy) NSString * originalHostname;                                                       //@synthesize originalHostname=_originalHostname - In the implementation block
@property (nonatomic,copy) NSString * redirectedHostname;                                                     //@synthesize redirectedHostname=_redirectedHostname - In the implementation block
@property (nonatomic,retain) NSDictionary * caseInsensitiveHeaders;                                           //@synthesize caseInsensitiveHeaders=_caseInsensitiveHeaders - In the implementation block
@property (nonatomic,retain) NSURLConnection * connection;                                                    //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) BOOL commandTaskComplete;                                                        //@synthesize commandTaskComplete=_commandTaskComplete - In the implementation block
-(void)setPort:(NSNumber *)arg1 ;
-(BOOL)isConcurrent;
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(void)cancel;
-(id)init;
-(NSString *)scheme;
-(NSURLRequest *)request;
-(id)path;
-(void)start;
-(id)body;
-(NSURLSessionDataTask *)task;
-(NSString *)host;
-(NSHTTPURLResponse *)response;
-(id)method;
-(NSURLConnection *)connection;
-(void)setConnection:(NSURLConnection *)arg1 ;
-(NSNumber *)port;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(void)setScheme:(NSString *)arg1 ;
-(void)setTimeout:(double)arg1 ;
-(void)setHost:(NSString *)arg1 ;
-(void)setRequest:(NSURLRequest *)arg1 ;
-(void)setResponse:(NSHTTPURLResponse *)arg1 ;
-(void)setTask:(NSURLSessionDataTask *)arg1 ;
-(BOOL)wasSuccessful;
-(void)setRedirectCount:(unsigned long long)arg1 ;
-(unsigned long long)redirectCount;
-(id)headers;
-(void)sendRequest;
-(void)setUsername:(NSString *)arg1 ;
-(NSString *)username;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(double)timeout;
-(void)setCommandTaskComplete:(BOOL)arg1 ;
-(BOOL)commandTaskComplete;
-(FMServerInteractionController *)serverInteractionController;
-(void)setCaseInsensitiveHeaders:(NSDictionary *)arg1 ;
-(void)_dataTaskCompletionHandlerWithData:(id)arg1 response:(id)arg2 error:(id)arg3 ;
-(BOOL)isTransactionCompleteWithError:(id)arg1 ;
-(id)authHeaders;
-(NSDictionary *)caseInsensitiveHeaders;
-(id)valueForResponseHTTPHeader:(id)arg1 ;
-(void)generateFakeResponse:(id)arg1 data:(id)arg2 error:(id)arg3 ;
-(BOOL)wasRedirected;
-(NSString *)originalHostname;
-(NSString *)redirectedHostname;
-(void)setServerInteractionController:(FMServerInteractionController *)arg1 ;
-(void)setOriginalHostname:(NSString *)arg1 ;
-(void)setRedirectedHostname:(NSString *)arg1 ;
-(NSData *)responseData;
-(void)setResponseData:(NSData *)arg1 ;
-(void)finishWithError:(id)arg1 ;
@end

