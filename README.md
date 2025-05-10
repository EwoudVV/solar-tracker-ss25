# Solar Tracker - StratoScience 2025
Repository for my [StratoScience 2025](https://nescitech.org/stratoscience) project.

## What is this?
 - This project is going on the outside of a payload box for a high altitude balloon
 - It is a pan/tilt platform with servos
 - It needs to be constantly pointed at the sun (or the nearest, brightest light source)
 - To do that, the rotated flaps on the side of the base plate have solar panels on them (4 total)
 - An arduino on-board will take the analog output value of those panels, and calculate where the brightest light source is
 - It will move the servos accordingly until the panel is directly facing the sun
 - There will be other people's projects on the base plate, and they need to be facing the sun
