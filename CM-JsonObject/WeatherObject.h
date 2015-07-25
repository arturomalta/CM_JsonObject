//
//  WeatherObject.h
//  CM-JsonObject
//
//  Created by Walter Gonzalez Domenzain on 18/07/15.
//  Copyright (c) 2015 Smartplace. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Coord.h"
#import "MainObject.h"
#import "WeatherDetail.h"
#import "Weather.h"
#import "Sys.h"
#import "Wind.h"
#import "Rain.h"
#import "Clouds.h"

@interface WeatherObject : NSObject

@property (nonatomic) Coord         *coord;
@property (nonatomic) Sys           *sys;
@property (nonatomic) Weather       *weather;
@property (nonatomic) MainObject    *main;
@property (nonatomic) Wind          *wind;
@property (nonatomic) Rain          *rain;
@property (nonatomic) Clouds        *clouds;
@property (nonatomic) long          *dt;
@property (nonatomic) int           ID;
@property (nonatomic) NSString      *name;
@property (nonatomic) int           *cod;
@end
