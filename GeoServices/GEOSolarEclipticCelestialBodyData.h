//
//  GEOSolarEclipticCelestialBodyData.h
//  geoservices-example
//
//  Created by Leptos on 8/29/18.
//  Copyright © 2018 Leptos. All rights reserved.
//

#import <CoreLocation/CoreLocation.h>

#import "GEOCelestialBody.h"

@interface GEOSolarEclipticCelestialBodyData : NSObject

@property (nonatomic, readonly) CLLocationDegrees latitude;
@property (nonatomic, readonly) CLLocationDegrees longitude;

- (instancetype)initWithDate:(NSDate *)date body:(GEOCelestialBody)body;
- (instancetype)initWithDate:(NSDate *)date body:(GEOCelestialBody)body useHighPrecision:(BOOL)highPrecision API_AVAILABLE(macos(10.14), ios(12.0), watchos(5.0));

@end
