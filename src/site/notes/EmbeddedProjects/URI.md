---
{"dg-publish":true,"permalink":"/embedded-projects/uri/"}
---

---

A ==URI== uniquely identifies resources and directs the server to perform a specified operation. URIs often include:

- ==Path== Defines the specific resource location, such as `/data` for general data access or `/data/latest` for the most recent entry.

- ==Query Parameters== Optional components that provide additional information, like filtering data by date.

- ==ID== Often used to access individual resources, such as `/data/{device_id}`, to request data for a specific device.

As an example, 

 `/data` contains general endpoint to access all data.
 `/data/latest` retrieves the latest data record.
 `/data/{device_id}` retrieves data specific to a particular device, identified by _device_id_.

 