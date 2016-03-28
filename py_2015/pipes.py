import tailer


def _grep(pattern, lines):
    for line in lines:
        if pattern in line:
            yield line

lines = tailer.follow(open('log.log'))
grep_lines = _grep('fuck', lines)

for line in grep_lines:
    print line
