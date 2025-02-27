---
{"dg-publish":true,"permalink":"/aws-cloud-practitioner-essentials/amazon-ec-2-pricing/"}
---

---

- ==On demand instances== are ideal for short-term, irregular workloads that cannot be interrupted. The instances run  continuously until you stop them, and you pay for only the compute time you use.

- ==Reserved instances== are a billing discount applied to the use of On-demand instances in your account. There are two available types of Reserved instances:
	- <u>Standard Reserved Instances</u>: These are EC2 instances with static characteristics.
	- <u>Convertible Reserved Instances</u>: These EC2 instances can be change to different Availability Zones or different instance types. Trade flexibility in exchange of a higher cost.

- ==EC2 Instance Savings Plans== are commitments to an instance family and Region for a 1-year or 3-year term. The EC2 Instances Saving Plans are a good option if you need flexibility in your Amazon EC2 usage over the duration of the commitment term.

- ==Spot Instances== are ideal for workloads with flexible start and end times, or that can withstand interruptions. 
	- <u> If you make a Spot request and Amazon EC2 capacity is available, your Spot Instance launches. However, if you make a Spot request and Amazon EC2 capacity is unavailable, the request is not successful until capacity becomes available. The unavailable capacity might delay the launch of your background processing job.</u>

- ==Dedicated Hosts== are physical servers with Amazon EC2 instance capacity that is fully dedicated to your use. 
	- <u>You can use your existing per-socket, per-core, or per-VM software licenses to help maintain license compliance. You can purchase On-Demand Dedicated Hosts and Dedicated Hosts Reservations. Of all the Amazon EC2 options that were covered, Dedicated Hosts are the most expensive.</u>