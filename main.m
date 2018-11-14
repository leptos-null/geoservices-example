//
//  main.m
//  geoservices-example
//
//  Created by Leptos on 8/29/18.
//  Copyright © 2018 Leptos. All rights reserved.
//

#import "GeoServices/GEOCelestialEphemeris.h"

int main() {
    CLLocationCoordinate2D appleParkCoordinates = CLLocationCoordinate2DMake(+37.3330541, -122.0110933);
    NSTimeZone *appleParkTimeZone = [NSTimeZone timeZoneWithName:@"America/Los_Angeles"];
    
    NSDateComponents *iPhoneAnnouncementDateComponents = [NSDateComponents new];
    iPhoneAnnouncementDateComponents.calendar = [NSCalendar calendarWithIdentifier:NSCalendarIdentifierGregorian];
    iPhoneAnnouncementDateComponents.day = 12;
    iPhoneAnnouncementDateComponents.month = 9;
    iPhoneAnnouncementDateComponents.year = 2017;
    iPhoneAnnouncementDateComponents.timeZone = appleParkTimeZone;
    
    assert(iPhoneAnnouncementDateComponents.validDate);
    GEOCelestialEphemeris *celestialEphemeris = [[GEOCelestialEphemeris alloc] initWithLocation:appleParkCoordinates date:iPhoneAnnouncementDateComponents.date body:GEOCelestialBodySun];
    
    NSDateFormatter *dateFormatter = [NSDateFormatter new];
    dateFormatter.timeStyle = NSDateFormatterShortStyle;
    dateFormatter.dateStyle = NSDateFormatterMediumStyle;
    dateFormatter.timeZone = appleParkTimeZone;
    
    /* output:
     Sunrise: Sep 12, 2017, 6:47 AM
     Sunset: Sep 11, 2017, 7:21 PM
     
     * confirm: https://www.timeanddate.com/sun/@37.3331,-122.0111?month=9&year=2017
     */
    printf("Sunrise: %s\n"
           "Sunset: %s\n",
           [[dateFormatter stringFromDate:celestialEphemeris.rise] UTF8String],
           [[dateFormatter stringFromDate:celestialEphemeris.set] UTF8String]);
}
