---
{"dg-publish":true,"permalink":"/aws-cloud-practitioner-essentials/network-access-control-list-acl/"}
---

---
==A network ACL is a virtual firewall that controls inbound and outbound traffic at the subnet level.==

By default, your account’s default network ACL allows all inbound and outbound traffic, but you can modify it by adding your own rules. 

- For custom network ACLs, all inbound and outbound traffic is denied until you add rules to specify which traffic to allow. 

- Additionally, all network ACLs have an explicit deny rule. This rule ensures that if a packet doesn’t match any of the other rules on the list, the packet is denied.

## Stateless packet filtering

Network ACLs perform **stateless** packet filtering. They remember nothing and check packets that cross the subnet border each way: inbound and outbound.

![Stateless_filtering.png](/img/user/AWS%20Cloud%20Practitioner%20Essentials/Reference%20images/Stateless_filtering.png)