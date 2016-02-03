import requests
from bs4 import BeautifulSoup

def getSource(url):
    source_code = requests.get(url)
    plain_text = source_code.text
    soup = BeautifulSoup(plain_text, "html.parser")
    return soup

def pageSpider(maxPages):
    page = 1
    while page <= maxPages:
        print("Page ", page, ":")
        url = "https://kat.cr/movies/" + str(page) + "/"
        soupCompatible = getSource(url)
        for link in soupCompatible.findAll('a', {'class':'cellMainLink'}):
            title = link.string
            print(title)
        print(" ")
        page += 1



#####################################################################################
again = 'y'
while again is 'y':
    try:
        inputPage = int(input("How many pages should I crawl: "))
        pageSpider(inputPage)
    except ValueError:
        print("PLEASE ENTER NUMBERS ONLY")

    again = str(input("To repeat, type 'y'. Else, input any: "))
###################################################################################