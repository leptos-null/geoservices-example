## geoservices-example

GeoServices is a very large framework on iOS. It is responsible for guessing a future location based on a route, generating an ETA (Estimated Time of Arrival) for a route, and many other map-based activities. It also includes some astronomical arithmetic. This project exposes the API around celestial calculations provided by GeoServices, and includes an example.

### Example 

[main.m](main.m) is an example of getting the sunrise and sunset time on a day for a geographical location on Earth. 

Running the example, the output is

```txt
 Sunrise: Sep 12, 2017, 6:47 AM
 Sunset: Sep 11, 2017, 7:21 PM
```

I'm not sure why sunset is for the previous day, however this isn't typically an issue. 

To confirm that these values are correct, [TimeAndDate](https://www.timeanddate.com/sun/@37.3331,-122.011?month=9&year=2017) is a website that provides this information. The values match for this example, and many other examples I tested.

### Further API

The [GeoServices](GeoServices) folder includes headers I reverse engineered. [GEOCelestialBody proof](GeoServices/GEOCelestialBody-proof.md) explains how I constructed the enum used to identify different celestial bodies in the Milky Way. I haven't found a reliable source to confirm sunrise and sunset times on other celestial bodies in the Milky Way, however the `GEOCelestialEphemeris` class seems to output valid values. 
