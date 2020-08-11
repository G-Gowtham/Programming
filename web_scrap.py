import requests
from bs4 import BeautifulSoup 


url = "https://www.swiggy.com/restaurants" 
proxies = {"http" : "http://127.0.0.1:8080",
           "https" : "http://127.0.0.1:8080"} 

r = requests.get(url)


cookies = r.cookies.get_dict()
cookies["userLocation"] = """%22address%22:%22Salem%2C%20Tamil%20Nadu%2C%20India%22%2C%22area%22:%22%22%2C%22deliveryLocation%22:%22Salem%22%2C%22lat%22:11.664325%2C%22lng%22:78.1460142"""

print(cookies)

r = requests.get(url,cookies = cookies,proxies = proxies)
soup = BeautifulSoup(r.content,'html5lib')

f = open("tmp1.txt","w")
f.write(soup.prettify())
f.close()


print() 
#userLocation={%22address%22:%22Salem%2C%20Tamil%20Nadu%2C%20India%22%2C%22area%22:%22%22%2C%22deliveryLocation%22:%22Salem%22%2C%22lat%22:11.664325%2C%22lng%22:78.1460142};