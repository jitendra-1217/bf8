from concurrent import futures
import urllib2
import threading
import os


URLS = ['http://www.foxnews.com/',
        'http://www.cnn.com/',
        'http://europe.wsj.com/',
        'http://www.bbc.co.uk/',
        'http://some-made-up-domain.com/']


def print_callback_handler(fut):

    print '--> Callback .. <--'
    try:

        result = fut.result()
        print len(result)
    except Exception as e:
        print str(e)


def load_url(url, timeout):
    print '--> Loading url <--'
    print '--> Thread: ' + threading.current_thread().name + ' <--'
    print '--> OS PID: ' + str(os.getpid()) + ' <--'
    return urllib2.urlopen(url, timeout=timeout).read()

with futures.ThreadPoolExecutor(max_workers=5) as executor:

    # One way of doing it - Per thread blocking call

    future_to_url = dict((executor.submit(load_url, url, 60), url)
                         for url in URLS)

    for future in futures.as_completed(future_to_url):
        url = future_to_url[future]
        if future.exception() is not None:
            print('%r generated an exception: %s' % (url,
                                                     future.exception()))
        else:
            print('%r page is %d bytes' % (url, len(future.result())))

    print '--> Finished blocking threaded calls.. <--'
    print '--> Strating async callbacked threaded work.. <--'

    # Other way of doing it - Per thread async with callbacks
    for url in URLS:
        (executor.submit(load_url, url, 60)).add_done_callback(print_callback_handler)

    print '--> Last line in code.. not blocked. <--'
