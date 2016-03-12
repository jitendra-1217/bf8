'''
dropit.py
- Drop bookmarks, links, texts to local store

Usage:
    dropit -l [b] -> List all links [Only bookmarks]
    dropit -u https://www.abc.com [-t abc,def,zyx] -> New link into file [with tags]
    dropit -p [l] -> Create new paragraph text [List all]
'''


import shelve
import argparse
import time
import dropit_config as config

parser = argparse.ArgumentParser()
parser.add_argument('-l', '--list', nargs='?', const=True, default=False)
parser.add_argument('-b', '--bookmark', nargs='?', const=True, default=False)
parser.add_argument('-p', '--paragraph', nargs='?', const=True, default=False)
parser.add_argument('-u', '--url', default=False)
parser.add_argument('-t', '--tags', default=False)
args = parser.parse_args()

# Operations on paragraph file
if args.paragraph:
    db = shelve.open(config.PARAGRAPH_FILE)
    if args.paragraph == 'l':
        for key in db.keys():
            print '-'*10
            print db[key]['text']
            print '-'*10
    else:
        print 'Enter your text:\n'
        text = '\n'.join(iter(raw_input, ''))
        if text:
            db[str(time.time())] = {'text': text}
    db.close()
    exit(0)

# Operations on links file
if args.list:
    show_only_bookmarks = args.list == 'b'
    db = shelve.open(config.FILE)
    for key in db.keys():
        d = db[key]
        if show_only_bookmarks and not d['bookmark']:
            continue
        print d['url'] + ' / ' + ', '.join(d['tags'])
    db.close()
    exit(0)

if not args.url:
    exit(0)

db = shelve.open(config.FILE)
db[str(time.time())] = {
    'url': args.url,
    'tags': (args.tags).split(','),
    'bookmark': bool(args.bookmark)}
db.close()