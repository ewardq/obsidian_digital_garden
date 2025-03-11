---
{"dg-publish":true,"permalink":"/aws-cloud-practitioner-essentials/security-groups/"}
---

---
==A security group is a virtual firewall that controls inbound and outbound traffic for an Amazon EC2 instance.==

By default, a security group denies all inbound traffic and allows all outbound traffic. 

You can add custom rules to configure which traffic should be allowed; any other traffic would then be denied

## Stateful packet filtering

Security groups perform **stateful** packet filtering. They remember previous decisions made for incoming packets.

![Stateful_filtering.png](/img/user/AWS%20Cloud%20Practitioner%20Essentials/Reference%20images/Stateful_filtering.png)