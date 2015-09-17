/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

@interface NNMKProtectedSQLiteConnection : NNMKSQLiteConnection {
    BOOL _protectedDatabaseAttached;
    NSString *_protectedDatabaseName;
    NSString *_protectedDatabasePath;
}

@property (nonatomic, readonly) BOOL protectedDatabaseAttached;
@property (nonatomic, retain) NSString *protectedDatabaseName;
@property (nonatomic, retain) NSString *protectedDatabasePath;

- (void).cxx_destruct;
- (id)_vfsModuleName;
- (int)attachProtectedDatabase;
- (void)dettachProtectedDatabase;
- (id)initWithUnprotectedDatabaseFileName:(id)arg1 protectedDatabaseFileName:(id)arg2 inDirectory:(id)arg3 protectedDatabaseName:(id)arg4 errorCode:(int*)arg5;
- (BOOL)protectedDatabaseAttached;
- (id)protectedDatabaseName;
- (id)protectedDatabasePath;
- (void)setProtectedDatabaseName:(id)arg1;
- (void)setProtectedDatabasePath:(id)arg1;

@end