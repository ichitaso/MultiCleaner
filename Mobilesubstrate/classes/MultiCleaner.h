/*
 *  MultiCleaner.h
 *  MultiCleaner
 *
 *  Created by Marius Petcu on 9/8/10.
 *  Copyright 2010 Home. All rights reserved.
 *
 */

#ifndef MULTICLEANER_H
#define MULTICLEANER_H

#ifdef __cplusplus
extern "C" 
{
#endif
void settingsReloaded();
void quitForegroundApp();
void quitAllApps();
NSString * foregroundAppDisplayIdentifier();
#ifdef __cplusplus
}
#endif

#define MCLog(args...) NSLog(@"MultiCleaner: %@",[NSString stringWithFormat:args]);

#endif