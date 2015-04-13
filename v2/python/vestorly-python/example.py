

import vestorly
api_key = 'eyJwYXlsb2FkIjoiNTUxYWQyZWRjOThmMTM0MzY0MDAwMDQ0IiwiY3JlYXRlZF9vbiI6MTQyODk0OTQxMywic2lnbmF0dXJlIjoiVzN2L3crVWZ0ZDBmc3B5T2pSY1FPd3VqcFJmNnZsS0tVRURrZlFJZGZpdz0ifQ'


client = vestorly.ApiClient(host='https://staging.vestorly.com/',headerName='x-vestorly-auth', headerValue=api_key)
api =  vestorly.ArticlesApi(client)
print api.index()