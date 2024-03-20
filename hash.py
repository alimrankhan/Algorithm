#hash tables #algorithm/data structure
import hashlib

str= 'Al Imran Khan'
ans_hash = hash(str)
ans_hashlib= hashlib.sha256(b'l Imran Khan')

print(ans_hash)
print(ans_hashlib)