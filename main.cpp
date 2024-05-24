#include<stdio.h>
#include<iostream>
#include<list>
using namespace std;

int main() {

	list <const char*>routeMap{"Tokyo","Kanda","Akihabara",
		"Okachimachi","Ueno","Uguisudani",
		"Nippori","Tabata","Komagome",
		"Sugamo","Otsuka","ikebukuro",
		"Mejiro","Takadanobaba","Shin-Okubo",
		"Shinjuku","Yoyogi","Harajuku",
		"Shibuya","Ebisu","Meguro",
		"Gotanda","Osaki","Shinagawa",
		"Tamachi","Hamamatsucho","Shimbashi",
		"Yurakucho"};
	
	list<const char*>::iterator station;
	printf("1970”N˜Hü}\n");
	for (list<const char*>::iterator station_routeMap = routeMap.begin(); station_routeMap != routeMap.end(); station_routeMap++) {
		cout << *station_routeMap << endl;
	}
	printf("\n");
	printf("2019”N˜Hü}\n");
	for (list<const char*>::iterator station = routeMap.begin(); station != routeMap.end(); ++station) {
		if (*station == "Tabata") {
			station = routeMap.insert(station, "Nishi-Nippori");
			++station;
		}
	}
	for (list<const char*>::iterator station_routeMap = routeMap.begin(); station_routeMap != routeMap.end(); station_routeMap++) {
		cout << *station_routeMap << endl;
	}
	printf("\n");
	printf("2022”N˜Hü}\n");
	for (list<const char*>::iterator station = routeMap.begin(); station != routeMap.end(); ++station) {
		if (*station == "Tamachi") {
			station = routeMap.insert(station, "Takanawa Gateway");
			++station;
		}
	}
	for (list<const char*>::iterator station_routeMap = routeMap.begin(); station_routeMap != routeMap.end(); station_routeMap++) {
		cout << *station_routeMap << endl;
	}

	return 0;
}
