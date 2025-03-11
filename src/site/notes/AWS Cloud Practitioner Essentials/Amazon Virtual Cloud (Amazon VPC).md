---
{"dg-publish":true,"permalink":"/aws-cloud-practitioner-essentials/amazon-virtual-cloud-amazon-vpc/"}
---

---
A networking service that you can use to establish boundaries around your AWS resources is [**Amazon Virtual Private Cloud (Amazon VPC)**](https://aws.amazon.com/vpc/).

Amazon VPC enables you to provision an isolated section of the AWS Cloud. In this isolated section, you can launch resources in a virtual network that you define. Within a virtual private cloud (VPC), you can organize your resources into subnets. A **subnet** is a section of a VPC that can contain resources such as Amazon EC2 instances.

# Internet Gateway
To allow public traffic from the internet to access your VPC, you attach an **internet gateway** to the VPC.

![AWSInternetGateway.png](/img/user/AWS%20Cloud%20Practitioner%20Essentials/Reference%20images/AWSInternetGateway.png)
# Virtual Private Gateway
A virtual private gateway enables you to establish a virtual private network (VPN) connection between your VPC and a private network, such as an on-premises data center or internal corporate network. A virtual private gateway allows traffic into the VPC only if it is coming from an approved network.

![AWSVirtualPrivateGateway.png](/img/user/AWS%20Cloud%20Practitioner%20Essentials/Reference%20images/AWSVirtualPrivateGateway.png)

# AWS Direct Connect
[**AWS Direct Connect**](https://aws.amazon.com/directconnect/) is a service that lets you to establish a dedicated private connection between your data center and a VPC.

The private connection that AWS Direct Connect provides helps you to reduce network costs and increase the amount of bandwidth that can travel through your network.

![AWSDirectConnect.png](/img/user/AWS%20Cloud%20Practitioner%20Essentials/Reference%20images/AWSDirectConnect.png)

---
# Security groups and Network Access Control List

With both network ACLs and security groups, you can configure custom rules for the traffic in your VPC.

![VPC_packet_track.png](/img/user/AWS%20Cloud%20Practitioner%20Essentials/Reference%20images/VPC_packet_track.png)

A packet travels over the internet from a client, to the internet gateway and into the VPC. Then the pack goes through the [[AWS Cloud Practitioner Essentials/Network Access Control List (ACL)\|Network Access Control List (ACL)]] and accesses the public [[Subnets \| subnet]], where two EC2 instances are located within separate [[AWS Cloud Practitioner Essentials/Security Groups\|Security Groups]].



