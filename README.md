# Prusa i3 Fabman

This repository is mostly dedicated to custom Fabman hardware for Prusa i3 printers.

Fabman.io is all-in-one makerspace management solution and this HW use this service to send amount of filament, name of the file and time of the print to this service. 

This HW was developed by FabLab Brno. You can learn more about our journey <a href="https://hackaday.io/project/166410-access-system-for-3d-printers" target="_blank">here</a>.

We can provide you with complete kit of this HW or you can make your own. All files for production are in this repo. 

We do not share source code for our firmware, but you can easily set it up with you creadentials for Fabman.io . We supply our HW with simple FW which allows you to set things up.    

For this, we use following JSON file: 

```json
{
  "config": {
    "API_key": "device_API_key_from_fabman.io",
	"API_key_master":"admin_API_key_from_fabman.io",
    "nameOfMachine": "custom_name_of_the_machine", 
	"sendName": true,
	"sendFilament": true,
	"sendTime": false,
	"resetSettings": false, 
	"firstSettings": true
  },
  "WiFi": [
    {
      "SSID": "some_wifi",
      "password": "some_password"
    },{
      "SSID": "some_wifi",
      "password": "some_password"
    }
  ]
}
```

For more detailed information, please look at wiki.       