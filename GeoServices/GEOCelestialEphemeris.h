//
//  GEOCelestialEphemeris.h
//  geoservices-example
//
//  Created by Leptos on 8/29/18.
//  Copyright © 2018 Leptos. All rights reserved.
//

#import <CoreLocation/CoreLocation.h>

#import "GEOCelestialBody.h"
#import "GEOSolarEclipticCelestialBodyData.h"
#import "GEOEquatorialCelestialBodyData.h"
#import "GEOHorizontalCelestialBodyData.h"

@interface GEOCelestialEphemeris : NSObject

@property (nonatomic, readonly) NSDate *rise;
@property (nonatomic, readonly) NSDate *set;
@property (nonatomic, readonly) NSDate *transit;

/* these are only valid for GEOCelestialBodyMoon */
@property (nonatomic, readonly) double illuminatedFraction;
@property (nonatomic, readonly) double elongation;
@property (nonatomic, readonly) double phaseAngle;
@property (nonatomic, readonly) double parallacticAngle;

@property (nonatomic, readonly) GEOSolarEclipticCelestialBodyData *eclipticCoord;
@property (nonatomic, readonly) GEOEquatorialCelestialBodyData *equatorialCoord;
@property (nonatomic, readonly) GEOHorizontalCelestialBodyData *horizontalCoord;

- (instancetype)initWithLocation:(CLLocationCoordinate2D)location date:(NSDate *)date body:(GEOCelestialBody)body;

@end
