---
{"dg-publish":true,"permalink":"/aws-cloud-practitioner-essentials/amazon-elastic-compute-cloud-amazon-ec-2/"}
---

---
![AmazonEC2.png](/img/user/AWS%20Cloud%20Practitioner%20Essentials/Reference%20images/AmazonEC2.png)
This service from Amazon provides secure, resizable compute capacity in the cloud as Amazon EC2 instances.

With an Amazon EC2 instance you can use a virtual server to run applications in the AWS Cloud, where you can:

- Provision and launch Amazon EC2 instances within minutes
- Stop using it when you have finished running a workload.
- Pay only for the compute time you use when an instance is running, not when it is stopped or terminated.
- Save costs by paying only for server capacity that you need or want.

---

<div class="transclusion internal-embed is-loaded"><a class="markdown-embed-link" href="/aws-cloud-practitioner-essentials/types-of-ec-2-instances/" aria-label="Open link"><svg xmlns="http://www.w3.org/2000/svg" width="24" height="24" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" class="svg-icon lucide-link"><path d="M10 13a5 5 0 0 0 7.54.54l3-3a5 5 0 0 0-7.07-7.07l-1.72 1.71"></path><path d="M14 11a5 5 0 0 0-7.54-.54l-3 3a5 5 0 0 0 7.07 7.07l1.71-1.71"></path></svg></a><div class="markdown-embed">




---
[[Amazon Elastic Compute Cloud (Amazon EC2) \| Amazon Elastic Compute Cloud (EC2) instances]] are optimized for different tasks. To choose from the right one for you, take into consideration the types and characteristics of each one:

- ==General purpose instances== provide a balance of compute, memory, and networking resources. <u>Use this type of EC2 for applications that do not require optimization in any single resource area.</u>

- ==Compute optimized instances== are ideal for compute-bound applications that benefic from high-performance processors. <u>These EC2 are ideal for high-performance web-servers, compute-intensive applications servers, and dedicated gaming servers.</u>

- ==Memory optimized instances== are designed to deliver fast performance for workloads that process large datasets in memory (temporary storage area). The memory holds are the data and instructions that a central processing unit (CPU) needs to be able to complete actions. <u>Ideal for workload that requires large amounts of data to be preloaded before running an application.</u>

- ==Accelerated computing instances== use hardware accelerators, or coprocessors, to perform some functions more efficiently than is possible in software running on CPUs. <u>Accelerated computing instances are ideal for workloads such as graphics applications, game streaming, and application streaming.</u>

- ==Storage optimized instances== are designed for workloads that require high, sequential read and write access to large datasets on local storage. <u>Examples of workloads suitable for storage optimized instances include distributed file systems, data warehousing applications, and high-frequency online transaction processing (OLTP) systems.</u>

</div></div>


---

<div class="transclusion internal-embed is-loaded"><a class="markdown-embed-link" href="/aws-cloud-practitioner-essentials/amazon-ec-2-pricing/" aria-label="Open link"><svg xmlns="http://www.w3.org/2000/svg" width="24" height="24" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" class="svg-icon lucide-link"><path d="M10 13a5 5 0 0 0 7.54.54l3-3a5 5 0 0 0-7.07-7.07l-1.72 1.71"></path><path d="M14 11a5 5 0 0 0-7.54-.54l-3 3a5 5 0 0 0 7.07 7.07l1.71-1.71"></path></svg></a><div class="markdown-embed">




---

- ==On demand instances== are ideal for short-term, irregular workloads that cannot be interrupted. The instances run  continuously until you stop them, and you pay for only the compute time you use.

- ==Reserved instances== are a billing discount applied to the use of On-demand instances in your account. There are two available types of Reserved instances:
	- Standard Reserved Instances
	- Convertible Reserved Instances

</div></div>
