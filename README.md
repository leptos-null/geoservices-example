## geoservices-example

GeoServices is a very large framework shipped with macOS and iOS. It is responsible for guessing a future location based on a route, generating an ETA (Estimated Time of Arrival) for a route, and many other map-based activities. It also includes some astronomical arithmetic. This project exposes the API around celestial calculations provided by GeoServices, and includes an example.

### Example 

[main.m](main.m) is an example of getting the sunrise and sunset time on a day for a geographical location on Earth. 

#### Compiling 

```
$ clang main.m -framework Foundation -framework CoreLocation -F /System/Library/PrivateFrameworks -framework GeoServices -o geoxample
```

#### Output

Running the example, the output is

```txt
 Sunrise: Sep 12, 2017, 6:47 AM
 Sunset: Sep 11, 2017, 7:21 PM
```

I'm not sure why sunset is for the previous day, however this isn't typically an issue. 

To confirm that these values are correct, [TimeAndDate](https://www.timeanddate.com/sun/@37.3331,-122.011?month=9&year=2017) is a website that provides this information. The values match for this example, and many other examples I tested.

### Further API

The [GeoServices](GeoServices) folder includes headers I reverse engineered. `GEOCelestialEphemeris` and `GEOHorizontalCelestialBodyData` provide information of a celestial body for an observer on Earth. Some observations are not possible of Earth while observing from it, e.g. the Earth never rises on Earth. I've compared the rise and set values returned by `GEOCelestialEphemeris` with [astronomy.com](http://www.astronomy.com/observing/tonights-sky) and [Night Sky](https://itunes.apple.com/app/night-sky/id475772902?mt=8). The Sun and Moon calculations lined up very closely. Jupiter, Saturn, Uranus, and Neptune had reasonable margins of error. Mars was off by too much (almost three hours), and Venus was nowhere close to the dates on either astronomy.com or Night Sky, which themeselves were very close. 
