---
{"dg-publish":true,"permalink":"/embedded-projects/using-aws-lambda-for-io-t-data-processing/"}
---

---

![AWS_lambda_workflow.png](/img/user/EmbeddedProjects/Reference%20images/AWS_lambda_workflow.png)

1. In our IoT system, AWS Lambda functions serve as the **main processor of incoming data from IoT devices**, such as temperature or humidity readings.
2. A Lambda function can be triggered by **API Gateway** when a device sends an HTTP POST request with sensor data. The function can:
	1. Parse the JSON payload from the request.
	2. Extract the sensor data (e.g., temperature, humidity, timestamp).
	3. Store the data in DynamoDB for long-term storage and analysis.

> [!Note] Note
> Another Lambda function can retrieve data when an **HTTP GET request** is made (e.g. /data/latest).  
> 
> This function queries DynamoDB for the latest record associated with a device.

