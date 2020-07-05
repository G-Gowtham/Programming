d = {"i", "like", "ice", "cream", "icecream", "man", "go", "mango", "and", "my", "phone", "iphone"}
s = "ilikemangoicecreamandmyiphone"


def try_break_sent(w="", sent="", words=[], out=[]):
    if w in d:
        try_break_sent(sent[:1], sent[1:], words[:] + [w], out)
    if sent != "":
        try_break_sent(w + sent[:1], sent[1:], words[:], out)
    elif w == "":
        out.append(words)

if __name__ == "__main__":
    out = []
    try_break_sent(sent=s, out=out)
    for sent in out:
        print(sent)
