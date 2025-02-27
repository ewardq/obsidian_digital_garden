---
{"dg-publish":true,"permalink":"/aws-cloud-practitioner-essentials/scaling-amazon-ec-2/"}
---

---

## Scalability
Involves beginning with only the resources you need and designing your architecture to automatically respond to changing demand by scaling out or in.

==Pay only the resources you use with Amazon Auto Scaling== 

## Amazon EC2 Auto Scaling
Amazon EC2 Auto Scaling enables you to automatically add or remove Amazon EC2 instances in response to changing application demand.

Within Amazon EC2 Auto Scaling, you can use two approaches: dynamic scaling and predictive scaling.

- _Dynamic scaling_ responds to changing demand. 
- _Predictive scaling_ automatically schedules the right number of Amazon EC2 instances based on predicted demand.

![AWS_Auto_Scaling_Group.png](/img/user/AWS%20Cloud%20Practitioner%20Essentials/Reference%20images/AWS_Auto_Scaling_Group.png)

When you create an Auto Scaling group, you can set the minimum number of Amazon EC2 instances. The ==minimum capacity== is the number of Amazon EC2 instances that launch immediately after you have created the Auto Scaling group. In this example, the Auto Scaling group has a minimum capacity of one Amazon EC2 instance.

Next, you can set the ==desired capacity== at two Amazon EC2 instances even though your application needs a minimum of a single Amazon EC2 instance to run.

The third configuration that you can set in an Auto Scaling group is the ==maximum capacity.== For example, you might configure the Auto Scaling group to scale out in response to increased demand, but only to a maximum of four Amazon EC2 instances.

---

<div class="transclusion internal-embed is-loaded"><a class="markdown-embed-link" href="/aws-cloud-practitioner-essentials/elastic-load-balancing/" aria-label="Open link"><svg xmlns="http://www.w3.org/2000/svg" width="24" height="24" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" class="svg-icon lucide-link"><path d="M10 13a5 5 0 0 0 7.54.54l3-3a5 5 0 0 0-7.07-7.07l-1.72 1.71"></path><path d="M14 11a5 5 0 0 0-7.54-.54l-3 3a5 5 0 0 0 7.07 7.07l1.71-1.71"></path></svg></a><div class="markdown-embed">




---
Elastic Load Balancing is the AWS service that automatically distributes incoming application traffic across multiple resources, such as Amazon EC2 instances.

A load balancer acts as a single point of contact for all incoming web traffic to your Auto Scaling group. This means that as you add or remove Amazon EC2 instances in response to the amount of incoming traffic, these requests route to the load balancer first. Then, the requests spread across multiple resources that will handle them. For example, if you have multiple Amazon EC2 instances, Elastic Load Balancing distributes the workload across the multiple instances so that no single instance has to carry the bulk of it.

</div></div>

