##### Generating the Clients

First, checkout swagger-codegen

    git clone git@github.com:swagger-api/swagger-codegen.git
	
Next checkout branch `develop_2.0`

    git checkout -b develop_2.0

Finally, rebuild it

    mvn clean package
	
Now execute the following bash script:

```bash

#!/bin/sh

#
# This script will build all the clients
#

declare -a arr=('android'  'java'  'jaxrs' 'nodejs' 'objc' 'scalatra' 'scala' 'dynamic-html' 'html' 'swagger' 'tizen' 'php'  'python')

for i in "${arr[@]}"
do
	java -jar modules/swagger-codegen-distribution/target/swagger-codegen-distribution-2.1.1-M1.jar  \
		 -i http://developers.vestorly.com/v1/api-docs  \
		 -l $i   -o /Users/josephmisiti/mathandpencil/projects/vestorly/clients/v1/$i
	
done


for i in "${arr[@]}"
do
	java -jar modules/swagger-codegen-distribution/target/swagger-codegen-distribution-2.1.1-M1.jar  \
		 -i http://developers.vestorly.com/v2/api-docs  \
		 -l $i   -o /Users/josephmisiti/mathandpencil/projects/vestorly/clients/v2/$i
	
done


```
