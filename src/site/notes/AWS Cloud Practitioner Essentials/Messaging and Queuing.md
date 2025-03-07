---
{"dg-publish":true,"permalink":"/aws-cloud-practitioner-essentials/messaging-and-queuing/"}
---

---
## Monolithic application
Applications are made of multiple components. The components communicate with each other to transmit data, fulfill requests, and keep the application running.
## Microservices
The application components are loosely coupled.
- If this case, if a single component fails, the components continue to work because they are communication with each other.


<div class="transclusion internal-embed is-loaded"><a class="markdown-embed-link" href="/aws-cloud-practitioner-essentials/amazon-simple-notification-service-amazon-sns/" aria-label="Open link"><svg xmlns="http://www.w3.org/2000/svg" width="24" height="24" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" class="svg-icon lucide-link"><path d="M10 13a5 5 0 0 0 7.54.54l3-3a5 5 0 0 0-7.07-7.07l-1.72 1.71"></path><path d="M14 11a5 5 0 0 0-7.54-.54l-3 3a5 5 0 0 0 7.07 7.07l1.71-1.71"></path></svg></a><div class="markdown-embed">




---
**Amazon Simple Notification Service (Amazon SNS)** is a publish/subscribe service. Using Amazon SNS topics, a publisher publishes messages to subscribers.

![AmazonSNS.png](/img/user/AWS%20Cloud%20Practitioner%20Essentials/Reference%20images/AmazonSNS.png)

In Amazon SNS, subscribers can be web servers, email addresses, AWS Lambda functions, or several other options.

</div></div>



<div class="transclusion internal-embed is-loaded"><a class="markdown-embed-link" href="/aws-cloud-practitioner-essentials/amazon-simple-queue-service-amazon-sqs/" aria-label="Open link"><svg xmlns="http://www.w3.org/2000/svg" width="24" height="24" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" class="svg-icon lucide-link"><path d="M10 13a5 5 0 0 0 7.54.54l3-3a5 5 0 0 0-7.07-7.07l-1.72 1.71"></path><path d="M14 11a5 5 0 0 0-7.54-.54l-3 3a5 5 0 0 0 7.07 7.07l1.71-1.71"></path></svg></a><div class="markdown-embed">




---
**Amazon Simple Queue Service (Amazon SQS)** is a message queuing service.

![AmazonSQS.png](/img/user/AWS%20Cloud%20Practitioner%20Essentials/Reference%20images/AmazonSQS.png)

Using Amazon SQS, you can send, store, and receive messages between software components, without losing messages or requiring other services to be available. In Amazon SQS, an application sends messages into a queue. A user or service retrieves a message from the queue, processes it, and then deletes it from the queue.

</div></div>

