## Map Formats

The [KML format](https://developers.google.com/kml/) is the default format for maps. Two reasons for this are: KML files are easy to edit and human readable in small files. Although KMZ (which is a zipped KML format) is widely used because of large file sizes of KML, we will be dealing with small maps so using KML won't be problematic. 

KML/KMZ is also chosen as a standard specification by the Open Geospatial Consortium. It is also supported by many GIS applications, which helps with documentation and also following a major standard is better than re-inventing the wheel with a new format. 

###Other formats
[GeoJSON](http://geojson.org/) was considered, but the majority of the support was in web development, whereas the XML format has parsers in many languages (which is very similar to KML)

[OSM XML](http://wiki.openstreetmap.org/wiki/OSM_XML) was also considered but due to much less support compared to KML, it wouldn't have been a good choice. It would've been a good choice if the primary map source is from OSM data, which is not the case. 

The other GIS formats which aren't mentioned here were not human readable and/or have limited to no documentation.


