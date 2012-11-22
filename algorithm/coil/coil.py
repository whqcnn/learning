import re
import urllib2

NAME = "whqcnn"
PASSWORD = "521521"

def get_level_string(n):
    url = "http://www.hacker.org/coil/index.php?gotolevel=%d&name=%s&password=%s" % (
        n, NAME, PASSWORD)

    page = urllib2.urlopen(url)
    content = page.read()
    result = re.search(r'<param name="FlashVars" value="([^"]+)" />', content)
    if result:
        f = open('result.txt', 'w')
        f.write(result.group(1))
        f.write("\n");
        f.close()
        print result.group(1)
    else:
        print 'not found'

get_level_string(15)
