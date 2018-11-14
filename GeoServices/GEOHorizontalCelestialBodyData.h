//
//  GEOHorizontalCelestialBodyData.h
//  geoservices-example
//
//  Created by Leptos on 8/29/18.
//  Copyright © 2018 Leptos. All rights reserved.
//

#import <CoreLocation/CoreLocation.h>

#import "GEOCelestialBody.h"

@interface GEOHorizontalCelestialBodyData : NSObject

@property (nonatomic, readonly) double altitude;
@property (nonatomic, readonly) double azimuth;

- (instancetype)initWithLocation:(CLLocationCoordinate2D)location date:(NSDate *)date body:(GEOCelestialBody)body;
- (instancetype)initWithLocation:(CLLocationCoordinate2D)location date:(NSDate *)date body:(GEOCelestialBody)body useHighPrecision:(BOOL)highPrecision API_AVAILABLE(macos(10.14), ios(12.0), watchos(5.0));

@end
