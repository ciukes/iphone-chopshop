//
//  AbstractImageCacheDomain.h
//  Calineczka
//
//  Created by ciukes on 25/10/2009.
//  Copyright 2009 __MyCompanyName__. All rights reserved.
//
#import "ImageCacheDomain.h"

#define MEMORY_CACHE_SIZE 100
#define IMAGE_FILE_LIFETIME 864000.0

@interface AbstractImageCacheDomain : NSObject <ImageCacheDomain> {
	NSFileManager *_fileManager;
}

@property(nonatomic,retain)	NSFileManager *_fileManager;

-(NSString *)getCacheDirectoryName;
-(NSString *)getFileNameForKey:(NSString *)key;
-(NSString*)cacheFolderName;

@end
