## Proof for GEOCelestialBody

This file explains the evidence used to construct the `GEOCelestialBody` enumeration. 

### Code

The number in parentheses represents the order in which the symbol appeared. 

Tweak:

```objc
%hookf(double, "__ZN8CAAEarth17EclipticLongitudeEd", double arg) {
    NSLog(@"Earth (0)");
    return %orig;
}

%hookf(double, "__ZN10CAAJupiter17EclipticLongitudeEd", double arg) {
    NSLog(@"Jupiter (1)");
    return %orig;
}

%hookf(double, "__ZN7CAAMars17EclipticLongitudeEd", double arg) {
    NSLog(@"Mars (2)");
    return %orig;
}

%hookf(double, "__ZN10CAAMercury17EclipticLongitudeEd", double arg) {
    NSLog(@"Mercury (3)");
    return %orig;
}

%hookf(double, "__ZN7CAAMoon17EclipticLongitudeEd", double arg) {
    NSLog(@"Moon (4)");
    return %orig;
}

%hookf(double, "__ZN10CAANeptune17EclipticLongitudeEd", double arg) {
    NSLog(@"Neptune (5)");
    return %orig;
}

%hookf(double, "__ZN8CAAPluto17EclipticLongitudeEd", double arg) {
    NSLog(@"Pluto (6)");
    return %orig;
}

%hookf(double, "__ZN9CAASaturn17EclipticLongitudeEd", double arg) {
    NSLog(@"Saturn (7)");
    return %orig;
}

%hookf(double, "__ZN9CAAUranus17EclipticLongitudeEd", double arg) {
    NSLog(@"Uranus (8)");
    return %orig;
}

%hookf(double, "__ZN8CAAVenus17EclipticLongitudeEd", double arg) {
    NSLog(@"Venus (9)");
    return %orig;
}
```

App:

```objc
NSDate *date = [NSDate date];
CLLocationCoordinate2D loc = CLLocationCoordinate2DMake(0, 0);
for (NSInteger body = 0; body < 12; body++) {
    NSLog(@"%ld: ", body);
    GEOCelestialEphemeris __unused *celestialEphemeris = [[GEOCelestialEphemeris alloc] initWithLocation:loc date:date body:body];
}
```


### Output

```txt
 0:
 Earth (0)
 Earth (0)
 Earth (0)
 Earth (0)
 Earth (0)
 Earth (0)
 1:
 Mercury (3)
 Mercury (3)
 Mercury (3)
 2:
 Venus (9)
 Venus (9)
 Venus (9)
 3:
 4:
 Moon (4)
 Moon (4)
 Moon (4)
 Moon (4)
 Earth (0)
 Earth (0)
 5:
 Mars (2)
 Mars (2)
 Mars (2)
 6:
 Jupiter (1)
 Jupiter (1)
 Jupiter (1)
 7:
 Saturn (7)
 Saturn (7)
 Saturn (7)
 8:
 Uranus (8)
 Uranus (8)
 Uranus (8)
 9:
 Neptune (5)
 Neptune (5)
 Neptune (5)
 10:
 Pluto (6)
 Pluto (6)
 Pluto (6)
 11:
 
```
