# solar-tracker-ss25
solar tracker project for stratoscience 2025

## whats this?
 - this project is going on the outside of a payload box for a high altitude balloon
 - it is a pan/tilt platform with servos
 - it needs to be constantly pointed at the sun (or the nearest, brightest light source)
 - to do that, the rotated flaps on the side of the base plate have solar panels on them (4 total)
 - an arduino on board will take the analog output value of those panels, and calculate where the brightest light source is
 - it will move the servos accordingly until the panel is directly facing the sun
 - there will be other people's projects on the base plate, and they need to be facing the sun
