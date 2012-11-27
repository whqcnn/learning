import re
import urllib.request

NAME = "whqcnn"
PASSWORD = "521521"

def get_level_string(url):
    url = open("path.data").read()
    f = urllib.request.urlopen(url)
    page = f.read()
    print("Level %s" % re.search(b'Level: (\d+)', page).group(1))

    pattern = b'<param name="FlashVars" value="x=(\d+)&y=(\d+)&board=([\.X]+)" />'
    result = re.search(pattern, page)
    if not result:
        print("not found")
        return
    print("%s" % result.group(1).decode('ascii'), file=open('x.data', 'w'))
    print("%s" % result.group(2).decode('ascii'), file=open('y.data', 'w'))
    print("%s" % result.group(3).decode('ascii'), file=open('board.data', 'w'))

get_level_string(url)
