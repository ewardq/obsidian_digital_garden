---
{"dg-publish":true,"permalink":"/aws-cloud-practitioner-essentials/network-traffic-in-a-vpc/"}
---

---
When a customer requests data from an application hosted in the AWS Cloud, this request is sent as a packet. A **packet** is a unit of data sent over the internet or a network. 

It enters into a VPC through an internet gateway. Before a packet can enter into a subnet or exit from a subnet, it checks for permissions. These permissions indicate who sent the packet and how the packet is trying to communicate with the resources in a subnet.

The VPC component that checks packet permissions for subnets is a [[AWS Cloud Practitioner Essentials/Network Access Control List (ACL)\|Network Access Control List (ACL)]]