---
{"dg-publish":true,"permalink":"/aws-cloud-practitioner-essentials/subnets/"}
---

---
==A subnet is a section of a VPC in which you can group resources based on security or operational needs.== Subnets can be public or private.

![AWSSubnets.png](/img/user/AWS%20Cloud%20Practitioner%20Essentials/Reference%20images/AWSSubnets.png)

- **Public subnets** contain resources that need to be accessible by the public, such as an online store’s website.

- **Private subnets** contain resources that should be accessible only through your private network, such as a database that contains customers’ personal information and order histories. 

In a VPC, subnets can communicate with each other. For example, you might have an application that involves Amazon EC2 instances in a public subnet communicating with databases that are located in a private subnet.