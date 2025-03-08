---
{"dg-publish":true,"permalink":"/aws-cloud-practitioner-essentials/aws-availability-zones/"}
---

---
An Availability Zone is a single data center or a group of data centers within a[[AWS Regions \| Region]]. Availability Zones are located tens of miles apart from each other. This is ==close enough to have low latency== (the time between when content requested and received) between Availability Zones. However, if a disaster occurs in one part of the Region, they are distant enough to ==reduce the chance that multiple Availability Zones are affected.==

![EC2InstancesInMultipleAvailabilityZones.png](/img/user/AWS%20Cloud%20Practitioner%20Essentials/Reference%20images/EC2InstancesInMultipleAvailabilityZones.png)

___A best practice is to run applications at least two Availability Zones in a Region___
