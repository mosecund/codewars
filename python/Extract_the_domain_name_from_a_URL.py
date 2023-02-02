def domain_name(url):
    url = url.split("://")
    if('http' in url):
        url.remove('http')
    elif('https' in url):
        url.remove('https')
    url = url[0].split('.')
    if('www' in url[0]):
        url.remove('www')
    return url[0]