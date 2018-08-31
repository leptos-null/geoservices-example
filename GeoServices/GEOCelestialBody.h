//
//  GEOCelestialBody.h
//  geoservices-example
//
//  Created by Leptos on 8/30/18.
//  Copyright © 2018 Leptos. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, GEOCelestialBody) {
    GEOCelestialBodyEarth,
    GEOCelestialBodyMercury,
    GEOCelestialBodyVenus,
    /* case 3 is skipped */
    GEOCelestialBodyMoon = 4,
    GEOCelestialBodyMars,
    GEOCelestialBodyJupiter,
    GEOCelestialBodySaturn,
    GEOCelestialBodyUranus,
    GEOCelestialBodyNeptune,
    GEOCelestialBodyPluto
};
