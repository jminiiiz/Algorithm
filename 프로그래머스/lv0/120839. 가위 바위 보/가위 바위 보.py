def solution(rsp):
    myDict = { '2': '0', '0': '5', '5': '2' }
    return ''.join(myDict[i] for i in rsp)